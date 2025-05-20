// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bebop_msgs:msg/BoxCorner.idl
// generated code does not contain a copyright notice

#ifndef BEBOP_MSGS__MSG__DETAIL__BOX_CORNER__BUILDER_HPP_
#define BEBOP_MSGS__MSG__DETAIL__BOX_CORNER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bebop_msgs/msg/detail/box_corner__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bebop_msgs
{

namespace msg
{

namespace builder
{

class Init_BoxCorner_posi
{
public:
  explicit Init_BoxCorner_posi(::bebop_msgs::msg::BoxCorner & msg)
  : msg_(msg)
  {}
  ::bebop_msgs::msg::BoxCorner posi(::bebop_msgs::msg::BoxCorner::_posi_type arg)
  {
    msg_.posi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bebop_msgs::msg::BoxCorner msg_;
};

class Init_BoxCorner_corner_num
{
public:
  explicit Init_BoxCorner_corner_num(::bebop_msgs::msg::BoxCorner & msg)
  : msg_(msg)
  {}
  Init_BoxCorner_posi corner_num(::bebop_msgs::msg::BoxCorner::_corner_num_type arg)
  {
    msg_.corner_num = std::move(arg);
    return Init_BoxCorner_posi(msg_);
  }

private:
  ::bebop_msgs::msg::BoxCorner msg_;
};

class Init_BoxCorner_id
{
public:
  Init_BoxCorner_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoxCorner_corner_num id(::bebop_msgs::msg::BoxCorner::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BoxCorner_corner_num(msg_);
  }

private:
  ::bebop_msgs::msg::BoxCorner msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bebop_msgs::msg::BoxCorner>()
{
  return bebop_msgs::msg::builder::Init_BoxCorner_id();
}

}  // namespace bebop_msgs

#endif  // BEBOP_MSGS__MSG__DETAIL__BOX_CORNER__BUILDER_HPP_
