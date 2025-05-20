#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/empty.hpp"
#include "behavior_tree_msgs/action/mecanum_spin.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include <nav_msgs/msg/odometry.hpp>
#include "rclcpp_action/rclcpp_action.hpp"
#include <math.h>
#include <stdio.h>
#include <thread>
#include <chrono>
#include <std_msgs/msg/float64.hpp>

using namespace std::chrono_literals;

class MecanumSpin : public rclcpp::Node
{
public:
    using MecanumSpinAction = behavior_tree_msgs::action::MecanumSpin;
    using GoalHandleMecanumSpin = rclcpp_action::ServerGoalHandle<MecanumSpinAction>;

    rclcpp::TimerBase::SharedPtr get_timer() const { return timer_; }
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr get_publisher() const { return publisher_; }

    MecanumSpin()
        : Node("MecanumSpin"), loop_count_(0), state_("moving"), max_loops_(4)
    {
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/mecanum2/cmd_vel", 10);

        action_server_ = rclcpp_action::create_server<MecanumSpinAction>(
            this,
            "mecanum2/spin",
            std::bind(&MecanumSpin::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&MecanumSpin::handle_cancel, this, std::placeholders::_1),
            std::bind(&MecanumSpin::handle_accepted, this, std::placeholders::_1));

        move_duration_ = 10.0;
        stop_duration_ = 5.0;

        d_publisher_ = this->create_publisher<std_msgs::msg::Float64>("/d_optimal_value", 10);

        RCLCPP_INFO(this->get_logger(), "****** MecanumSpin action server started *****");
    }

private:
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp_action::Server<MecanumSpinAction>::SharedPtr action_server_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr d_publisher_;

    rclcpp::Time start_time_;
    std::string state_;
    int loop_count_;
    int max_loops_;
    double move_duration_;
    double stop_duration_;
    double d_op;

    std::shared_ptr<GoalHandleMecanumSpin> active_goal_handle_;

    rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID &,
        std::shared_ptr<const MecanumSpinAction::Goal> goal)
    {
        RCLCPP_INFO(this->get_logger(), "Received goal for MecanumSpin");
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<GoalHandleMecanumSpin>)
    {
        RCLCPP_INFO(this->get_logger(), "Received cancel request");
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void handle_accepted(const std::shared_ptr<GoalHandleMecanumSpin> goal_handle)
    {
        active_goal_handle_ = goal_handle;
        auto goal = goal_handle->get_goal();
        max_loops_ = static_cast<int>(goal->time);  // 型変換（uint8_t → int）

        loop_count_ = 0;
        state_ = "moving";
        start_time_ = this->now();
        
        d_op = goal->dop;

        timer_ = this->create_wall_timer(100ms, std::bind(&MecanumSpin::timer_callback, this));
    }

    void timer_callback()
    {
        if (!active_goal_handle_) return;
        auto result = std::make_shared<MecanumSpinAction::Result>();
        double elapsed = (this->now() - start_time_).seconds();
        geometry_msgs::msg::Twist twist;

        if (state_ == "moving")
        {
            if (elapsed < move_duration_)
            {
                twist.linear.y = 0.02;
                twist.angular.z = -0.02;
                publisher_->publish(twist);
                RCLCPP_INFO(this->get_logger(), "[%d] Moving... %.2f sec", loop_count_ + 1, elapsed);
            }
            else
            {
                state_ = "stopping";
                start_time_ = this->now();
                publisher_->publish(geometry_msgs::msg::Twist()); // stop
                RCLCPP_INFO(this->get_logger(), "[%d] Switching to stop phase", loop_count_ + 1);
            }
        }
        else if (state_ == "stopping")
        {
            if (elapsed < stop_duration_)
            {
                RCLCPP_INFO(this->get_logger(), "[%d] Stopping... %.2f sec", loop_count_ + 1, elapsed);
            }
            else
            {
                loop_count_++;
                if (loop_count_ >= max_loops_)
                {

                    RCLCPP_INFO(this->get_logger(), "Finished all loops.");
                    publisher_->publish(geometry_msgs::msg::Twist());  // 最終停止
                    // active_goal_handle_->succeed(std::make_shared<MecanumSpinAction::Result>());
                    
                    std_msgs::msg::Float64 msg;
                    msg.data = d_op;
                    d_publisher_->publish(msg);
                    
                    result->error_string = "success";
                    result->success = true;
                    active_goal_handle_->succeed(result);

                    timer_->cancel();
                }
                else
                {
                    state_ = "moving";
                    start_time_ = this->now();
                    RCLCPP_INFO(this->get_logger(), "Restarting movement. Loop %d", loop_count_ + 1);
                }
            }
        }
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    auto node = std::make_shared<MecanumSpin>();

    rclcpp::executors::SingleThreadedExecutor executor;
    executor.add_node(node);

    // Ctrl+Cで止められるようにspin
    executor.spin();

    // 停止処理（タイマーキャンセルと停止信号送信）
    if (node->get_timer()) {
        node->get_timer()->cancel();  // タイマー停止（もし残っていれば）
    }

    // ロボットの動きを止める
    geometry_msgs::msg::Twist stop_twist;
    node->get_publisher()->publish(stop_twist);

    rclcpp::shutdown();
    return 0;
}
