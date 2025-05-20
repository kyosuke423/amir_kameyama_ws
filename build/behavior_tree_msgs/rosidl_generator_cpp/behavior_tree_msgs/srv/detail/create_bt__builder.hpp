// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:srv/CreateBT.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__CREATE_BT__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__CREATE_BT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/srv/detail/create_bt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace srv
{

namespace builder
{

class Init_CreateBT_Request_command
{
public:
  explicit Init_CreateBT_Request_command(::behavior_tree_msgs::srv::CreateBT_Request & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::srv::CreateBT_Request command(::behavior_tree_msgs::srv::CreateBT_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::srv::CreateBT_Request msg_;
};

class Init_CreateBT_Request_bt_name
{
public:
  Init_CreateBT_Request_bt_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CreateBT_Request_command bt_name(::behavior_tree_msgs::srv::CreateBT_Request::_bt_name_type arg)
  {
    msg_.bt_name = std::move(arg);
    return Init_CreateBT_Request_command(msg_);
  }

private:
  ::behavior_tree_msgs::srv::CreateBT_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::srv::CreateBT_Request>()
{
  return behavior_tree_msgs::srv::builder::Init_CreateBT_Request_bt_name();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace srv
{

namespace builder
{

class Init_CreateBT_Response_error_string
{
public:
  Init_CreateBT_Response_error_string()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_tree_msgs::srv::CreateBT_Response error_string(::behavior_tree_msgs::srv::CreateBT_Response::_error_string_type arg)
  {
    msg_.error_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::srv::CreateBT_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::srv::CreateBT_Response>()
{
  return behavior_tree_msgs::srv::builder::Init_CreateBT_Response_error_string();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__CREATE_BT__BUILDER_HPP_
