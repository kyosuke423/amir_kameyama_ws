// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from observation_msgs:msg/PathEvaluation.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__MSG__DETAIL__PATH_EVALUATION__TRAITS_HPP_
#define OBSERVATION_MSGS__MSG__DETAIL__PATH_EVALUATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "observation_msgs/msg/detail/path_evaluation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace observation_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PathEvaluation & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: max_cost
  {
    out << "max_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.max_cost, out);
    out << ", ";
  }

  // member: ave_cost
  {
    out << "ave_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.ave_cost, out);
    out << ", ";
  }

  // member: unknown_area
  {
    out << "unknown_area: ";
    rosidl_generator_traits::value_to_yaml(msg.unknown_area, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathEvaluation & msg,
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

  // member: max_cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.max_cost, out);
    out << "\n";
  }

  // member: ave_cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ave_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.ave_cost, out);
    out << "\n";
  }

  // member: unknown_area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unknown_area: ";
    rosidl_generator_traits::value_to_yaml(msg.unknown_area, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathEvaluation & msg, bool use_flow_style = false)
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
  const observation_msgs::msg::PathEvaluation & msg,
  std::ostream & out, size_t indentation = 0)
{
  observation_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use observation_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const observation_msgs::msg::PathEvaluation & msg)
{
  return observation_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<observation_msgs::msg::PathEvaluation>()
{
  return "observation_msgs::msg::PathEvaluation";
}

template<>
inline const char * name<observation_msgs::msg::PathEvaluation>()
{
  return "observation_msgs/msg/PathEvaluation";
}

template<>
struct has_fixed_size<observation_msgs::msg::PathEvaluation>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<observation_msgs::msg::PathEvaluation>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<observation_msgs::msg::PathEvaluation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OBSERVATION_MSGS__MSG__DETAIL__PATH_EVALUATION__TRAITS_HPP_
