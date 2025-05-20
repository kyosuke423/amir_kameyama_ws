// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from behavior_tree_msgs:srv/FovCheck.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__FOV_CHECK__TRAITS_HPP_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__FOV_CHECK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "behavior_tree_msgs/srv/detail/fov_check__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace behavior_tree_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FovCheck_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_position
  {
    out << "target_position: ";
    to_flow_style_yaml(msg.target_position, out);
    out << ", ";
  }

  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FovCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_position:\n";
    to_block_style_yaml(msg.target_position, out, indentation + 2);
  }

  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FovCheck_Request & msg, bool use_flow_style = false)
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
  const behavior_tree_msgs::srv::FovCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::srv::FovCheck_Request & msg)
{
  return behavior_tree_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::srv::FovCheck_Request>()
{
  return "behavior_tree_msgs::srv::FovCheck_Request";
}

template<>
inline const char * name<behavior_tree_msgs::srv::FovCheck_Request>()
{
  return "behavior_tree_msgs/srv/FovCheck_Request";
}

template<>
struct has_fixed_size<behavior_tree_msgs::srv::FovCheck_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_tree_msgs::srv::FovCheck_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_tree_msgs::srv::FovCheck_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace behavior_tree_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FovCheck_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: in_fov
  {
    out << "in_fov: ";
    rosidl_generator_traits::value_to_yaml(msg.in_fov, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FovCheck_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: in_fov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_fov: ";
    rosidl_generator_traits::value_to_yaml(msg.in_fov, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FovCheck_Response & msg, bool use_flow_style = false)
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
  const behavior_tree_msgs::srv::FovCheck_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::srv::FovCheck_Response & msg)
{
  return behavior_tree_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::srv::FovCheck_Response>()
{
  return "behavior_tree_msgs::srv::FovCheck_Response";
}

template<>
inline const char * name<behavior_tree_msgs::srv::FovCheck_Response>()
{
  return "behavior_tree_msgs/srv/FovCheck_Response";
}

template<>
struct has_fixed_size<behavior_tree_msgs::srv::FovCheck_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<behavior_tree_msgs::srv::FovCheck_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<behavior_tree_msgs::srv::FovCheck_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<behavior_tree_msgs::srv::FovCheck>()
{
  return "behavior_tree_msgs::srv::FovCheck";
}

template<>
inline const char * name<behavior_tree_msgs::srv::FovCheck>()
{
  return "behavior_tree_msgs/srv/FovCheck";
}

template<>
struct has_fixed_size<behavior_tree_msgs::srv::FovCheck>
  : std::integral_constant<
    bool,
    has_fixed_size<behavior_tree_msgs::srv::FovCheck_Request>::value &&
    has_fixed_size<behavior_tree_msgs::srv::FovCheck_Response>::value
  >
{
};

template<>
struct has_bounded_size<behavior_tree_msgs::srv::FovCheck>
  : std::integral_constant<
    bool,
    has_bounded_size<behavior_tree_msgs::srv::FovCheck_Request>::value &&
    has_bounded_size<behavior_tree_msgs::srv::FovCheck_Response>::value
  >
{
};

template<>
struct is_service<behavior_tree_msgs::srv::FovCheck>
  : std::true_type
{
};

template<>
struct is_service_request<behavior_tree_msgs::srv::FovCheck_Request>
  : std::true_type
{
};

template<>
struct is_service_response<behavior_tree_msgs::srv::FovCheck_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__FOV_CHECK__TRAITS_HPP_
