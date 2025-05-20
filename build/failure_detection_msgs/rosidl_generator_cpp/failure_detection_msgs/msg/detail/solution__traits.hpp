// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from failure_detection_msgs:msg/Solution.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__MSG__DETAIL__SOLUTION__TRAITS_HPP_
#define FAILURE_DETECTION_MSGS__MSG__DETAIL__SOLUTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "failure_detection_msgs/msg/detail/solution__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'bb_message'
#include "behavior_tree_msgs/msg/detail/bb_message__traits.hpp"

namespace failure_detection_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Solution & msg,
  std::ostream & out)
{
  out << "{";
  // member: bt_node_name
  {
    out << "bt_node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.bt_node_name, out);
    out << ", ";
  }

  // member: solutions
  {
    if (msg.solutions.size() == 0) {
      out << "solutions: []";
    } else {
      out << "solutions: [";
      size_t pending_items = msg.solutions.size();
      for (auto item : msg.solutions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: priorities
  {
    if (msg.priorities.size() == 0) {
      out << "priorities: []";
    } else {
      out << "priorities: [";
      size_t pending_items = msg.priorities.size();
      for (auto item : msg.priorities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bb_message
  {
    out << "bb_message: ";
    to_flow_style_yaml(msg.bb_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Solution & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bt_node_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bt_node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.bt_node_name, out);
    out << "\n";
  }

  // member: solutions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.solutions.size() == 0) {
      out << "solutions: []\n";
    } else {
      out << "solutions:\n";
      for (auto item : msg.solutions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: priorities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.priorities.size() == 0) {
      out << "priorities: []\n";
    } else {
      out << "priorities:\n";
      for (auto item : msg.priorities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bb_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bb_message:\n";
    to_block_style_yaml(msg.bb_message, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Solution & msg, bool use_flow_style = false)
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

}  // namespace failure_detection_msgs

namespace rosidl_generator_traits
{

[[deprecated("use failure_detection_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const failure_detection_msgs::msg::Solution & msg,
  std::ostream & out, size_t indentation = 0)
{
  failure_detection_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use failure_detection_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const failure_detection_msgs::msg::Solution & msg)
{
  return failure_detection_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<failure_detection_msgs::msg::Solution>()
{
  return "failure_detection_msgs::msg::Solution";
}

template<>
inline const char * name<failure_detection_msgs::msg::Solution>()
{
  return "failure_detection_msgs/msg/Solution";
}

template<>
struct has_fixed_size<failure_detection_msgs::msg::Solution>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<failure_detection_msgs::msg::Solution>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<failure_detection_msgs::msg::Solution>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FAILURE_DETECTION_MSGS__MSG__DETAIL__SOLUTION__TRAITS_HPP_
