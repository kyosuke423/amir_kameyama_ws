#include <rclcpp/rclcpp.hpp>
#include <amir_interfaces/msg/amir_cmd.hpp>
#include <string>

class JointPublisher : public rclcpp::Node
{
public:
  JointPublisher()
  : Node("vis_joint_publisher")
  {
    joint_pub_ = this->create_publisher<amir_interfaces::msg::AmirCmd>("/motor_sub", 10);
    publish_joint_states(); // 一度だけ呼び出す
  }

private:
  void publish_joint_states()
  {
    auto joint = amir_interfaces::msg::AmirCmd();
    joint.angle[0] = -2967.0;
    joint.angle[1] = -740.0;
    joint.angle[2] = 1240.0;
    joint.angle[3] = -1200.0;
    joint.angle[4] = 2748.0;
    joint.angle[5] = -1309.0;  

    // joint.angle[0] = 0.0;
    // joint.angle[1] = 0.0;
    // joint.angle[2] = 0.0;
    // joint.angle[3] = 0.0;
    // joint.angle[4] = 0.0;
    // joint.angle[5] = 0.0;

    joint.vel[0] = 300.0;
    joint.vel[1] = 300.0;
    joint.vel[2] = 300.0;
    joint.vel[3] = 200.0;
    joint.vel[4] = 400.0;
    joint.vel[5] = 200.0;

    joint_pub_->publish(joint);

    RCLCPP_INFO(this->get_logger(), "Published joint states.");
  }

  rclcpp::Publisher<amir_interfaces::msg::AmirCmd>::SharedPtr joint_pub_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<JointPublisher>();
  rclcpp::spin_some(node); 
  rclcpp::shutdown();
  return 0;
}