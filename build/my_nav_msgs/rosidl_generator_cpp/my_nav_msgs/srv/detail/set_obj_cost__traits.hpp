// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_nav_msgs:srv/SetObjCost.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__SRV__DETAIL__SET_OBJ_COST__TRAITS_HPP_
#define MY_NAV_MSGS__SRV__DETAIL__SET_OBJ_COST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_nav_msgs/srv/detail/set_obj_cost__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'markers'
#include "visualization_msgs/msg/detail/marker_array__traits.hpp"

namespace my_nav_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetObjCost_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: markers
  {
    out << "markers: ";
    to_flow_style_yaml(msg.markers, out);
    out << ", ";
  }

  // member: partial_update
  {
    out << "partial_update: ";
    rosidl_generator_traits::value_to_yaml(msg.partial_update, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetObjCost_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: markers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "markers:\n";
    to_block_style_yaml(msg.markers, out, indentation + 2);
  }

  // member: partial_update
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "partial_update: ";
    rosidl_generator_traits::value_to_yaml(msg.partial_update, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetObjCost_Request & msg, bool use_flow_style = false)
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

}  // namespace my_nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_nav_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_nav_msgs::srv::SetObjCost_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_nav_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_nav_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_nav_msgs::srv::SetObjCost_Request & msg)
{
  return my_nav_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_nav_msgs::srv::SetObjCost_Request>()
{
  return "my_nav_msgs::srv::SetObjCost_Request";
}

template<>
inline const char * name<my_nav_msgs::srv::SetObjCost_Request>()
{
  return "my_nav_msgs/srv/SetObjCost_Request";
}

template<>
struct has_fixed_size<my_nav_msgs::srv::SetObjCost_Request>
  : std::integral_constant<bool, has_fixed_size<visualization_msgs::msg::MarkerArray>::value> {};

template<>
struct has_bounded_size<my_nav_msgs::srv::SetObjCost_Request>
  : std::integral_constant<bool, has_bounded_size<visualization_msgs::msg::MarkerArray>::value> {};

template<>
struct is_message<my_nav_msgs::srv::SetObjCost_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'set_markers'
// already included above
// #include "visualization_msgs/msg/detail/marker_array__traits.hpp"

namespace my_nav_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetObjCost_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_string
  {
    out << "error_string: ";
    rosidl_generator_traits::value_to_yaml(msg.error_string, out);
    out << ", ";
  }

  // member: set_markers
  {
    out << "set_markers: ";
    to_flow_style_yaml(msg.set_markers, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetObjCost_Response & msg,
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

  // member: set_markers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_markers:\n";
    to_block_style_yaml(msg.set_markers, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetObjCost_Response & msg, bool use_flow_style = false)
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

}  // namespace my_nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_nav_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_nav_msgs::srv::SetObjCost_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_nav_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_nav_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_nav_msgs::srv::SetObjCost_Response & msg)
{
  return my_nav_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_nav_msgs::srv::SetObjCost_Response>()
{
  return "my_nav_msgs::srv::SetObjCost_Response";
}

template<>
inline const char * name<my_nav_msgs::srv::SetObjCost_Response>()
{
  return "my_nav_msgs/srv/SetObjCost_Response";
}

template<>
struct has_fixed_size<my_nav_msgs::srv::SetObjCost_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_nav_msgs::srv::SetObjCost_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_nav_msgs::srv::SetObjCost_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_nav_msgs::srv::SetObjCost>()
{
  return "my_nav_msgs::srv::SetObjCost";
}

template<>
inline const char * name<my_nav_msgs::srv::SetObjCost>()
{
  return "my_nav_msgs/srv/SetObjCost";
}

template<>
struct has_fixed_size<my_nav_msgs::srv::SetObjCost>
  : std::integral_constant<
    bool,
    has_fixed_size<my_nav_msgs::srv::SetObjCost_Request>::value &&
    has_fixed_size<my_nav_msgs::srv::SetObjCost_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_nav_msgs::srv::SetObjCost>
  : std::integral_constant<
    bool,
    has_bounded_size<my_nav_msgs::srv::SetObjCost_Request>::value &&
    has_bounded_size<my_nav_msgs::srv::SetObjCost_Response>::value
  >
{
};

template<>
struct is_service<my_nav_msgs::srv::SetObjCost>
  : std::true_type
{
};

template<>
struct is_service_request<my_nav_msgs::srv::SetObjCost_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_nav_msgs::srv::SetObjCost_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_NAV_MSGS__SRV__DETAIL__SET_OBJ_COST__TRAITS_HPP_
