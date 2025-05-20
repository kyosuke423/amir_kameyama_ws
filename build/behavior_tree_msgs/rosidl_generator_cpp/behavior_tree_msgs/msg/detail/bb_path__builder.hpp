// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:msg/BBPath.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_PATH__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/msg/detail/bb_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace msg
{

namespace builder
{

class Init_BBPath_value
{
public:
  explicit Init_BBPath_value(::behavior_tree_msgs::msg::BBPath & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::msg::BBPath value(::behavior_tree_msgs::msg::BBPath::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::msg::BBPath msg_;
};

class Init_BBPath_key
{
public:
  Init_BBPath_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BBPath_value key(::behavior_tree_msgs::msg::BBPath::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_BBPath_value(msg_);
  }

private:
  ::behavior_tree_msgs::msg::BBPath msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::msg::BBPath>()
{
  return behavior_tree_msgs::msg::builder::Init_BBPath_key();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BB_PATH__BUILDER_HPP_
