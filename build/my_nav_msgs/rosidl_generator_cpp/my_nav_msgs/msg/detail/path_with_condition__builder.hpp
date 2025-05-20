// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_nav_msgs:msg/PathWithCondition.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__MSG__DETAIL__PATH_WITH_CONDITION__BUILDER_HPP_
#define MY_NAV_MSGS__MSG__DETAIL__PATH_WITH_CONDITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_nav_msgs/msg/detail/path_with_condition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_PathWithCondition_info
{
public:
  explicit Init_PathWithCondition_info(::my_nav_msgs::msg::PathWithCondition & msg)
  : msg_(msg)
  {}
  ::my_nav_msgs::msg::PathWithCondition info(::my_nav_msgs::msg::PathWithCondition::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_nav_msgs::msg::PathWithCondition msg_;
};

class Init_PathWithCondition_path
{
public:
  Init_PathWithCondition_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathWithCondition_info path(::my_nav_msgs::msg::PathWithCondition::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_PathWithCondition_info(msg_);
  }

private:
  ::my_nav_msgs::msg::PathWithCondition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_nav_msgs::msg::PathWithCondition>()
{
  return my_nav_msgs::msg::builder::Init_PathWithCondition_path();
}

}  // namespace my_nav_msgs

#endif  // MY_NAV_MSGS__MSG__DETAIL__PATH_WITH_CONDITION__BUILDER_HPP_
