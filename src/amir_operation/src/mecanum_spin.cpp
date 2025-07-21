#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "std_msgs/msg/float64.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "behavior_tree_msgs/action/mecanum_spin.hpp"
#include "behavior_tree_msgs/action/ave_cov.hpp"
#include "behavior_tree_msgs/action/d_op.hpp"
#include <chrono>
#include <memory>
#include <string>

using namespace std::chrono_literals;

class MecanumSpin : public rclcpp::Node
{
public:
  using MecanumSpinAction = behavior_tree_msgs::action::MecanumSpin;
  using AveCovAction = behavior_tree_msgs::action::AveCov;
  using DOpAction = behavior_tree_msgs::action::DOp;
  using GoalHandleMecanumSpin = rclcpp_action::ServerGoalHandle<MecanumSpinAction>;
  using AveCovGoalHandle = rclcpp_action::ClientGoalHandle<AveCovAction>;
  using DOpGoalHandle = rclcpp_action::ClientGoalHandle<DOpAction>;

  MecanumSpin() : Node("mecanum_spin_server"), state_("idle"), loop_count_(0), threshold_(4)
  {
    publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/mecanum2/cmd_vel", 10);
    avecov_client_ = rclcpp_action::create_client<AveCovAction>(this, "/ave_cov");
    d_client_ = rclcpp_action::create_client<DOpAction>(this, "/d_op");

    d_subscriber_ = this->create_subscription<std_msgs::msg::Float64>(
      "/d_optimal_value", 10,
      [this](std_msgs::msg::Float64::SharedPtr msg) {
        d_optimal_value_ = msg->data;
      });

    action_server_ = rclcpp_action::create_server<MecanumSpinAction>(
      this,
      "mecanum2/spin",
      std::bind(&MecanumSpin::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
      std::bind(&MecanumSpin::handle_cancel, this, std::placeholders::_1),
      std::bind(&MecanumSpin::handle_accepted, this, std::placeholders::_1));

    timer_ = this->create_wall_timer(100ms, std::bind(&MecanumSpin::timer_callback, this));

    RCLCPP_INFO(this->get_logger(), "MecanumSpin server ready.");
  }

private:
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
  rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr d_subscriber_;
  rclcpp_action::Client<AveCovAction>::SharedPtr avecov_client_;
  rclcpp_action::Client<DOpAction>::SharedPtr d_client_;
  rclcpp_action::Server<MecanumSpinAction>::SharedPtr action_server_;
  rclcpp::TimerBase::SharedPtr timer_;

  std::shared_ptr<GoalHandleMecanumSpin> active_goal_;
  std::string state_;
  int loop_count_;
  int threshold_;
  double d_optimal_value_;
  rclcpp::Time start_time_;
  double move_duration_ = 10.0;
  double stop_duration_ = 10.0;

  rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID&,
                                          std::shared_ptr<const MecanumSpinAction::Goal> goal)
  {
    RCLCPP_INFO(this->get_logger(), "Received goal for MecanumSpin");
    threshold_ = goal->threshold;
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<GoalHandleMecanumSpin>)
  {
    RCLCPP_INFO(this->get_logger(), "Goal canceled");
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<GoalHandleMecanumSpin> goal_handle)
  {
    active_goal_ = goal_handle;
    loop_count_ = 0;
    state_ = "moving";
    start_time_ = this->now();
  }

  void timer_callback()
  {
    if (!active_goal_) return;

    geometry_msgs::msg::Twist twist;
    double elapsed = (this->now() - start_time_).seconds();

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
        publisher_->publish(geometry_msgs::msg::Twist());  // stop
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
        call_dop_action();
        state_ = "waiting_result";
      }
    }
  }

  void call_dop_action()
  {
    if (avecov_client_->wait_for_action_server(10s)) {
      auto avecov_goal_msg = AveCovAction::Goal();
      avecov_goal_msg.input_csv_path = "/home/dars-note-002/.ros/3object_cuboids_data.csv";
      avecov_goal_msg.output_csv_path = "/home/dars-note-002/.ros/output.csv";

      auto avecov_options = rclcpp_action::Client<AveCovAction>::SendGoalOptions();
      avecov_client_->async_send_goal(avecov_goal_msg, avecov_options);
      RCLCPP_INFO(this->get_logger(), "AveCov goal sent");
    } else {
      RCLCPP_WARN(this->get_logger(), "AveCov server not available");
    }

    if (!d_client_->wait_for_action_server(10s))
    {
      RCLCPP_ERROR(this->get_logger(), "DOp action server not available");
      finish_action(false, "DOp server unavailable");
      return;
    }

    auto goal_msg = DOpAction::Goal();
    goal_msg.input_csv_path = "/home/dars-note-002/.ros/output.csv";
    goal_msg.output_txt_path = "/home/dars-note-002/.ros/d_optimal_value.txt";

    auto send_goal_options = rclcpp_action::Client<DOpAction>::SendGoalOptions();
    send_goal_options.result_callback = std::bind(&MecanumSpin::dop_result_callback, this, std::placeholders::_1);

    d_client_->async_send_goal(goal_msg, send_goal_options);
  }

  void dop_result_callback(const DOpGoalHandle::WrappedResult& result)
  {
    if (result.code == rclcpp_action::ResultCode::SUCCEEDED && d_optimal_value_ >= threshold_)
    {
      finish_action(true, "success");
    }
    else
    {
      RCLCPP_INFO(this->get_logger(), "Restarting movement, D = %.2f < threshold", d_optimal_value_);
      state_ = "moving";
      start_time_ = this->now();
    }
  }

  void finish_action(bool success, const std::string& message)
  {
    if (!active_goal_) return;

    auto result = std::make_shared<MecanumSpinAction::Result>();
    result->success = success;
    result->error_string = message;
    active_goal_->succeed(result);
    active_goal_.reset();

    publisher_->publish(geometry_msgs::msg::Twist());  // stop
    state_ = "idle";
    RCLCPP_INFO(this->get_logger(), "Action finished: %s", message.c_str());
  }
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<MecanumSpin>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
