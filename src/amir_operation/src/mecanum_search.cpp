#include "rclcpp/rclcpp.hpp" // ROS 2の基本的なNode機能を提供
#include "std_msgs/msg/empty.hpp" // 空のメッセージ型
#include "behavior_tree_msgs/action/mecanum_search.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp" 
#include <nav_msgs/msg/odometry.hpp>
#include "rclcpp_action/rclcpp_action.hpp" // アクションサーバー作成用ライブラリ
#include <math.h>
#include <stdio.h>
#include <thread>

#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Matrix3x3.h>

#include "sensor_msgs/msg/imu.hpp"

// MecanumSearchクラスを定義
class  MecanumSearch : public rclcpp::Node
{
public:
    using  MecanumSearchAction = behavior_tree_msgs::action:: MecanumSearch;
    using GoalHandlemecanum_search = rclcpp_action::ServerGoalHandle<MecanumSearchAction>;

    MecanumSearch()
        : Node("MecanumSearch"), meca_x(0.0), meca_y(0.0)
    {
        rclcpp::QoS qos_profile(10);
        qos_profile.reliability(RMW_QOS_POLICY_RELIABILITY_RELIABLE);

        // オドメトリ情報のサブスクライバー
        // move_meca_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
        //     "/odom", qos_profile,
        //     std::bind(&MoveMeca::odom_callback, this, std::placeholders::_1));
        
        // LittleSLAMによる自己位置情報のサブスクライバー
        pose_sub_ = this->create_subscription<geometry_msgs::msg::PoseStamped>(
            "/mecanum2/current_pose",qos_profile,
            std::bind(&MecanumSearch::poseCallback,this,std::placeholders::_1));

        imu_sub_ = this->create_subscription<sensor_msgs::msg::Imu>(
            "/imu/data", qos_profile,
            std::bind(&MecanumSearch::imuCallback, this, std::placeholders::_1));

        // メカナムに速度司令を送るパブリッシャー
        cmd_vel_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("/mecanum2/cmd_vel", 10);

        // アクションサーバーの初期化
        action_server_ = rclcpp_action::create_server<MecanumSearchAction>(
            this,
            "/mecanum2/mecanum_search",
            std::bind(&MecanumSearch::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&MecanumSearch::handle_cancel, this, std::placeholders::_1),
            std::bind(&MecanumSearch::handle_accepted, this, std::placeholders::_1));

        RCLCPP_INFO(this->get_logger(), "****** MecanumSearch action server started *****");
    }

private:
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr move_meca_pub_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr move_meca_sub_;
    rclcpp_action::Server<MecanumSearchAction>::SharedPtr action_server_;
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_sub_; //poseをサブスクライブ(Little SLAMを使った自己位置)
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_pub_;
    rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr imu_sub_;

    double robot_x;
    double robot_y;
    double roll, pitch, yaw;

    double imu_roll, imu_pitch, imu_yaw;

    // 現在位置（シンプルな変数更新なので、競合対策が必要な場合はmutex等の導入を検討）
    float meca_x;
    float meca_y;

    // ゴール受付
    rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID &uuid,
        std::shared_ptr<const MecanumSearchAction::Goal> goal)
    {
        RCLCPP_INFO(this->get_logger(), "Received Mecanum Search goal request");
        (void)uuid;
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    // キャンセル受付
    rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<GoalHandlemecanum_search> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
        (void)goal_handle;
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    // ゴール処理開始
    void handle_accepted(const std::shared_ptr<GoalHandlemecanum_search> goal_handle)
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

    void poseCallback(const geometry_msgs::msg::PoseStamped::SharedPtr msg){
        robot_x = msg->pose.position.x;
        robot_y = -(msg->pose.position.y);

        // クォータニオン → yaw
        tf2::Quaternion q(
            msg->pose.orientation.x,
            msg->pose.orientation.y,
            msg->pose.orientation.z,
            msg->pose.orientation.w);
        tf2::Matrix3x3 m(q);
        m.getRPY(roll, pitch, yaw);
    }

    void imuCallback(const sensor_msgs::msg::Imu::SharedPtr imuMsg)
    {
        tf2::Quaternion q(
            imuMsg->orientation.x,
            imuMsg->orientation.y,
            imuMsg->orientation.z,
            imuMsg->orientation.w);
        tf2::Matrix3x3 m(q);
        m.getRPY(imu_roll, imu_pitch, imu_yaw);
        double yaw_angle_deg = RadToDeg(imu_yaw + M_PI/2);
        // std::cout << "yaw :" << yaw_angle_deg << std::endl; 
    }

    double RadToDeg(double rad){
        return rad * (180.0/M_PI);
    } 

    // -pi〜piに角度を正規化
    double normalizeAngle(double angle)
    {
        while (angle > M_PI) angle -= 2.0 * M_PI;
        while (angle < -M_PI) angle += 2.0 * M_PI;
        return angle;
    }

    // アクション実行処理
    void execute(const std::shared_ptr<GoalHandlemecanum_search> goal_handle, float G_x, float G_y)
    {
        RCLCPP_INFO(this->get_logger(), "Executing Mecanum Search action");
        auto result = std::make_shared<MecanumSearchAction::Result>();
        RCLCPP_INFO(this->get_logger(), "Mecanum Search start");

        rclcpp::Rate loop_rate(10); // 10Hzループ
        geometry_msgs::msg::Twist cmd;

        while (rclcpp::ok()) {
            // 目標への相対角度（世界座標系）
            double dx = G_x - robot_x;
            double dy = G_y - robot_y;

            std::cout << "G_x :" << G_x << "G_y :" << G_y << std::endl;   
            std::cout << "robot_x :" << robot_x << "robot_y :" << robot_y << std::endl;
            double target_yaw = std::atan2(dy, dx);

            // yaw差分（-π〜πに正規化）
            double delta_yaw = normalizeAngle(target_yaw - (imu_yaw + M_PI/2));

            // 回転速度指令
            cmd.angular.z = 0.2 * delta_yaw;  // 比例制御（P制御）
            cmd.linear.x = 0.0;
            cmd.linear.y = 0.0;

            std::cout << "target_yaw :" << RadToDeg(target_yaw) << std::endl;  
            std::cout << "delta_yaw :" << RadToDeg(delta_yaw) << std::endl;   
            std::cout << "yaw :" << RadToDeg(imu_yaw + M_PI/2) << std::endl; 

            cmd_vel_pub_->publish(cmd);
            loop_rate.sleep();

            if (imu_yaw == 0) {
                for (int i = 0; i < 10; ++i) {
                    geometry_msgs::msg::Twist stop_msg;
                    stop_msg.angular.z = 0.0;
                    cmd_vel_pub_->publish(stop_msg);
                    loop_rate.sleep();
                }
            }

            // 閾値以下なら停止
            if (std::abs(delta_yaw) < 0.1) { //約5deg
                for (int i = 0; i < 10; ++i) {
                    geometry_msgs::msg::Twist stop_msg;
                    stop_msg.angular.z = 0.0;
                    cmd_vel_pub_->publish(stop_msg);
                    loop_rate.sleep();
                }
                // result->error_string = "success";
                // result->success = true;
                // goal_handle->succeed(result);
                break;
            }
        }
        result->error_string = "success";
        result->success = true;
        goal_handle->succeed(result);
        RCLCPP_INFO(this->get_logger(), "Mecanum Search finish");
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MecanumSearch>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}