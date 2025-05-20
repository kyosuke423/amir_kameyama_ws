// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from line_msg:msg/BoxCorner.idl
// generated code does not contain a copyright notice

#ifndef LINE_MSG__MSG__DETAIL__BOX_CORNER__BUILDER_HPP_
#define LINE_MSG__MSG__DETAIL__BOX_CORNER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "line_msg/msg/detail/box_corner__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace line_msg
{

namespace msg
{

namespace builder
{

class Init_BoxCorner_posi
{
public:
  explicit Init_BoxCorner_posi(::line_msg::msg::BoxCorner & msg)
  : msg_(msg)
  {}
  ::line_msg::msg::BoxCorner posi(::line_msg::msg::BoxCorner::_posi_type arg)
  {
    msg_.posi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::line_msg::msg::BoxCorner msg_;
};

class Init_BoxCorner_corner_num
{
public:
  explicit Init_BoxCorner_corner_num(::line_msg::msg::BoxCorner & msg)
  : msg_(msg)
  {}
  Init_BoxCorner_posi corner_num(::line_msg::msg::BoxCorner::_corner_num_type arg)
  {
    msg_.corner_num = std::move(arg);
    return Init_BoxCorner_posi(msg_);
  }

private:
  ::line_msg::msg::BoxCorner msg_;
};

class Init_BoxCorner_id
{
public:
  Init_BoxCorner_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoxCorner_corner_num id(::line_msg::msg::BoxCorner::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BoxCorner_corner_num(msg_);
  }

private:
  ::line_msg::msg::BoxCorner msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::line_msg::msg::BoxCorner>()
{
  return line_msg::msg::builder::Init_BoxCorner_id();
}

}  // namespace line_msg

#endif  // LINE_MSG__MSG__DETAIL__BOX_CORNER__BUILDER_HPP_
