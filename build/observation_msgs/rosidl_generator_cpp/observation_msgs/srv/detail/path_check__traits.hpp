// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from observation_msgs:srv/PathCheck.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__SRV__DETAIL__PATH_CHECK__TRAITS_HPP_
#define OBSERVATION_MSGS__SRV__DETAIL__PATH_CHECK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "observation_msgs/srv/detail/path_check__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__traits.hpp"

namespace observation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PathCheck_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: path
  {
    out << "path: ";
    to_flow_style_yaml(msg.path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_block_style_yaml(msg.path, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathCheck_Request & msg, bool use_flow_style = false)
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

}  // namespace observation_msgs

namespace rosidl_generator_traits
{

[[deprecated("use observation_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const observation_msgs::srv::PathCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  observation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use observation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const observation_msgs::srv::PathCheck_Request & msg)
{
  return observation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<observation_msgs::srv::PathCheck_Request>()
{
  return "observation_msgs::srv::PathCheck_Request";
}

template<>
inline const char * name<observation_msgs::srv::PathCheck_Request>()
{
  return "observation_msgs/srv/PathCheck_Request";
}

template<>
struct has_fixed_size<observation_msgs::srv::PathCheck_Request>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<observation_msgs::srv::PathCheck_Request>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::Path>::value> {};

template<>
struct is_message<observation_msgs::srv::PathCheck_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace observation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PathCheck_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_string
  {
    out << "error_string: ";
    rosidl_generator_traits::value_to_yaml(msg.error_string, out);
    out << ", ";
  }

  // member: anomaly_score
  {
    out << "anomaly_score: ";
    rosidl_generator_traits::value_to_yaml(msg.anomaly_score, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathCheck_Response & msg,
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

  // member: anomaly_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anomaly_score: ";
    rosidl_generator_traits::value_to_yaml(msg.anomaly_score, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathCheck_Response & msg, bool use_flow_style = false)
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

}  // namespace observation_msgs

namespace rosidl_generator_traits
{

[[deprecated("use observation_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const observation_msgs::srv::PathCheck_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  observation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use observation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const observation_msgs::srv::PathCheck_Response & msg)
{
  return observation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<observation_msgs::srv::PathCheck_Response>()
{
  return "observation_msgs::srv::PathCheck_Response";
}

template<>
inline const char * name<observation_msgs::srv::PathCheck_Response>()
{
  return "observation_msgs/srv/PathCheck_Response";
}

template<>
struct has_fixed_size<observation_msgs::srv::PathCheck_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<observation_msgs::srv::PathCheck_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<observation_msgs::srv::PathCheck_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<observation_msgs::srv::PathCheck>()
{
  return "observation_msgs::srv::PathCheck";
}

template<>
inline const char * name<observation_msgs::srv::PathCheck>()
{
  return "observation_msgs/srv/PathCheck";
}

template<>
struct has_fixed_size<observation_msgs::srv::PathCheck>
  : std::integral_constant<
    bool,
    has_fixed_size<observation_msgs::srv::PathCheck_Request>::value &&
    has_fixed_size<observation_msgs::srv::PathCheck_Response>::value
  >
{
};

template<>
struct has_bounded_size<observation_msgs::srv::PathCheck>
  : std::integral_constant<
    bool,
    has_bounded_size<observation_msgs::srv::PathCheck_Request>::value &&
    has_bounded_size<observation_msgs::srv::PathCheck_Response>::value
  >
{
};

template<>
struct is_service<observation_msgs::srv::PathCheck>
  : std::true_type
{
};

template<>
struct is_service_request<observation_msgs::srv::PathCheck_Request>
  : std::true_type
{
};

template<>
struct is_service_response<observation_msgs::srv::PathCheck_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OBSERVATION_MSGS__SRV__DETAIL__PATH_CHECK__TRAITS_HPP_
