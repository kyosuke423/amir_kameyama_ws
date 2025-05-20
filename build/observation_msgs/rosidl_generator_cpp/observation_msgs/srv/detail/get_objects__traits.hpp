// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from observation_msgs:srv/GetObjects.idl
// generated code does not contain a copyright notice

#ifndef OBSERVATION_MSGS__SRV__DETAIL__GET_OBJECTS__TRAITS_HPP_
#define OBSERVATION_MSGS__SRV__DETAIL__GET_OBJECTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "observation_msgs/srv/detail/get_objects__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace observation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetObjects_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: id_set
  {
    if (msg.id_set.size() == 0) {
      out << "id_set: []";
    } else {
      out << "id_set: [";
      size_t pending_items = msg.id_set.size();
      for (auto item : msg.id_set) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const GetObjects_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.id_set.size() == 0) {
      out << "id_set: []\n";
    } else {
      out << "id_set:\n";
      for (auto item : msg.id_set) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const GetObjects_Request & msg, bool use_flow_style = false)
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
  const observation_msgs::srv::GetObjects_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  observation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use observation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const observation_msgs::srv::GetObjects_Request & msg)
{
  return observation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<observation_msgs::srv::GetObjects_Request>()
{
  return "observation_msgs::srv::GetObjects_Request";
}

template<>
inline const char * name<observation_msgs::srv::GetObjects_Request>()
{
  return "observation_msgs/srv/GetObjects_Request";
}

template<>
struct has_fixed_size<observation_msgs::srv::GetObjects_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<observation_msgs::srv::GetObjects_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<observation_msgs::srv::GetObjects_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'objects'
#include "observation_msgs/msg/detail/object__traits.hpp"

namespace observation_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetObjects_Response & msg,
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
  const GetObjects_Response & msg,
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

inline std::string to_yaml(const GetObjects_Response & msg, bool use_flow_style = false)
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
  const observation_msgs::srv::GetObjects_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  observation_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use observation_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const observation_msgs::srv::GetObjects_Response & msg)
{
  return observation_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<observation_msgs::srv::GetObjects_Response>()
{
  return "observation_msgs::srv::GetObjects_Response";
}

template<>
inline const char * name<observation_msgs::srv::GetObjects_Response>()
{
  return "observation_msgs/srv/GetObjects_Response";
}

template<>
struct has_fixed_size<observation_msgs::srv::GetObjects_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<observation_msgs::srv::GetObjects_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<observation_msgs::srv::GetObjects_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<observation_msgs::srv::GetObjects>()
{
  return "observation_msgs::srv::GetObjects";
}

template<>
inline const char * name<observation_msgs::srv::GetObjects>()
{
  return "observation_msgs/srv/GetObjects";
}

template<>
struct has_fixed_size<observation_msgs::srv::GetObjects>
  : std::integral_constant<
    bool,
    has_fixed_size<observation_msgs::srv::GetObjects_Request>::value &&
    has_fixed_size<observation_msgs::srv::GetObjects_Response>::value
  >
{
};

template<>
struct has_bounded_size<observation_msgs::srv::GetObjects>
  : std::integral_constant<
    bool,
    has_bounded_size<observation_msgs::srv::GetObjects_Request>::value &&
    has_bounded_size<observation_msgs::srv::GetObjects_Response>::value
  >
{
};

template<>
struct is_service<observation_msgs::srv::GetObjects>
  : std::true_type
{
};

template<>
struct is_service_request<observation_msgs::srv::GetObjects_Request>
  : std::true_type
{
};

template<>
struct is_service_response<observation_msgs::srv::GetObjects_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OBSERVATION_MSGS__SRV__DETAIL__GET_OBJECTS__TRAITS_HPP_
