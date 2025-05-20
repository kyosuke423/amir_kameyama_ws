// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from failure_detection_msgs:msg/Solution.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__MSG__DETAIL__SOLUTION__BUILDER_HPP_
#define FAILURE_DETECTION_MSGS__MSG__DETAIL__SOLUTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "failure_detection_msgs/msg/detail/solution__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace failure_detection_msgs
{

namespace msg
{

namespace builder
{

class Init_Solution_bb_message
{
public:
  explicit Init_Solution_bb_message(::failure_detection_msgs::msg::Solution & msg)
  : msg_(msg)
  {}
  ::failure_detection_msgs::msg::Solution bb_message(::failure_detection_msgs::msg::Solution::_bb_message_type arg)
  {
    msg_.bb_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::failure_detection_msgs::msg::Solution msg_;
};

class Init_Solution_priorities
{
public:
  explicit Init_Solution_priorities(::failure_detection_msgs::msg::Solution & msg)
  : msg_(msg)
  {}
  Init_Solution_bb_message priorities(::failure_detection_msgs::msg::Solution::_priorities_type arg)
  {
    msg_.priorities = std::move(arg);
    return Init_Solution_bb_message(msg_);
  }

private:
  ::failure_detection_msgs::msg::Solution msg_;
};

class Init_Solution_solutions
{
public:
  explicit Init_Solution_solutions(::failure_detection_msgs::msg::Solution & msg)
  : msg_(msg)
  {}
  Init_Solution_priorities solutions(::failure_detection_msgs::msg::Solution::_solutions_type arg)
  {
    msg_.solutions = std::move(arg);
    return Init_Solution_priorities(msg_);
  }

private:
  ::failure_detection_msgs::msg::Solution msg_;
};

class Init_Solution_bt_node_name
{
public:
  Init_Solution_bt_node_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Solution_solutions bt_node_name(::failure_detection_msgs::msg::Solution::_bt_node_name_type arg)
  {
    msg_.bt_node_name = std::move(arg);
    return Init_Solution_solutions(msg_);
  }

private:
  ::failure_detection_msgs::msg::Solution msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::failure_detection_msgs::msg::Solution>()
{
  return failure_detection_msgs::msg::builder::Init_Solution_bt_node_name();
}

}  // namespace failure_detection_msgs

#endif  // FAILURE_DETECTION_MSGS__MSG__DETAIL__SOLUTION__BUILDER_HPP_
