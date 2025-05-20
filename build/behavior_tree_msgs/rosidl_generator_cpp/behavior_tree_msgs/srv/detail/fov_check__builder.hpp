// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:srv/FovCheck.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__FOV_CHECK__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__FOV_CHECK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/srv/detail/fov_check__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace srv
{

namespace builder
{

class Init_FovCheck_Request_object_id
{
public:
  explicit Init_FovCheck_Request_object_id(::behavior_tree_msgs::srv::FovCheck_Request & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::srv::FovCheck_Request object_id(::behavior_tree_msgs::srv::FovCheck_Request::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::srv::FovCheck_Request msg_;
};

class Init_FovCheck_Request_target_position
{
public:
  Init_FovCheck_Request_target_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FovCheck_Request_object_id target_position(::behavior_tree_msgs::srv::FovCheck_Request::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return Init_FovCheck_Request_object_id(msg_);
  }

private:
  ::behavior_tree_msgs::srv::FovCheck_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::srv::FovCheck_Request>()
{
  return behavior_tree_msgs::srv::builder::Init_FovCheck_Request_target_position();
}

}  // namespace behavior_tree_msgs


namespace behavior_tree_msgs
{

namespace srv
{

namespace builder
{

class Init_FovCheck_Response_in_fov
{
public:
  Init_FovCheck_Response_in_fov()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::behavior_tree_msgs::srv::FovCheck_Response in_fov(::behavior_tree_msgs::srv::FovCheck_Response::_in_fov_type arg)
  {
    msg_.in_fov = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::srv::FovCheck_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::srv::FovCheck_Response>()
{
  return behavior_tree_msgs::srv::builder::Init_FovCheck_Response_in_fov();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__FOV_CHECK__BUILDER_HPP_
