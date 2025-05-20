// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:msg/BTStatus.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BT_STATUS__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/msg/detail/bt_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace msg
{

namespace builder
{

class Init_BTStatus_bt_status
{
public:
  explicit Init_BTStatus_bt_status(::behavior_tree_msgs::msg::BTStatus & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::msg::BTStatus bt_status(::behavior_tree_msgs::msg::BTStatus::_bt_status_type arg)
  {
    msg_.bt_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::msg::BTStatus msg_;
};

class Init_BTStatus_root_status
{
public:
  explicit Init_BTStatus_root_status(::behavior_tree_msgs::msg::BTStatus & msg)
  : msg_(msg)
  {}
  Init_BTStatus_bt_status root_status(::behavior_tree_msgs::msg::BTStatus::_root_status_type arg)
  {
    msg_.root_status = std::move(arg);
    return Init_BTStatus_bt_status(msg_);
  }

private:
  ::behavior_tree_msgs::msg::BTStatus msg_;
};

class Init_BTStatus_bt
{
public:
  Init_BTStatus_bt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BTStatus_root_status bt(::behavior_tree_msgs::msg::BTStatus::_bt_type arg)
  {
    msg_.bt = std::move(arg);
    return Init_BTStatus_root_status(msg_);
  }

private:
  ::behavior_tree_msgs::msg::BTStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::msg::BTStatus>()
{
  return behavior_tree_msgs::msg::builder::Init_BTStatus_bt();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BT_STATUS__BUILDER_HPP_
