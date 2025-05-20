// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:srv/GetBT.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BT__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/srv/detail/get_bt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBT_Request_failed_nood_id
{
public:
  explicit Init_GetBT_Request_failed_nood_id(::behavior_tree_msgs::srv::GetBT_Request & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::srv::GetBT_Request failed_nood_id(::behavior_tree_msgs::srv::GetBT_Request::_failed_nood_id_type arg)
  {
    msg_.failed_nood_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::srv::GetBT_Request msg_;
};

class Init_GetBT_Request_goal_conditions
{
public:
  explicit Init_GetBT_Request_goal_conditions(::behavior_tree_msgs::srv::GetBT_Request & msg)
  : msg_(msg)
  {}
  Init_GetBT_Request_failed_nood_id goal_conditions(::behavior_tree_msgs::srv::GetBT_Request::_goal_conditions_type arg)
  {
    msg_.goal_conditions = std::move(arg);
    return Init_GetBT_Request_failed_nood_id(msg_);
  }

private:
  ::behavior_tree_msgs::srv::GetBT_Request msg_;
};

class Init_GetBT_Request_goal_condition
{
public:
  explicit Init_GetBT_Request_goal_condition(::behavior_tree_msgs::srv::GetBT_Request & msg)
  : msg_(msg)
  {}
  Init_GetBT_Request_goal_conditions goal_condition(::behavior_tree_msgs::srv::GetBT_Request::_goal_condition_type arg)
  {
    msg_.goal_condition = std::move(arg);
    return Init_GetBT_Request_goal_conditions(msg_);
  }

private:
  ::behavior_tree_msgs::srv::GetBT_Request msg_;
};

class Init_GetBT_Request_bt
{
public:
  explicit Init_GetBT_Request_bt(::behavior_tree_msgs::srv::GetBT_Request & msg)
  : msg_(msg)
  {}
  Init_GetBT_Request_goal_condition bt(::behavior_tree_msgs::srv::GetBT_Request::_bt_type arg)
  {
    msg_.bt = std::move(arg);
    return Init_GetBT_Request_goal_condition(msg_);
  }

private:
  ::behavior_tree_msgs::srv::GetBT_Request msg_;
};

class Init_GetBT_Request_type
{
public:
  Init_GetBT_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBT_Request_bt type(::behavior_tree_msgs::srv::GetBT_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_GetBT_Request_bt(msg_);
  }

private:
  ::behavior_tree_msgs::srv::GetBT_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::srv::GetBT_Request>()
{
  return behavior_tree_msgs::srv::builder::Init_GetBT_Request_type();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBT_Response_behavior_tree
{
public:
  Init_GetBT_Response_behavior_tree()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_tree_msgs::srv::GetBT_Response behavior_tree(::behavior_tree_msgs::srv::GetBT_Response::_behavior_tree_type arg)
  {
    msg_.behavior_tree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::srv::GetBT_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::srv::GetBT_Response>()
{
  return behavior_tree_msgs::srv::builder::Init_GetBT_Response_behavior_tree();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BT__BUILDER_HPP_
