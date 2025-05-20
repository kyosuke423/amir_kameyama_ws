// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from observation_msgs:srv/PathCheck.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__SRV__DETAIL__PATH_CHECK__BUILDER_HPP_
#define OBSERVATION_MSGS__SRV__DETAIL__PATH_CHECK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "observation_msgs/srv/detail/path_check__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace observation_msgs
{

namespace srv
{

namespace builder
{

class Init_PathCheck_Request_path
{
public:
  Init_PathCheck_Request_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::observation_msgs::srv::PathCheck_Request path(::observation_msgs::srv::PathCheck_Request::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::observation_msgs::srv::PathCheck_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::observation_msgs::srv::PathCheck_Request>()
{
  return observation_msgs::srv::builder::Init_PathCheck_Request_path();
}

}  // namespace observation_msgs


namespace observation_msgs
{

namespace srv
{

namespace builder
{

class Init_PathCheck_Response_anomaly_score
{
public:
  explicit Init_PathCheck_Response_anomaly_score(::observation_msgs::srv::PathCheck_Response & msg)
  : msg_(msg)
  {}
  ::observation_msgs::srv::PathCheck_Response anomaly_score(::observation_msgs::srv::PathCheck_Response::_anomaly_score_type arg)
  {
    msg_.anomaly_score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::observation_msgs::srv::PathCheck_Response msg_;
};

class Init_PathCheck_Response_error_string
{
public:
  Init_PathCheck_Response_error_string()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathCheck_Response_anomaly_score error_string(::observation_msgs::srv::PathCheck_Response::_error_string_type arg)
  {
    msg_.error_string = std::move(arg);
    return Init_PathCheck_Response_anomaly_score(msg_);
  }

private:
  ::observation_msgs::srv::PathCheck_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::observation_msgs::srv::PathCheck_Response>()
{
  return observation_msgs::srv::builder::Init_PathCheck_Response_error_string();
}

}  // namespace observation_msgs

#endif  // OBSERVATION_MSGS__SRV__DETAIL__PATH_CHECK__BUILDER_HPP_
