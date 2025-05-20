// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from failure_detection_msgs:srv/PathCheck.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__SRV__DETAIL__PATH_CHECK__TRAITS_HPP_
#define FAILURE_DETECTION_MSGS__SRV__DETAIL__PATH_CHECK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "failure_detection_msgs/srv/detail/path_check__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'paths'
#include "my_nav_msgs/msg/detail/path_with_condition__traits.hpp"

namespace failure_detection_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PathCheck_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: paths
  {
    if (msg.paths.size() == 0) {
      out << "paths: []";
    } else {
      out << "paths: [";
      size_t pending_items = msg.paths.size();
      for (auto item : msg.paths) {
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
  const PathCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: paths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.paths.size() == 0) {
      out << "paths: []\n";
    } else {
      out << "paths:\n";
      for (auto item : msg.paths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

}  // namespace failure_detection_msgs

namespace rosidl_generator_traits
{

[[deprecated("use failure_detection_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const failure_detection_msgs::srv::PathCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  failure_detection_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use failure_detection_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const failure_detection_msgs::srv::PathCheck_Request & msg)
{
  return failure_detection_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<failure_detection_msgs::srv::PathCheck_Request>()
{
  return "failure_detection_msgs::srv::PathCheck_Request";
}

template<>
inline const char * name<failure_detection_msgs::srv::PathCheck_Request>()
{
  return "failure_detection_msgs/srv/PathCheck_Request";
}

template<>
struct has_fixed_size<failure_detection_msgs::srv::PathCheck_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<failure_detection_msgs::srv::PathCheck_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<failure_detection_msgs::srv::PathCheck_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info_set'
#include "my_nav_msgs/msg/detail/path_info__traits.hpp"

namespace failure_detection_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PathCheck_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_strings
  {
    out << "error_strings: ";
    rosidl_generator_traits::value_to_yaml(msg.error_strings, out);
    out << ", ";
  }

  // member: info_set
  {
    if (msg.info_set.size() == 0) {
      out << "info_set: []";
    } else {
      out << "info_set: [";
      size_t pending_items = msg.info_set.size();
      for (auto item : msg.info_set) {
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
  const PathCheck_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_strings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_strings: ";
    rosidl_generator_traits::value_to_yaml(msg.error_strings, out);
    out << "\n";
  }

  // member: info_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.info_set.size() == 0) {
      out << "info_set: []\n";
    } else {
      out << "info_set:\n";
      for (auto item : msg.info_set) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

}  // namespace failure_detection_msgs

namespace rosidl_generator_traits
{

[[deprecated("use failure_detection_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const failure_detection_msgs::srv::PathCheck_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  failure_detection_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use failure_detection_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const failure_detection_msgs::srv::PathCheck_Response & msg)
{
  return failure_detection_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<failure_detection_msgs::srv::PathCheck_Response>()
{
  return "failure_detection_msgs::srv::PathCheck_Response";
}

template<>
inline const char * name<failure_detection_msgs::srv::PathCheck_Response>()
{
  return "failure_detection_msgs/srv/PathCheck_Response";
}

template<>
struct has_fixed_size<failure_detection_msgs::srv::PathCheck_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<failure_detection_msgs::srv::PathCheck_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<failure_detection_msgs::srv::PathCheck_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<failure_detection_msgs::srv::PathCheck>()
{
  return "failure_detection_msgs::srv::PathCheck";
}

template<>
inline const char * name<failure_detection_msgs::srv::PathCheck>()
{
  return "failure_detection_msgs/srv/PathCheck";
}

template<>
struct has_fixed_size<failure_detection_msgs::srv::PathCheck>
  : std::integral_constant<
    bool,
    has_fixed_size<failure_detection_msgs::srv::PathCheck_Request>::value &&
    has_fixed_size<failure_detection_msgs::srv::PathCheck_Response>::value
  >
{
};

template<>
struct has_bounded_size<failure_detection_msgs::srv::PathCheck>
  : std::integral_constant<
    bool,
    has_bounded_size<failure_detection_msgs::srv::PathCheck_Request>::value &&
    has_bounded_size<failure_detection_msgs::srv::PathCheck_Response>::value
  >
{
};

template<>
struct is_service<failure_detection_msgs::srv::PathCheck>
  : std::true_type
{
};

template<>
struct is_service_request<failure_detection_msgs::srv::PathCheck_Request>
  : std::true_type
{
};

template<>
struct is_service_response<failure_detection_msgs::srv::PathCheck_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FAILURE_DETECTION_MSGS__SRV__DETAIL__PATH_CHECK__TRAITS_HPP_
