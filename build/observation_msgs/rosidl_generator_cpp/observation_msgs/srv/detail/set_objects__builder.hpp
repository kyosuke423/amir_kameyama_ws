// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from observation_msgs:srv/SetObjects.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__SRV__DETAIL__SET_OBJECTS__BUILDER_HPP_
#define OBSERVATION_MSGS__SRV__DETAIL__SET_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "observation_msgs/srv/detail/set_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace observation_msgs
{

namespace srv
{

namespace builder
{

class Init_SetObjects_Request_objects
{
public:
  Init_SetObjects_Request_objects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::observation_msgs::srv::SetObjects_Request objects(::observation_msgs::srv::SetObjects_Request::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::observation_msgs::srv::SetObjects_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::observation_msgs::srv::SetObjects_Request>()
{
  return observation_msgs::srv::builder::Init_SetObjects_Request_objects();
}

}  // namespace observation_msgs


namespace observation_msgs
{

namespace srv
{

namespace builder
{

class Init_SetObjects_Response_error_string
{
public:
  Init_SetObjects_Response_error_string()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::observation_msgs::srv::SetObjects_Response error_string(::observation_msgs::srv::SetObjects_Response::_error_string_type arg)
  {
    msg_.error_string = std::move(arg);
    return std::move(msg_);
  }

private:
  ::observation_msgs::srv::SetObjects_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::observation_msgs::srv::SetObjects_Response>()
{
  return observation_msgs::srv::builder::Init_SetObjects_Response_error_string();
}

}  // namespace observation_msgs

#endif  // OBSERVATION_MSGS__SRV__DETAIL__SET_OBJECTS__BUILDER_HPP_
