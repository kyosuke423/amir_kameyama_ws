// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from behavior_tree_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "behavior_tree_msgs/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'from_camera'
// Member 'from_base'
// Member 'from_odom'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'pixel_bottom_right'
// Member 'pixel_top_left'
// Member 'pixel_center'
#include "behavior_tree_msgs/msg/detail/pixel__traits.hpp"

namespace behavior_tree_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Object & msg,
  std::ostream & out)
{
  out << "{";
  // member: from_camera
  {
    out << "from_camera: ";
    to_flow_style_yaml(msg.from_camera, out);
    out << ", ";
  }

  // member: from_base
  {
    out << "from_base: ";
    to_flow_style_yaml(msg.from_base, out);
    out << ", ";
  }

  // member: from_odom
  {
    out << "from_odom: ";
    to_flow_style_yaml(msg.from_odom, out);
    out << ", ";
  }

  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: pixel_bottom_right
  {
    out << "pixel_bottom_right: ";
    to_flow_style_yaml(msg.pixel_bottom_right, out);
    out << ", ";
  }

  // member: pixel_top_left
  {
    out << "pixel_top_left: ";
    to_flow_style_yaml(msg.pixel_top_left, out);
    out << ", ";
  }

  // member: pixel_center
  {
    out << "pixel_center: ";
    to_flow_style_yaml(msg.pixel_center, out);
    out << ", ";
  }

  // member: stand
  {
    out << "stand: ";
    rosidl_generator_traits::value_to_yaml(msg.stand, out);
    out << ", ";
  }

  // member: probability
  {
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: from_camera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_camera:\n";
    to_block_style_yaml(msg.from_camera, out, indentation + 2);
  }

  // member: from_base
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_base:\n";
    to_block_style_yaml(msg.from_base, out, indentation + 2);
  }

  // member: from_odom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "from_odom:\n";
    to_block_style_yaml(msg.from_odom, out, indentation + 2);
  }

  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
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

  // member: pixel_bottom_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pixel_bottom_right:\n";
    to_block_style_yaml(msg.pixel_bottom_right, out, indentation + 2);
  }

  // member: pixel_top_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pixel_top_left:\n";
    to_block_style_yaml(msg.pixel_top_left, out, indentation + 2);
  }

  // member: pixel_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pixel_center:\n";
    to_block_style_yaml(msg.pixel_center, out, indentation + 2);
  }

  // member: stand
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stand: ";
    rosidl_generator_traits::value_to_yaml(msg.stand, out);
    out << "\n";
  }

  // member: probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "probability: ";
    rosidl_generator_traits::value_to_yaml(msg.probability, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Object & msg, bool use_flow_style = false)
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

}  // namespace behavior_tree_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_tree_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_tree_msgs::msg::Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::msg::Object & msg)
{
  return behavior_tree_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::msg::Object>()
{
  return "behavior_tree_msgs::msg::Object";
}

template<>
inline const char * name<behavior_tree_msgs::msg::Object>()
{
  return "behavior_tree_msgs/msg/Object";
}

template<>
struct has_fixed_size<behavior_tree_msgs::msg::Object>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_tree_msgs::msg::Object>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_tree_msgs::msg::Object>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
