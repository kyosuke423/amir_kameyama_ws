// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from failure_detection_msgs:srv/BeforePick.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__SRV__DETAIL__BEFORE_PICK__BUILDER_HPP_
#define FAILURE_DETECTION_MSGS__SRV__DETAIL__BEFORE_PICK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "failure_detection_msgs/srv/detail/before_pick__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace failure_detection_msgs
{

namespace srv
{

namespace builder
{

class Init_BeforePick_Request_stand
{
public:
  explicit Init_BeforePick_Request_stand(::failure_detection_msgs::srv::BeforePick_Request & msg)
  : msg_(msg)
  {}
  ::failure_detection_msgs::srv::BeforePick_Request stand(::failure_detection_msgs::srv::BeforePick_Request::_stand_type arg)
  {
    msg_.stand = std::move(arg);
    return std::move(msg_);
  }

private:
  ::failure_detection_msgs::srv::BeforePick_Request msg_;
};

class Init_BeforePick_Request_pose
{
public:
  explicit Init_BeforePick_Request_pose(::failure_detection_msgs::srv::BeforePick_Request & msg)
  : msg_(msg)
  {}
  Init_BeforePick_Request_stand pose(::failure_detection_msgs::srv::BeforePick_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_BeforePick_Request_stand(msg_);
  }

private:
  ::failure_detection_msgs::srv::BeforePick_Request msg_;
};

class Init_BeforePick_Request_id
{
public:
  explicit Init_BeforePick_Request_id(::failure_detection_msgs::srv::BeforePick_Request & msg)
  : msg_(msg)
  {}
  Init_BeforePick_Request_pose id(::failure_detection_msgs::srv::BeforePick_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BeforePick_Request_pose(msg_);
  }

private:
  ::failure_detection_msgs::srv::BeforePick_Request msg_;
};

class Init_BeforePick_Request_command
{
public:
  Init_BeforePick_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BeforePick_Request_id command(::failure_detection_msgs::srv::BeforePick_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_BeforePick_Request_id(msg_);
  }

private:
  ::failure_detection_msgs::srv::BeforePick_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::failure_detection_msgs::srv::BeforePick_Request>()
{
  return failure_detection_msgs::srv::builder::Init_BeforePick_Request_command();
}

}  // namespace failure_detection_msgs


namespace failure_detection_msgs
{

namespace srv
{

namespace builder
{

class Init_BeforePick_Response_command
{
public:
  Init_BeforePick_Response_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::failure_detection_msgs::srv::BeforePick_Response command(::failure_detection_msgs::srv::BeforePick_Response::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::failure_detection_msgs::srv::BeforePick_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::failure_detection_msgs::srv::BeforePick_Response>()
{
  return failure_detection_msgs::srv::builder::Init_BeforePick_Response_command();
}

}  // namespace failure_detection_msgs

#endif  // FAILURE_DETECTION_MSGS__SRV__DETAIL__BEFORE_PICK__BUILDER_HPP_
