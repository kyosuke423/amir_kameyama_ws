// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_nav_msgs:msg/PathWithCondition.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__MSG__DETAIL__PATH_WITH_CONDITION__TRAITS_HPP_
#define MY_NAV_MSGS__MSG__DETAIL__PATH_WITH_CONDITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_nav_msgs/msg/detail/path_with_condition__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__traits.hpp"
// Member 'info'
#include "my_nav_msgs/msg/detail/path_info__traits.hpp"

namespace my_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathWithCondition & msg,
  std::ostream & out)
{
  out << "{";
  // member: path
  {
    out << "path: ";
    to_flow_style_yaml(msg.path, out);
    out << ", ";
  }

  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathWithCondition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_block_style_yaml(msg.path, out, indentation + 2);
  }

  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathWithCondition & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_nav_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_nav_msgs::msg::PathWithCondition & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_nav_msgs::msg::PathWithCondition & msg)
{
  return my_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_nav_msgs::msg::PathWithCondition>()
{
  return "my_nav_msgs::msg::PathWithCondition";
}

template<>
inline const char * name<my_nav_msgs::msg::PathWithCondition>()
{
  return "my_nav_msgs/msg/PathWithCondition";
}

template<>
struct has_fixed_size<my_nav_msgs::msg::PathWithCondition>
  : std::integral_constant<bool, has_fixed_size<my_nav_msgs::msg::PathInfo>::value && has_fixed_size<nav_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<my_nav_msgs::msg::PathWithCondition>
  : std::integral_constant<bool, has_bounded_size<my_nav_msgs::msg::PathInfo>::value && has_bounded_size<nav_msgs::msg::Path>::value> {};

template<>
struct is_message<my_nav_msgs::msg::PathWithCondition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_NAV_MSGS__MSG__DETAIL__PATH_WITH_CONDITION__TRAITS_HPP_
