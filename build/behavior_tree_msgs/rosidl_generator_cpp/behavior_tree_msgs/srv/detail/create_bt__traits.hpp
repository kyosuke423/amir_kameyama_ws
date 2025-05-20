// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from behavior_tree_msgs:srv/CreateBT.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__CREATE_BT__TRAITS_HPP_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__CREATE_BT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "behavior_tree_msgs/srv/detail/create_bt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace behavior_tree_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CreateBT_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: bt_name
  {
    out << "bt_name: ";
    rosidl_generator_traits::value_to_yaml(msg.bt_name, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CreateBT_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bt_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bt_name: ";
    rosidl_generator_traits::value_to_yaml(msg.bt_name, out);
    out << "\n";
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CreateBT_Request & msg, bool use_flow_style = false)
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
  const behavior_tree_msgs::srv::CreateBT_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::srv::CreateBT_Request & msg)
{
  return behavior_tree_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::srv::CreateBT_Request>()
{
  return "behavior_tree_msgs::srv::CreateBT_Request";
}

template<>
inline const char * name<behavior_tree_msgs::srv::CreateBT_Request>()
{
  return "behavior_tree_msgs/srv/CreateBT_Request";
}

template<>
struct has_fixed_size<behavior_tree_msgs::srv::CreateBT_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_tree_msgs::srv::CreateBT_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_tree_msgs::srv::CreateBT_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace behavior_tree_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CreateBT_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_string
  {
    out << "error_string: ";
    rosidl_generator_traits::value_to_yaml(msg.error_string, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CreateBT_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_string
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_string: ";
    rosidl_generator_traits::value_to_yaml(msg.error_string, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CreateBT_Response & msg, bool use_flow_style = false)
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
  const behavior_tree_msgs::srv::CreateBT_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::srv::CreateBT_Response & msg)
{
  return behavior_tree_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::srv::CreateBT_Response>()
{
  return "behavior_tree_msgs::srv::CreateBT_Response";
}

template<>
inline const char * name<behavior_tree_msgs::srv::CreateBT_Response>()
{
  return "behavior_tree_msgs/srv/CreateBT_Response";
}

template<>
struct has_fixed_size<behavior_tree_msgs::srv::CreateBT_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_tree_msgs::srv::CreateBT_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_tree_msgs::srv::CreateBT_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<behavior_tree_msgs::srv::CreateBT>()
{
  return "behavior_tree_msgs::srv::CreateBT";
}

template<>
inline const char * name<behavior_tree_msgs::srv::CreateBT>()
{
  return "behavior_tree_msgs/srv/CreateBT";
}

template<>
struct has_fixed_size<behavior_tree_msgs::srv::CreateBT>
  : std::integral_constant<
    bool,
    has_fixed_size<behavior_tree_msgs::srv::CreateBT_Request>::value &&
    has_fixed_size<behavior_tree_msgs::srv::CreateBT_Response>::value
  >
{
};

template<>
struct has_bounded_size<behavior_tree_msgs::srv::CreateBT>
  : std::integral_constant<
    bool,
    has_bounded_size<behavior_tree_msgs::srv::CreateBT_Request>::value &&
    has_bounded_size<behavior_tree_msgs::srv::CreateBT_Response>::value
  >
{
};

template<>
struct is_service<behavior_tree_msgs::srv::CreateBT>
  : std::true_type
{
};

template<>
struct is_service_request<behavior_tree_msgs::srv::CreateBT_Request>
  : std::true_type
{
};

template<>
struct is_service_response<behavior_tree_msgs::srv::CreateBT_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__CREATE_BT__TRAITS_HPP_
