// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from observation_msgs:srv/GetObjects.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__SRV__DETAIL__GET_OBJECTS__BUILDER_HPP_
#define OBSERVATION_MSGS__SRV__DETAIL__GET_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "observation_msgs/srv/detail/get_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace observation_msgs
{

namespace srv
{

namespace builder
{

class Init_GetObjects_Request_command
{
public:
  explicit Init_GetObjects_Request_command(::observation_msgs::srv::GetObjects_Request & msg)
  : msg_(msg)
  {}
  ::observation_msgs::srv::GetObjects_Request command(::observation_msgs::srv::GetObjects_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::observation_msgs::srv::GetObjects_Request msg_;
};

class Init_GetObjects_Request_id_set
{
public:
  Init_GetObjects_Request_id_set()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetObjects_Request_command id_set(::observation_msgs::srv::GetObjects_Request::_id_set_type arg)
  {
    msg_.id_set = std::move(arg);
    return Init_GetObjects_Request_command(msg_);
  }

private:
  ::observation_msgs::srv::GetObjects_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::observation_msgs::srv::GetObjects_Request>()
{
  return observation_msgs::srv::builder::Init_GetObjects_Request_id_set();
}

}  // namespace observation_msgs


namespace observation_msgs
{

namespace srv
{

namespace builder
{

class Init_GetObjects_Response_objects
{
public:
  Init_GetObjects_Response_objects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::observation_msgs::srv::GetObjects_Response objects(::observation_msgs::srv::GetObjects_Response::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::observation_msgs::srv::GetObjects_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::observation_msgs::srv::GetObjects_Response>()
{
  return observation_msgs::srv::builder::Init_GetObjects_Response_objects();
}

}  // namespace observation_msgs

#endif  // OBSERVATION_MSGS__SRV__DETAIL__GET_OBJECTS__BUILDER_HPP_
