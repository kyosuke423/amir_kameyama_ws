// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from failure_detection_msgs:srv/PathCheck.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__SRV__DETAIL__PATH_CHECK__BUILDER_HPP_
#define FAILURE_DETECTION_MSGS__SRV__DETAIL__PATH_CHECK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "failure_detection_msgs/srv/detail/path_check__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace failure_detection_msgs
{

namespace srv
{

namespace builder
{

class Init_PathCheck_Request_paths
{
public:
  Init_PathCheck_Request_paths()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::failure_detection_msgs::srv::PathCheck_Request paths(::failure_detection_msgs::srv::PathCheck_Request::_paths_type arg)
  {
    msg_.paths = std::move(arg);
    return std::move(msg_);
  }

private:
  ::failure_detection_msgs::srv::PathCheck_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::failure_detection_msgs::srv::PathCheck_Request>()
{
  return failure_detection_msgs::srv::builder::Init_PathCheck_Request_paths();
}

}  // namespace failure_detection_msgs


namespace failure_detection_msgs
{

namespace srv
{

namespace builder
{

class Init_PathCheck_Response_info_set
{
public:
  explicit Init_PathCheck_Response_info_set(::failure_detection_msgs::srv::PathCheck_Response & msg)
  : msg_(msg)
  {}
  ::failure_detection_msgs::srv::PathCheck_Response info_set(::failure_detection_msgs::srv::PathCheck_Response::_info_set_type arg)
  {
    msg_.info_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::failure_detection_msgs::srv::PathCheck_Response msg_;
};

class Init_PathCheck_Response_error_strings
{
public:
  Init_PathCheck_Response_error_strings()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathCheck_Response_info_set error_strings(::failure_detection_msgs::srv::PathCheck_Response::_error_strings_type arg)
  {
    msg_.error_strings = std::move(arg);
    return Init_PathCheck_Response_info_set(msg_);
  }

private:
  ::failure_detection_msgs::srv::PathCheck_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::failure_detection_msgs::srv::PathCheck_Response>()
{
  return failure_detection_msgs::srv::builder::Init_PathCheck_Response_error_strings();
}

}  // namespace failure_detection_msgs

#endif  // FAILURE_DETECTION_MSGS__SRV__DETAIL__PATH_CHECK__BUILDER_HPP_
