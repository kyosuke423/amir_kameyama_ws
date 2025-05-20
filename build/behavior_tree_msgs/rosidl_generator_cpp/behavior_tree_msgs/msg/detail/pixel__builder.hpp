// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from behavior_tree_msgs:msg/Pixel.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__PIXEL__BUILDER_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__PIXEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "behavior_tree_msgs/msg/detail/pixel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace behavior_tree_msgs
{

namespace msg
{

namespace builder
{

class Init_Pixel_y
{
public:
  explicit Init_Pixel_y(::behavior_tree_msgs::msg::Pixel & msg)
  : msg_(msg)
  {}
  ::behavior_tree_msgs::msg::Pixel y(::behavior_tree_msgs::msg::Pixel::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::behavior_tree_msgs::msg::Pixel msg_;
};

class Init_Pixel_x
{
public:
  Init_Pixel_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pixel_y x(::behavior_tree_msgs::msg::Pixel::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Pixel_y(msg_);
  }

private:
  ::behavior_tree_msgs::msg::Pixel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::behavior_tree_msgs::msg::Pixel>()
{
  return behavior_tree_msgs::msg::builder::Init_Pixel_x();
}

}  // namespace behavior_tree_msgs

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__PIXEL__BUILDER_HPP_
