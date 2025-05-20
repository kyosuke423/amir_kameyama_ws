// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace msg
{

namespace builder
{

class Init_Object_probability
{
public:
  explicit Init_Object_probability(::behavior_tree_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::msg::Object probability(::behavior_tree_msgs::msg::Object::_probability_type arg)
  {
    msg_.probability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::msg::Object msg_;
};

class Init_Object_stand
{
public:
  explicit Init_Object_stand(::behavior_tree_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_probability stand(::behavior_tree_msgs::msg::Object::_stand_type arg)
  {
    msg_.stand = std::move(arg);
    return Init_Object_probability(msg_);
  }

private:
  ::behavior_tree_msgs::msg::Object msg_;
};

class Init_Object_pixel_center
{
public:
  explicit Init_Object_pixel_center(::behavior_tree_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_stand pixel_center(::behavior_tree_msgs::msg::Object::_pixel_center_type arg)
  {
    msg_.pixel_center = std::move(arg);
    return Init_Object_stand(msg_);
  }

private:
  ::behavior_tree_msgs::msg::Object msg_;
};

class Init_Object_pixel_top_left
{
public:
  explicit Init_Object_pixel_top_left(::behavior_tree_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_pixel_center pixel_top_left(::behavior_tree_msgs::msg::Object::_pixel_top_left_type arg)
  {
    msg_.pixel_top_left = std::move(arg);
    return Init_Object_pixel_center(msg_);
  }

private:
  ::behavior_tree_msgs::msg::Object msg_;
};

class Init_Object_pixel_bottom_right
{
public:
  explicit Init_Object_pixel_bottom_right(::behavior_tree_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_pixel_top_left pixel_bottom_right(::behavior_tree_msgs::msg::Object::_pixel_bottom_right_type arg)
  {
    msg_.pixel_bottom_right = std::move(arg);
    return Init_Object_pixel_top_left(msg_);
  }

private:
  ::behavior_tree_msgs::msg::Object msg_;
};

class Init_Object_id
{
public:
  explicit Init_Object_id(::behavior_tree_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_pixel_bottom_right id(::behavior_tree_msgs::msg::Object::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Object_pixel_bottom_right(msg_);
  }

private:
  ::behavior_tree_msgs::msg::Object msg_;
};

class Init_Object_label
{
public:
  explicit Init_Object_label(::behavior_tree_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_id label(::behavior_tree_msgs::msg::Object::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_Object_id(msg_);
  }

private:
  ::behavior_tree_msgs::msg::Object msg_;
};

class Init_Object_from_odom
{
public:
  explicit Init_Object_from_odom(::behavior_tree_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_label from_odom(::behavior_tree_msgs::msg::Object::_from_odom_type arg)
  {
    msg_.from_odom = std::move(arg);
    return Init_Object_label(msg_);
  }

private:
  ::behavior_tree_msgs::msg::Object msg_;
};

class Init_Object_from_base
{
public:
  explicit Init_Object_from_base(::behavior_tree_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_from_odom from_base(::behavior_tree_msgs::msg::Object::_from_base_type arg)
  {
    msg_.from_base = std::move(arg);
    return Init_Object_from_odom(msg_);
  }

private:
  ::behavior_tree_msgs::msg::Object msg_;
};

class Init_Object_from_camera
{
public:
  Init_Object_from_camera()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_from_base from_camera(::behavior_tree_msgs::msg::Object::_from_camera_type arg)
  {
    msg_.from_camera = std::move(arg);
    return Init_Object_from_base(msg_);
  }

private:
  ::behavior_tree_msgs::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::msg::Object>()
{
  return behavior_tree_msgs::msg::builder::Init_Object_from_camera();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
