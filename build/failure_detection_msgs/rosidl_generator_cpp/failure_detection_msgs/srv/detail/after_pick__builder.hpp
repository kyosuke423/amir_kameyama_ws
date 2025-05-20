// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from failure_detection_msgs:srv/AfterPick.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__SRV__DETAIL__AFTER_PICK__BUILDER_HPP_
#define FAILURE_DETECTION_MSGS__SRV__DETAIL__AFTER_PICK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "failure_detection_msgs/srv/detail/after_pick__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace failure_detection_msgs
{

namespace srv
{

namespace builder
{

class Init_AfterPick_Request_grasped_object
{
public:
  explicit Init_AfterPick_Request_grasped_object(::failure_detection_msgs::srv::AfterPick_Request & msg)
  : msg_(msg)
  {}
  ::failure_detection_msgs::srv::AfterPick_Request grasped_object(::failure_detection_msgs::srv::AfterPick_Request::_grasped_object_type arg)
  {
    msg_.grasped_object = std::move(arg);
    return std::move(msg_);
  }

private:
  ::failure_detection_msgs::srv::AfterPick_Request msg_;
};

class Init_AfterPick_Request_error_string
{
public:
  explicit Init_AfterPick_Request_error_string(::failure_detection_msgs::srv::AfterPick_Request & msg)
  : msg_(msg)
  {}
  Init_AfterPick_Request_grasped_object error_string(::failure_detection_msgs::srv::AfterPick_Request::_error_string_type arg)
  {
    msg_.error_string = std::move(arg);
    return Init_AfterPick_Request_grasped_object(msg_);
  }

private:
  ::failure_detection_msgs::srv::AfterPick_Request msg_;
};

class Init_AfterPick_Request_bt_node_name
{
public:
  Init_AfterPick_Request_bt_node_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AfterPick_Request_error_string bt_node_name(::failure_detection_msgs::srv::AfterPick_Request::_bt_node_name_type arg)
  {
    msg_.bt_node_name = std::move(arg);
    return Init_AfterPick_Request_error_string(msg_);
  }

private:
  ::failure_detection_msgs::srv::AfterPick_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::failure_detection_msgs::srv::AfterPick_Request>()
{
  return failure_detection_msgs::srv::builder::Init_AfterPick_Request_bt_node_name();
}

}  // namespace failure_detection_msgs


namespace failure_detection_msgs
{

namespace srv
{

namespace builder
{

class Init_AfterPick_Response_command
{
public:
  Init_AfterPick_Response_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::failure_detection_msgs::srv::AfterPick_Response command(::failure_detection_msgs::srv::AfterPick_Response::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::failure_detection_msgs::srv::AfterPick_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::failure_detection_msgs::srv::AfterPick_Response>()
{
  return failure_detection_msgs::srv::builder::Init_AfterPick_Response_command();
}

}  // namespace failure_detection_msgs

#endif  // FAILURE_DETECTION_MSGS__SRV__DETAIL__AFTER_PICK__BUILDER_HPP_
