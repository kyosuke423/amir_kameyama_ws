// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_nav_msgs:msg/PathInfo.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__TRAITS_HPP_
#define MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_nav_msgs/msg/detail/path_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_nav_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: remove_id_set
  {
    if (msg.remove_id_set.size() == 0) {
      out << "remove_id_set: []";
    } else {
      out << "remove_id_set: [";
      size_t pending_items = msg.remove_id_set.size();
      for (auto item : msg.remove_id_set) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: success_rate
  {
    out << "success_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.success_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: remove_id_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.remove_id_set.size() == 0) {
      out << "remove_id_set: []\n";
    } else {
      out << "remove_id_set:\n";
      for (auto item : msg.remove_id_set) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: success_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.success_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathInfo & msg, bool use_flow_style = false)
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
  const my_nav_msgs::msg::PathInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_nav_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_nav_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_nav_msgs::msg::PathInfo & msg)
{
  return my_nav_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_nav_msgs::msg::PathInfo>()
{
  return "my_nav_msgs::msg::PathInfo";
}

template<>
inline const char * name<my_nav_msgs::msg::PathInfo>()
{
  return "my_nav_msgs/msg/PathInfo";
}

template<>
struct has_fixed_size<my_nav_msgs::msg::PathInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_nav_msgs::msg::PathInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_nav_msgs::msg::PathInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_NAV_MSGS__MSG__DETAIL__PATH_INFO__TRAITS_HPP_
