// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from failure_detection_msgs:srv/AfterPick.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__SRV__DETAIL__AFTER_PICK__TRAITS_HPP_
#define FAILURE_DETECTION_MSGS__SRV__DETAIL__AFTER_PICK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "failure_detection_msgs/srv/detail/after_pick__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'grasped_object'
#include "moveit_msgs/msg/detail/attached_collision_object__traits.hpp"

namespace failure_detection_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AfterPick_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: bt_node_name
  {
    out << "bt_node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.bt_node_name, out);
    out << ", ";
  }

  // member: error_string
  {
    out << "error_string: ";
    rosidl_generator_traits::value_to_yaml(msg.error_string, out);
    out << ", ";
  }

  // member: grasped_object
  {
    out << "grasped_object: ";
    to_flow_style_yaml(msg.grasped_object, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AfterPick_Request & msg,
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

  // member: error_string
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_string: ";
    rosidl_generator_traits::value_to_yaml(msg.error_string, out);
    out << "\n";
  }

  // member: grasped_object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasped_object:\n";
    to_block_style_yaml(msg.grasped_object, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AfterPick_Request & msg, bool use_flow_style = false)
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

}  // namespace failure_detection_msgs

namespace rosidl_generator_traits
{

[[deprecated("use failure_detection_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const failure_detection_msgs::srv::AfterPick_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  failure_detection_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use failure_detection_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const failure_detection_msgs::srv::AfterPick_Request & msg)
{
  return failure_detection_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<failure_detection_msgs::srv::AfterPick_Request>()
{
  return "failure_detection_msgs::srv::AfterPick_Request";
}

template<>
inline const char * name<failure_detection_msgs::srv::AfterPick_Request>()
{
  return "failure_detection_msgs/srv/AfterPick_Request";
}

template<>
struct has_fixed_size<failure_detection_msgs::srv::AfterPick_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<failure_detection_msgs::srv::AfterPick_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<failure_detection_msgs::srv::AfterPick_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace failure_detection_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const AfterPick_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AfterPick_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const AfterPick_Response & msg, bool use_flow_style = false)
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

}  // namespace failure_detection_msgs

namespace rosidl_generator_traits
{

[[deprecated("use failure_detection_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const failure_detection_msgs::srv::AfterPick_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  failure_detection_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use failure_detection_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const failure_detection_msgs::srv::AfterPick_Response & msg)
{
  return failure_detection_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<failure_detection_msgs::srv::AfterPick_Response>()
{
  return "failure_detection_msgs::srv::AfterPick_Response";
}

template<>
inline const char * name<failure_detection_msgs::srv::AfterPick_Response>()
{
  return "failure_detection_msgs/srv/AfterPick_Response";
}

template<>
struct has_fixed_size<failure_detection_msgs::srv::AfterPick_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<failure_detection_msgs::srv::AfterPick_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<failure_detection_msgs::srv::AfterPick_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<failure_detection_msgs::srv::AfterPick>()
{
  return "failure_detection_msgs::srv::AfterPick";
}

template<>
inline const char * name<failure_detection_msgs::srv::AfterPick>()
{
  return "failure_detection_msgs/srv/AfterPick";
}

template<>
struct has_fixed_size<failure_detection_msgs::srv::AfterPick>
  : std::integral_constant<
    bool,
    has_fixed_size<failure_detection_msgs::srv::AfterPick_Request>::value &&
    has_fixed_size<failure_detection_msgs::srv::AfterPick_Response>::value
  >
{
};

template<>
struct has_bounded_size<failure_detection_msgs::srv::AfterPick>
  : std::integral_constant<
    bool,
    has_bounded_size<failure_detection_msgs::srv::AfterPick_Request>::value &&
    has_bounded_size<failure_detection_msgs::srv::AfterPick_Response>::value
  >
{
};

template<>
struct is_service<failure_detection_msgs::srv::AfterPick>
  : std::true_type
{
};

template<>
struct is_service_request<failure_detection_msgs::srv::AfterPick_Request>
  : std::true_type
{
};

template<>
struct is_service_response<failure_detection_msgs::srv::AfterPick_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FAILURE_DETECTION_MSGS__SRV__DETAIL__AFTER_PICK__TRAITS_HPP_
