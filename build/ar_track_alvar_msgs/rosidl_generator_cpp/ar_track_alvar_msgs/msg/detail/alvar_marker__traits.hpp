// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ar_track_alvar_msgs:msg/AlvarMarker.idl
// generated code does not contain a copyright notice

#ifndef AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKER__TRAITS_HPP_
#define AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ar_track_alvar_msgs/msg/detail/alvar_marker__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace ar_track_alvar_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AlvarMarker & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AlvarMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AlvarMarker & msg, bool use_flow_style = false)
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

}  // namespace ar_track_alvar_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ar_track_alvar_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ar_track_alvar_msgs::msg::AlvarMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
  ar_track_alvar_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ar_track_alvar_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const ar_track_alvar_msgs::msg::AlvarMarker & msg)
{
  return ar_track_alvar_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ar_track_alvar_msgs::msg::AlvarMarker>()
{
  return "ar_track_alvar_msgs::msg::AlvarMarker";
}

template<>
inline const char * name<ar_track_alvar_msgs::msg::AlvarMarker>()
{
  return "ar_track_alvar_msgs/msg/AlvarMarker";
}

template<>
struct has_fixed_size<ar_track_alvar_msgs::msg::AlvarMarker>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ar_track_alvar_msgs::msg::AlvarMarker>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ar_track_alvar_msgs::msg::AlvarMarker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AR_TRACK_ALVAR_MSGS__MSG__DETAIL__ALVAR_MARKER__TRAITS_HPP_
