// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from observation_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
#define OBSERVATION_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "observation_msgs/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'collision_object'
#include "moveit_msgs/msg/detail/collision_object__traits.hpp"
// Member 'attached_collision_object'
#include "moveit_msgs/msg/detail/attached_collision_object__traits.hpp"

namespace observation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Object & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: collision_object
  {
    out << "collision_object: ";
    to_flow_style_yaml(msg.collision_object, out);
    out << ", ";
  }

  // member: attached_collision_object
  {
    out << "attached_collision_object: ";
    to_flow_style_yaml(msg.attached_collision_object, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: obj_group
  {
    out << "obj_group: ";
    rosidl_generator_traits::value_to_yaml(msg.obj_group, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: msg_type
  {
    out << "msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_type, out);
    out << ", ";
  }

  // member: weight
  {
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Object & msg,
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

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: collision_object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "collision_object:\n";
    to_block_style_yaml(msg.collision_object, out, indentation + 2);
  }

  // member: attached_collision_object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attached_collision_object:\n";
    to_block_style_yaml(msg.attached_collision_object, out, indentation + 2);
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

  // member: obj_group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obj_group: ";
    rosidl_generator_traits::value_to_yaml(msg.obj_group, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: msg_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_type: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_type, out);
    out << "\n";
  }

  // member: weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weight: ";
    rosidl_generator_traits::value_to_yaml(msg.weight, out);
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

}  // namespace observation_msgs

namespace rosidl_generator_traits
{

[[deprecated("use observation_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const observation_msgs::msg::Object & msg,
  std::ostream & out, size_t indentation = 0)
{
  observation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use observation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const observation_msgs::msg::Object & msg)
{
  return observation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<observation_msgs::msg::Object>()
{
  return "observation_msgs::msg::Object";
}

template<>
inline const char * name<observation_msgs::msg::Object>()
{
  return "observation_msgs/msg/Object";
}

template<>
struct has_fixed_size<observation_msgs::msg::Object>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<observation_msgs::msg::Object>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<observation_msgs::msg::Object>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OBSERVATION_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
