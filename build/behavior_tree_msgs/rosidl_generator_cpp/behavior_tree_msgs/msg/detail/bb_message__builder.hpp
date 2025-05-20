// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:msg/BBMessage.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_MESSAGE__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/msg/detail/bb_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace msg
{

namespace builder
{

class Init_BBMessage_float_array_set
{
public:
  explicit Init_BBMessage_float_array_set(::behavior_tree_msgs::msg::BBMessage & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::msg::BBMessage float_array_set(::behavior_tree_msgs::msg::BBMessage::_float_array_set_type arg)
  {
    msg_.float_array_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::msg::BBMessage msg_;
};

class Init_BBMessage_paths
{
public:
  explicit Init_BBMessage_paths(::behavior_tree_msgs::msg::BBMessage & msg)
  : msg_(msg)
  {}
  Init_BBMessage_float_array_set paths(::behavior_tree_msgs::msg::BBMessage::_paths_type arg)
  {
    msg_.paths = std::move(arg);
    return Init_BBMessage_float_array_set(msg_);
  }

private:
  ::behavior_tree_msgs::msg::BBMessage msg_;
};

class Init_BBMessage_poses
{
public:
  Init_BBMessage_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BBMessage_paths poses(::behavior_tree_msgs::msg::BBMessage::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_BBMessage_paths(msg_);
  }

private:
  ::behavior_tree_msgs::msg::BBMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::msg::BBMessage>()
{
  return behavior_tree_msgs::msg::builder::Init_BBMessage_poses();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_MESSAGE__BUILDER_HPP_
