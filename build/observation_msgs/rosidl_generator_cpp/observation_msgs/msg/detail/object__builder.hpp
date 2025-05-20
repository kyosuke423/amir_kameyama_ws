// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from observation_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define OBSERVATION_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "observation_msgs/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace observation_msgs
{

namespace msg
{

namespace builder
{

class Init_Object_weight
{
public:
  explicit Init_Object_weight(::observation_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  ::observation_msgs::msg::Object weight(::observation_msgs::msg::Object::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::observation_msgs::msg::Object msg_;
};

class Init_Object_msg_type
{
public:
  explicit Init_Object_msg_type(::observation_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_weight msg_type(::observation_msgs::msg::Object::_msg_type_type arg)
  {
    msg_.msg_type = std::move(arg);
    return Init_Object_weight(msg_);
  }

private:
  ::observation_msgs::msg::Object msg_;
};

class Init_Object_status
{
public:
  explicit Init_Object_status(::observation_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_msg_type status(::observation_msgs::msg::Object::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Object_msg_type(msg_);
  }

private:
  ::observation_msgs::msg::Object msg_;
};

class Init_Object_obj_group
{
public:
  explicit Init_Object_obj_group(::observation_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_status obj_group(::observation_msgs::msg::Object::_obj_group_type arg)
  {
    msg_.obj_group = std::move(arg);
    return Init_Object_status(msg_);
  }

private:
  ::observation_msgs::msg::Object msg_;
};

class Init_Object_id
{
public:
  explicit Init_Object_id(::observation_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_obj_group id(::observation_msgs::msg::Object::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Object_obj_group(msg_);
  }

private:
  ::observation_msgs::msg::Object msg_;
};

class Init_Object_attached_collision_object
{
public:
  explicit Init_Object_attached_collision_object(::observation_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_id attached_collision_object(::observation_msgs::msg::Object::_attached_collision_object_type arg)
  {
    msg_.attached_collision_object = std::move(arg);
    return Init_Object_id(msg_);
  }

private:
  ::observation_msgs::msg::Object msg_;
};

class Init_Object_collision_object
{
public:
  explicit Init_Object_collision_object(::observation_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_attached_collision_object collision_object(::observation_msgs::msg::Object::_collision_object_type arg)
  {
    msg_.collision_object = std::move(arg);
    return Init_Object_attached_collision_object(msg_);
  }

private:
  ::observation_msgs::msg::Object msg_;
};

class Init_Object_pose
{
public:
  explicit Init_Object_pose(::observation_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_collision_object pose(::observation_msgs::msg::Object::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Object_collision_object(msg_);
  }

private:
  ::observation_msgs::msg::Object msg_;
};

class Init_Object_header
{
public:
  Init_Object_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_pose header(::observation_msgs::msg::Object::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Object_pose(msg_);
  }

private:
  ::observation_msgs::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::observation_msgs::msg::Object>()
{
  return observation_msgs::msg::builder::Init_Object_header();
}

}  // namespace observation_msgs

#endif  // OBSERVATION_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
