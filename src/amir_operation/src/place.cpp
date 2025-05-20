#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "behavior_tree_msgs/action/place.hpp"
#include "behavior_tree_msgs/action/move_arm.hpp"
#include "behavior_tree_msgs/action/grasp.hpp"

using PlaceAction = behavior_tree_msgs::action::Place;
using MoveArmAction = behavior_tree_msgs::action::MoveArm;
using GraspAction = behavior_tree_msgs::action::Grasp;

class PlaceServer : public rclcpp::Node
{
public:
    PlaceServer() : Node("Place_server")
    {
        // Placeアクションサーバーを作成
        action_server_ = rclcpp_action::create_server<PlaceAction>(
            this,
            "place",
            std::bind(&PlaceServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&PlaceServer::handle_cancel, this, std::placeholders::_1),
            std::bind(&PlaceServer::handle_accepted, this, std::placeholders::_1));

        // MoveArmアクションクライアントを作成
        move_arm_client_ = rclcpp_action::create_client<MoveArmAction>(this, "amir/bt_move_arm");
        // Graspアクションクライアントを作成
        grasp_client_ = rclcpp_action::create_client<GraspAction>(this, "amir/bt_grasp");

        RCLCPP_INFO(this->get_logger(), "****** Place action server started ******");
    }

private:
    rclcpp_action::Server<PlaceAction>::SharedPtr action_server_;
    rclcpp_action::Client<MoveArmAction>::SharedPtr move_arm_client_;
    rclcpp_action::Client<GraspAction>::SharedPtr grasp_client_;

    rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID &uuid,
        std::shared_ptr<const PlaceAction::Goal> goal)
    {
        RCLCPP_INFO(this->get_logger(), "Received place goal: x=%f, y=%f, z=%f", goal->x, goal->y, goal->z);
        (void)uuid;
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<rclcpp_action::ServerGoalHandle<PlaceAction>> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "Cancel request received");
        (void)goal_handle;
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void handle_accepted(
        const std::shared_ptr<rclcpp_action::ServerGoalHandle<PlaceAction>> goal_handle)
    {
        std::thread([this, goal_handle]() {
            this->execute(goal_handle);
        }).detach();
    }

    void grasp(const std::shared_ptr<rclcpp_action::ServerGoalHandle<PlaceAction>> goal_handle)
    {
        auto goal = goal_handle->get_goal();
        auto result = std::make_shared<PlaceAction::Result>();
        
        GraspAction::Goal grasp_goal;
        grasp_goal.id = "place";



        // Graspアクションサーバーが利用可能かどうかを確認
        if (!grasp_client_->wait_for_action_server(std::chrono::seconds(5)))
        {
            RCLCPP_ERROR(this->get_logger(), "Grasp action server not available");
            // result->success = false;
            // result->error_message = "MoveArm action server not available";
            // goal_handle->abort(result);
            return;
        }

        auto send_goal_result = rclcpp_action::Client<GraspAction>::SendGoalOptions();

        send_goal_result.result_callback = [this, goal_handle, result](const rclcpp_action::ClientGoalHandle<GraspAction>::WrappedResult &grasp_result){
            // MoveArm サーバーからの結果を取得
            if (grasp_result.code == rclcpp_action::ResultCode::SUCCEEDED)
            {
                // success フィールドを確認
                // graspが成功したら、持ち上げる
                if (grasp_result.result->success)
                {
                    // RCLCPP_INFO(this->get_logger(), "MoveArm succeeded: %s", move_arm_result->error_string.c_str());
                    // MoveArmアクションのゴールを作成
                    MoveArmAction::Goal move_arm_goal;
                    //Place後の目標位置設定
                    float x1,y1,z1;
                    x1 = 0.30;
                    y1 = 0.0;
                    z1 = 0.60;

                    // move_arm_goal.x = goal->x;
                    // move_arm_goal.y = goal->y;
                    // move_arm_goal.z = goal->z;

                    //動作確認用
                    move_arm_goal.x = x1;
                    move_arm_goal.y = y1;
                    move_arm_goal.z = z1;

                    // MoveArmアクションサーバーが利用可能かどうかを確認
                    if (!move_arm_client_->wait_for_action_server(std::chrono::seconds(5)))
                    {
                        RCLCPP_ERROR(this->get_logger(), "MoveArm action server not available");
                        // result->success = false;
                        // result->error_message = "MoveArm action server not available";
                        // goal_handle->abort(result);
                        return;
                    }

                    auto send_goal_result = rclcpp_action::Client<MoveArmAction>::SendGoalOptions();

                    // 結果コールバックを設定
                    send_goal_result.result_callback = [this, goal_handle, result](const rclcpp_action::ClientGoalHandle<MoveArmAction>::WrappedResult &move_arm_result){
                        // MoveArm サーバーからの結果を取得
                        if (move_arm_result.code == rclcpp_action::ResultCode::SUCCEEDED)
                        {
                            // success フィールドを確認
                            if (move_arm_result.result->success)
                            {
                                // RCLCPP_INFO(this->get_logger(), "MoveArm succeeded: %s", move_arm_result->error_string.c_str());
                                auto result = std::make_shared<PlaceAction::Result>();
                                RCLCPP_INFO(this->get_logger(), "Place Successed");
                                result->error_string = "success"; // 成功メッセージを設定
                                goal_handle->succeed(result); // ゴール成功を通知

                            }
                            else
                            {
                                // RCLCPP_ERROR(this->get_logger(), "MoveArm failed: %s", move_arm_result->error_string.c_str());
                            }
                        }
                    };

                    // MoveArm アクションサーバーで処理を実行．ゴールを非同期で送信．サーバーがゴール処理を完了すると、クライアントの result_callback が呼び出される
                    move_arm_client_->async_send_goal(move_arm_goal, send_goal_result);

                }
                else
                {
                    // RCLCPP_ERROR(this->get_logger(), "MoveArm failed: %s", move_arm_result->error_string.c_str());
                }
            }
        };

        // Grasp アクションサーバーで処理を実行．ゴールを非同期で送信．サーバーがゴール処理を完了すると、クライアントの result_callback が呼び出される
        grasp_client_->async_send_goal(grasp_goal, send_goal_result);

        
    }


    void execute(const std::shared_ptr<rclcpp_action::ServerGoalHandle<PlaceAction>> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "Executing place action");

        auto goal = goal_handle->get_goal();
        auto result = std::make_shared<PlaceAction::Result>();

        // MoveArmアクションのゴールを作成
        MoveArmAction::Goal move_arm_goal;

        move_arm_goal.x = goal->x;
        move_arm_goal.y = goal->y;
        move_arm_goal.z = goal->z;

        // MoveArmアクションサーバーが利用可能かどうかを確認
        if (!move_arm_client_->wait_for_action_server(std::chrono::seconds(5)))
        {
            RCLCPP_ERROR(this->get_logger(), "MoveArm action server not available");
            // result->success = false;
            // result->error_message = "MoveArm action server not available";
            // goal_handle->abort(result);
            return;
        }

        auto send_goal_result = rclcpp_action::Client<MoveArmAction>::SendGoalOptions();

        // 結果コールバックを設定
        send_goal_result.result_callback = [this, goal_handle, result](const rclcpp_action::ClientGoalHandle<MoveArmAction>::WrappedResult &move_arm_result){
            // MoveArm サーバーからの結果を取得
            if (move_arm_result.code == rclcpp_action::ResultCode::SUCCEEDED)
            {
                // success フィールドを確認
                if (move_arm_result.result->success)
                {
                    // RCLCPP_INFO(this->get_logger(), "MoveArm succeeded: %s", move_arm_result->error_string.c_str());
                    
                    // グラスプ処理を実行
                    grasp(goal_handle);

                }
                else
                {
                    // RCLCPP_ERROR(this->get_logger(), "MoveArm failed: %s", move_arm_result->error_string.c_str());
                }
            }
        };

        // MoveArm アクションサーバーで処理を実行．ゴールを非同期で送信．サーバーがゴール処理を完了すると、クライアントの result_callback が呼び出される
        move_arm_client_->async_send_goal(move_arm_goal, send_goal_result);

    }


};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PlaceServer>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
