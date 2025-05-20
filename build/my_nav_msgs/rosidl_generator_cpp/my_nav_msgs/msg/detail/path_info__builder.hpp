// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_nav_msgs:msg/PathInfo.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__BUILDER_HPP_
#define MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_nav_msgs/msg/detail/path_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_PathInfo_success_rate
{
public:
  explicit Init_PathInfo_success_rate(::my_nav_msgs::msg::PathInfo & msg)
  : msg_(msg)
  {}
  ::my_nav_msgs::msg::PathInfo success_rate(::my_nav_msgs::msg::PathInfo::_success_rate_type arg)
  {
    msg_.success_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_nav_msgs::msg::PathInfo msg_;
};

class Init_PathInfo_remove_id_set
{
public:
  Init_PathInfo_remove_id_set()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathInfo_success_rate remove_id_set(::my_nav_msgs::msg::PathInfo::_remove_id_set_type arg)
  {
    msg_.remove_id_set = std::move(arg);
    return Init_PathInfo_success_rate(msg_);
  }

private:
  ::my_nav_msgs::msg::PathInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_nav_msgs::msg::PathInfo>()
{
  return my_nav_msgs::msg::builder::Init_PathInfo_remove_id_set();
}

}  // namespace my_nav_msgs

#endif  // MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__BUILDER_HPP_
