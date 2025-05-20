// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from behavior_tree_msgs:msg/BTStatus.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__MSG__DETAIL__BT_STATUS__TRAITS_HPP_
#define BEHAVIOR_TREE_MSGS__MSG__DETAIL__BT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "behavior_tree_msgs/msg/detail/bt_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'root_status'
// Member 'bt_status'
#include "behavior_tree_msgs/msg/detail/node_status__traits.hpp"

namespace behavior_tree_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BTStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: bt
  {
    out << "bt: ";
    rosidl_generator_traits::value_to_yaml(msg.bt, out);
    out << ", ";
  }

  // member: root_status
  {
    out << "root_status: ";
    to_flow_style_yaml(msg.root_status, out);
    out << ", ";
  }

  // member: bt_status
  {
    if (msg.bt_status.size() == 0) {
      out << "bt_status: []";
    } else {
      out << "bt_status: [";
      size_t pending_items = msg.bt_status.size();
      for (auto item : msg.bt_status) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BTStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bt: ";
    rosidl_generator_traits::value_to_yaml(msg.bt, out);
    out << "\n";
  }

  // member: root_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_status:\n";
    to_block_style_yaml(msg.root_status, out, indentation + 2);
  }

  // member: bt_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bt_status.size() == 0) {
      out << "bt_status: []\n";
    } else {
      out << "bt_status:\n";
      for (auto item : msg.bt_status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BTStatus & msg, bool use_flow_style = false)
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
  const behavior_tree_msgs::msg::BTStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::msg::BTStatus & msg)
{
  return behavior_tree_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::msg::BTStatus>()
{
  return "behavior_tree_msgs::msg::BTStatus";
}

template<>
inline const char * name<behavior_tree_msgs::msg::BTStatus>()
{
  return "behavior_tree_msgs/msg/BTStatus";
}

template<>
struct has_fixed_size<behavior_tree_msgs::msg::BTStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_tree_msgs::msg::BTStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_tree_msgs::msg::BTStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BEHAVIOR_TREE_MSGS__MSG__DETAIL__BT_STATUS__TRAITS_HPP_
