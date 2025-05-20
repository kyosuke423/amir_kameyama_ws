// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from observation_msgs:srv/SetObjects.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__SRV__DETAIL__SET_OBJECTS__TRAITS_HPP_
#define OBSERVATION_MSGS__SRV__DETAIL__SET_OBJECTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "observation_msgs/srv/detail/set_objects__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'objects'
#include "observation_msgs/msg/detail/object__traits.hpp"

namespace observation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetObjects_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: objects
  {
    if (msg.objects.size() == 0) {
      out << "objects: []";
    } else {
      out << "objects: [";
      size_t pending_items = msg.objects.size();
      for (auto item : msg.objects) {
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
  const SetObjects_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects.size() == 0) {
      out << "objects: []\n";
    } else {
      out << "objects:\n";
      for (auto item : msg.objects) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetObjects_Request & msg, bool use_flow_style = false)
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
  const observation_msgs::srv::SetObjects_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  observation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use observation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const observation_msgs::srv::SetObjects_Request & msg)
{
  return observation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<observation_msgs::srv::SetObjects_Request>()
{
  return "observation_msgs::srv::SetObjects_Request";
}

template<>
inline const char * name<observation_msgs::srv::SetObjects_Request>()
{
  return "observation_msgs/srv/SetObjects_Request";
}

template<>
struct has_fixed_size<observation_msgs::srv::SetObjects_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<observation_msgs::srv::SetObjects_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<observation_msgs::srv::SetObjects_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace observation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetObjects_Response & msg,
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
  const SetObjects_Response & msg,
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

inline std::string to_yaml(const SetObjects_Response & msg, bool use_flow_style = false)
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
  const observation_msgs::srv::SetObjects_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  observation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use observation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const observation_msgs::srv::SetObjects_Response & msg)
{
  return observation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<observation_msgs::srv::SetObjects_Response>()
{
  return "observation_msgs::srv::SetObjects_Response";
}

template<>
inline const char * name<observation_msgs::srv::SetObjects_Response>()
{
  return "observation_msgs/srv/SetObjects_Response";
}

template<>
struct has_fixed_size<observation_msgs::srv::SetObjects_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<observation_msgs::srv::SetObjects_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<observation_msgs::srv::SetObjects_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<observation_msgs::srv::SetObjects>()
{
  return "observation_msgs::srv::SetObjects";
}

template<>
inline const char * name<observation_msgs::srv::SetObjects>()
{
  return "observation_msgs/srv/SetObjects";
}

template<>
struct has_fixed_size<observation_msgs::srv::SetObjects>
  : std::integral_constant<
    bool,
    has_fixed_size<observation_msgs::srv::SetObjects_Request>::value &&
    has_fixed_size<observation_msgs::srv::SetObjects_Response>::value
  >
{
};

template<>
struct has_bounded_size<observation_msgs::srv::SetObjects>
  : std::integral_constant<
    bool,
    has_bounded_size<observation_msgs::srv::SetObjects_Request>::value &&
    has_bounded_size<observation_msgs::srv::SetObjects_Response>::value
  >
{
};

template<>
struct is_service<observation_msgs::srv::SetObjects>
  : std::true_type
{
};

template<>
struct is_service_request<observation_msgs::srv::SetObjects_Request>
  : std::true_type
{
};

template<>
struct is_service_response<observation_msgs::srv::SetObjects_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OBSERVATION_MSGS__SRV__DETAIL__SET_OBJECTS__TRAITS_HPP_
