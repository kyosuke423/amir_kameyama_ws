// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from behavior_tree_msgs:srv/SetBlackBoard.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__SET_BLACK_BOARD__TRAITS_HPP_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__SET_BLACK_BOARD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "behavior_tree_msgs/srv/detail/set_black_board__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'bb_message'
#include "behavior_tree_msgs/msg/detail/bb_message__traits.hpp"

namespace behavior_tree_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetBlackBoard_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: bb_message
  {
    out << "bb_message: ";
    to_flow_style_yaml(msg.bb_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetBlackBoard_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bb_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bb_message:\n";
    to_block_style_yaml(msg.bb_message, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetBlackBoard_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace behavior_tree_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_tree_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_tree_msgs::srv::SetBlackBoard_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::srv::SetBlackBoard_Request & msg)
{
  return behavior_tree_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::srv::SetBlackBoard_Request>()
{
  return "behavior_tree_msgs::srv::SetBlackBoard_Request";
}

template<>
inline const char * name<behavior_tree_msgs::srv::SetBlackBoard_Request>()
{
  return "behavior_tree_msgs/srv/SetBlackBoard_Request";
}

template<>
struct has_fixed_size<behavior_tree_msgs::srv::SetBlackBoard_Request>
  : std::integral_constant<bool, has_fixed_size<behavior_tree_msgs::msg::BBMessage>::value> {};

template<>
struct has_bounded_size<behavior_tree_msgs::srv::SetBlackBoard_Request>
  : std::integral_constant<bool, has_bounded_size<behavior_tree_msgs::msg::BBMessage>::value> {};

template<>
struct is_message<behavior_tree_msgs::srv::SetBlackBoard_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace behavior_tree_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetBlackBoard_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: behavior_tree
  {
    out << "behavior_tree: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_tree, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetBlackBoard_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: behavior_tree
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior_tree: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_tree, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetBlackBoard_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace behavior_tree_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_tree_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_tree_msgs::srv::SetBlackBoard_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::srv::SetBlackBoard_Response & msg)
{
  return behavior_tree_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::srv::SetBlackBoard_Response>()
{
  return "behavior_tree_msgs::srv::SetBlackBoard_Response";
}

template<>
inline const char * name<behavior_tree_msgs::srv::SetBlackBoard_Response>()
{
  return "behavior_tree_msgs/srv/SetBlackBoard_Response";
}

template<>
struct has_fixed_size<behavior_tree_msgs::srv::SetBlackBoard_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_tree_msgs::srv::SetBlackBoard_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_tree_msgs::srv::SetBlackBoard_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<behavior_tree_msgs::srv::SetBlackBoard>()
{
  return "behavior_tree_msgs::srv::SetBlackBoard";
}

template<>
inline const char * name<behavior_tree_msgs::srv::SetBlackBoard>()
{
  return "behavior_tree_msgs/srv/SetBlackBoard";
}

template<>
struct has_fixed_size<behavior_tree_msgs::srv::SetBlackBoard>
  : std::integral_constant<
    bool,
    has_fixed_size<behavior_tree_msgs::srv::SetBlackBoard_Request>::value &&
    has_fixed_size<behavior_tree_msgs::srv::SetBlackBoard_Response>::value
  >
{
};

template<>
struct has_bounded_size<behavior_tree_msgs::srv::SetBlackBoard>
  : std::integral_constant<
    bool,
    has_bounded_size<behavior_tree_msgs::srv::SetBlackBoard_Request>::value &&
    has_bounded_size<behavior_tree_msgs::srv::SetBlackBoard_Response>::value
  >
{
};

template<>
struct is_service<behavior_tree_msgs::srv::SetBlackBoard>
  : std::true_type
{
};

template<>
struct is_service_request<behavior_tree_msgs::srv::SetBlackBoard_Request>
  : std::true_type
{
};

template<>
struct is_service_response<behavior_tree_msgs::srv::SetBlackBoard_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__SET_BLACK_BOARD__TRAITS_HPP_
