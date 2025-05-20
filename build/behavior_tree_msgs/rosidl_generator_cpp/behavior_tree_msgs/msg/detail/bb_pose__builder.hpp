// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:msg/BBPose.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_POSE__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/msg/detail/bb_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace msg
{

namespace builder
{

class Init_BBPose_value
{
public:
  explicit Init_BBPose_value(::behavior_tree_msgs::msg::BBPose & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::msg::BBPose value(::behavior_tree_msgs::msg::BBPose::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::msg::BBPose msg_;
};

class Init_BBPose_key
{
public:
  Init_BBPose_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BBPose_value key(::behavior_tree_msgs::msg::BBPose::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_BBPose_value(msg_);
  }

private:
  ::behavior_tree_msgs::msg::BBPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::msg::BBPose>()
{
  return behavior_tree_msgs::msg::builder::Init_BBPose_key();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_POSE__BUILDER_HPP_
