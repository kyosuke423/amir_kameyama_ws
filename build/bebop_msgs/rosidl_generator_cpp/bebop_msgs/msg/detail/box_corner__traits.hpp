// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bebop_msgs:msg/BoxCorner.idl
// generated code does not contain a copyright notice

#ifndef BEBOP_MSGS__MSG__DETAIL__BOX_CORNER__TRAITS_HPP_
#define BEBOP_MSGS__MSG__DETAIL__BOX_CORNER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bebop_msgs/msg/detail/box_corner__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'posi'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace bebop_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoxCorner & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: corner_num
  {
    out << "corner_num: ";
    rosidl_generator_traits::value_to_yaml(msg.corner_num, out);
    out << ", ";
  }

  // member: posi
  {
    out << "posi: ";
    to_flow_style_yaml(msg.posi, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoxCorner & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: corner_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "corner_num: ";
    rosidl_generator_traits::value_to_yaml(msg.corner_num, out);
    out << "\n";
  }

  // member: posi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posi:\n";
    to_block_style_yaml(msg.posi, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoxCorner & msg, bool use_flow_style = false)
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

}  // namespace bebop_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bebop_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bebop_msgs::msg::BoxCorner & msg,
  std::ostream & out, size_t indentation = 0)
{
  bebop_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bebop_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bebop_msgs::msg::BoxCorner & msg)
{
  return bebop_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bebop_msgs::msg::BoxCorner>()
{
  return "bebop_msgs::msg::BoxCorner";
}

template<>
inline const char * name<bebop_msgs::msg::BoxCorner>()
{
  return "bebop_msgs/msg/BoxCorner";
}

template<>
struct has_fixed_size<bebop_msgs::msg::BoxCorner>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<bebop_msgs::msg::BoxCorner>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<bebop_msgs::msg::BoxCorner>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BEBOP_MSGS__MSG__DETAIL__BOX_CORNER__TRAITS_HPP_
