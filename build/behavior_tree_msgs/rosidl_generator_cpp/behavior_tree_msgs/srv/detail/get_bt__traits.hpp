// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from behavior_tree_msgs:srv/GetBT.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BT__TRAITS_HPP_
#define BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "behavior_tree_msgs/srv/detail/get_bt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace behavior_tree_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBT_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: bt
  {
    out << "bt: ";
    rosidl_generator_traits::value_to_yaml(msg.bt, out);
    out << ", ";
  }

  // member: goal_condition
  {
    out << "goal_condition: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_condition, out);
    out << ", ";
  }

  // member: goal_conditions
  {
    if (msg.goal_conditions.size() == 0) {
      out << "goal_conditions: []";
    } else {
      out << "goal_conditions: [";
      size_t pending_items = msg.goal_conditions.size();
      for (auto item : msg.goal_conditions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: failed_nood_id
  {
    out << "failed_nood_id: ";
    rosidl_generator_traits::value_to_yaml(msg.failed_nood_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBT_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: bt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bt: ";
    rosidl_generator_traits::value_to_yaml(msg.bt, out);
    out << "\n";
  }

  // member: goal_condition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_condition: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_condition, out);
    out << "\n";
  }

  // member: goal_conditions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal_conditions.size() == 0) {
      out << "goal_conditions: []\n";
    } else {
      out << "goal_conditions:\n";
      for (auto item : msg.goal_conditions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: failed_nood_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failed_nood_id: ";
    rosidl_generator_traits::value_to_yaml(msg.failed_nood_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBT_Request & msg, bool use_flow_style = false)
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
  const behavior_tree_msgs::srv::GetBT_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::srv::GetBT_Request & msg)
{
  return behavior_tree_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::srv::GetBT_Request>()
{
  return "behavior_tree_msgs::srv::GetBT_Request";
}

template<>
inline const char * name<behavior_tree_msgs::srv::GetBT_Request>()
{
  return "behavior_tree_msgs/srv/GetBT_Request";
}

template<>
struct has_fixed_size<behavior_tree_msgs::srv::GetBT_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_tree_msgs::srv::GetBT_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_tree_msgs::srv::GetBT_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace behavior_tree_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBT_Response & msg,
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
  const GetBT_Response & msg,
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

inline std::string to_yaml(const GetBT_Response & msg, bool use_flow_style = false)
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
  const behavior_tree_msgs::srv::GetBT_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::srv::GetBT_Response & msg)
{
  return behavior_tree_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::srv::GetBT_Response>()
{
  return "behavior_tree_msgs::srv::GetBT_Response";
}

template<>
inline const char * name<behavior_tree_msgs::srv::GetBT_Response>()
{
  return "behavior_tree_msgs/srv/GetBT_Response";
}

template<>
struct has_fixed_size<behavior_tree_msgs::srv::GetBT_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_tree_msgs::srv::GetBT_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_tree_msgs::srv::GetBT_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<behavior_tree_msgs::srv::GetBT>()
{
  return "behavior_tree_msgs::srv::GetBT";
}

template<>
inline const char * name<behavior_tree_msgs::srv::GetBT>()
{
  return "behavior_tree_msgs/srv/GetBT";
}

template<>
struct has_fixed_size<behavior_tree_msgs::srv::GetBT>
  : std::integral_constant<
    bool,
    has_fixed_size<behavior_tree_msgs::srv::GetBT_Request>::value &&
    has_fixed_size<behavior_tree_msgs::srv::GetBT_Response>::value
  >
{
};

template<>
struct has_bounded_size<behavior_tree_msgs::srv::GetBT>
  : std::integral_constant<
    bool,
    has_bounded_size<behavior_tree_msgs::srv::GetBT_Request>::value &&
    has_bounded_size<behavior_tree_msgs::srv::GetBT_Response>::value
  >
{
};

template<>
struct is_service<behavior_tree_msgs::srv::GetBT>
  : std::true_type
{
};

template<>
struct is_service_request<behavior_tree_msgs::srv::GetBT_Request>
  : std::true_type
{
};

template<>
struct is_service_response<behavior_tree_msgs::srv::GetBT_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BEHAVIOR_TREE_MSGS__SRV__DETAIL__GET_BT__TRAITS_HPP_
