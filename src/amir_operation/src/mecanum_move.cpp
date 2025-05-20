#include "rclcpp/rclcpp.hpp" // ROS 2の基本的なNode機能を提供
#include "std_msgs/msg/empty.hpp" // 空のメッセージ型
#include "behavior_tree_msgs/action/mecanum_move.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp" 
#include <nav_msgs/msg/odometry.hpp>
#include "rclcpp_action/rclcpp_action.hpp" // アクションサーバー作成用ライブラリ
#include <math.h>
#include <stdio.h>
#include <thread>
#include <mutex>

// move_mecaクラスを定義
class MecanumMove : public rclcpp::Node
{
public:
    using MecanumMoveAction = behavior_tree_msgs::action::MecanumMove;
    using GoalHandlemecanum_move = rclcpp_action::ServerGoalHandle<MecanumMoveAction>;

    MecanumMove()
        : Node("MecanumMove"), meca_x(0.0), meca_y(0.0)
    {
        rclcpp::QoS qos_profile(10);
        qos_profile.reliability(RMW_QOS_POLICY_RELIABILITY_RELIABLE);

        // "/rover_twist"トピックへ指令を送信するパブリッシャー
        move_meca_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("/mecanum2/cmd_vel", 10);

        // オドメトリ情報のサブスクライバー
        // move_meca_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
        //     "mecanum2/odom1", qos_profile,
        //     std::bind(&MecanumMove::odom_callback, this, std::placeholders::_1));
        
        // LittleSLAMによる自己位置情報のサブスクライバー
        amir_pose_sub_ = this->create_subscription<geometry_msgs::msg::PoseStamped>(
            "mecanum2/current_pose",qos_profile,
            std::bind(&MecanumMove::mecanumPoseCallback,this,std::placeholders::_1));

        // アクションサーバーの初期化
        action_server_ = rclcpp_action::create_server<MecanumMoveAction>(
            this,
            "mecanum2/move_mecanum",
            std::bind(&MecanumMove::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&MecanumMove::handle_cancel, this, std::placeholders::_1),
            std::bind(&MecanumMove::handle_accepted, this, std::placeholders::_1));
        
        std::mutex pose_mutex; 

        RCLCPP_INFO(this->get_logger(), "****** MecanumMove action server started *****");
    }

private:
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr move_meca_pub_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr move_meca_sub_;
    rclcpp_action::Server<MecanumMoveAction>::SharedPtr action_server_;
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr amir_pose_sub_; //AMIRのposeをサブスクライブ(Little SLAMを使った自己位置)
    geometry_msgs::msg::PoseStamped amir_pose; //Little SLAMから取得するAMIRの位置
    std::mutex pose_mutex;

    // 現在位置（シンプルな変数更新なので、競合対策が必要な場合はmutex等の導入を検討）
    float meca_x;
    float meca_y;

    // ゴール受付
    rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID &uuid,
        std::shared_ptr<const MecanumMoveAction::Goal> goal)
    {
        RCLCPP_INFO(this->get_logger(), "Received move_meca goal request");
        (void)uuid;
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    // キャンセル受付
    rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<GoalHandlemecanum_move> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
        (void)goal_handle;
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    // ゴール処理開始
    void handle_accepted(const std::shared_ptr<GoalHandlemecanum_move> goal_handle)
    {
        std::thread([this, goal_handle]() {
            auto goal = goal_handle->get_goal();
            float G_x = goal->posi_x;
            float G_y = goal->posi_y;
    
            execute(goal_handle, G_x, G_y);
        }).detach();
    }

    // オドメトリのコールバック
    // void odom_callback(const std::shared_ptr<nav_msgs::msg::Odometry> msg)
    // {
    //     meca_x = msg->pose.pose.position.x;
    //     meca_y = msg->pose.pose.position.y;
    //     // デバッグ用: RCLCPP_INFO(this->get_logger(), "meca_x:%f, meca_y:%f", meca_x, meca_y);
    // }

    // まだ試せていない
    void mecanumPoseCallback(const geometry_msgs::msg::PoseStamped::SharedPtr amirPoseMsg){
        std::lock_guard<std::mutex> lock(pose_mutex);
        amir_pose = *amirPoseMsg;
        meca_x = amir_pose.pose.position.x;
        meca_y = amir_pose.pose.position.y;
        // std::cout << "mecanum X :" << amir_pose.pose.position.x << std::endl;
        // std::cout << "mecanum Y :" << amir_pose.pose.position.y << std::endl;
    }

    // アクション実行処理
    void execute(const std::shared_ptr<GoalHandlemecanum_move> goal_handle, float G_x, float G_y)
    {
        RCLCPP_INFO(this->get_logger(), "Executing move_meca action");
        auto result = std::make_shared<MecanumMoveAction::Result>();
        RCLCPP_INFO(this->get_logger(), "move_meca start");
        RCLCPP_INFO(this->get_logger(), "Goal X:%f", G_x);
        RCLCPP_INFO(this->get_logger(), "Goal Y:%f", G_y);
        
        rclcpp::Rate loop_rate(10); // 10Hzループ
        geometry_msgs::msg::Twist cmd;

        while (rclcpp::ok()) {
            float current_x, current_y;
            {
                std::lock_guard<std::mutex> lock(pose_mutex);  // ← ロック
                current_x = meca_x;
                current_y = - meca_y; //littleSLAMは何故か逆
            }
            // 現在位置と目標位置の距離を計算
            float distance = std::sqrt((G_x - current_x) * (G_x - current_x) + (G_y - current_y) * (G_y - current_y));
            // RCLCPP_INFO(this->get_logger(), "distance: %f", distance);

            // 目標に十分近い場合
            if (distance < 0.20) { // しきい値（例: 20cm以内）
                RCLCPP_INFO(this->get_logger(), "Reached target position");
                // 複数回、ゼロ速度の指令を発行して完全停止を指示する
                for (int i = 0; i < 10; ++i) {
                    geometry_msgs::msg::Twist stop_msg;
                    stop_msg.linear.x = 0.0;
                    stop_msg.linear.y = 0.0;
                    stop_msg.linear.z = 0.0;
                    stop_msg.angular.x = 0.0;
                    stop_msg.angular.y = 0.0;
                    stop_msg.angular.z = 0.0;
                    move_meca_pub_->publish(stop_msg);
                    loop_rate.sleep();
                }
                result->error_string = "success";
                result->success = true;
                goal_handle->succeed(result);
                break;
            }

            // 目標までの距離が近づくと、ゲインを下げて急激な指令変化を抑制
            float gain = 0.10;
            if (distance < 0.5) {
                gain = 0.05;
            }

            // P制御により速度指令を計算
            cmd.linear.x = gain * (G_x - current_x);
            cmd.linear.y = gain * (G_y - current_y);
            cmd.linear.z = 0.0;

            // angular成分も明示的にゼロに設定
            cmd.angular.x = 0.0;
            cmd.angular.y = 0.0;
            cmd.angular.z = 0.0;

            // 速度の上限を設定（x方向）
            if (cmd.linear.x > 0.10)
                cmd.linear.x = 0.10;
            else if (cmd.linear.x < -0.10)
                cmd.linear.x = -0.10;
            // y方向も同様
            if (cmd.linear.y > 0.10)
                cmd.linear.y = 0.10;
            else if (cmd.linear.y < -0.10)
                cmd.linear.y = -0.10;

            move_meca_pub_->publish(cmd);
            loop_rate.sleep();
        }
        RCLCPP_INFO(this->get_logger(), "move_meca finish");
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MecanumMove>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
