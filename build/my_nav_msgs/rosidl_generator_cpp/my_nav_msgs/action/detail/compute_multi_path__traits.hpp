// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_nav_msgs:action/ComputeMultiPath.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__ACTION__DETAIL__COMPUTE_MULTI_PATH__TRAITS_HPP_
#define MY_NAV_MSGS__ACTION__DETAIL__COMPUTE_MULTI_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_nav_msgs/action/detail/compute_multi_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'goal'
// Member 'start'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace my_nav_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ComputeMultiPath_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
    out << ", ";
  }

  // member: start
  {
    out << "start: ";
    to_flow_style_yaml(msg.start, out);
    out << ", ";
  }

  // member: planner_id
  {
    out << "planner_id: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_id, out);
    out << ", ";
  }

  // member: use_start
  {
    out << "use_start: ";
    rosidl_generator_traits::value_to_yaml(msg.use_start, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeMultiPath_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }

  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start:\n";
    to_block_style_yaml(msg.start, out, indentation + 2);
  }

  // member: planner_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planner_id: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_id, out);
    out << "\n";
  }

  // member: use_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_start: ";
    rosidl_generator_traits::value_to_yaml(msg.use_start, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeMultiPath_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_nav_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_nav_msgs::action::ComputeMultiPath_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_nav_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_nav_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const my_nav_msgs::action::ComputeMultiPath_Goal & msg)
{
  return my_nav_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_nav_msgs::action::ComputeMultiPath_Goal>()
{
  return "my_nav_msgs::action::ComputeMultiPath_Goal";
}

template<>
inline const char * name<my_nav_msgs::action::ComputeMultiPath_Goal>()
{
  return "my_nav_msgs/action/ComputeMultiPath_Goal";
}

template<>
struct has_fixed_size<my_nav_msgs::action::ComputeMultiPath_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_nav_msgs::action::ComputeMultiPath_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_nav_msgs::action::ComputeMultiPath_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'multi_path'
#include "my_nav_msgs/msg/detail/path_with_condition__traits.hpp"
// Member 'planning_time'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace my_nav_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ComputeMultiPath_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: multi_path
  {
    if (msg.multi_path.size() == 0) {
      out << "multi_path: []";
    } else {
      out << "multi_path: [";
      size_t pending_items = msg.multi_path.size();
      for (auto item : msg.multi_path) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: planning_time
  {
    out << "planning_time: ";
    to_flow_style_yaml(msg.planning_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeMultiPath_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: multi_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.multi_path.size() == 0) {
      out << "multi_path: []\n";
    } else {
      out << "multi_path:\n";
      for (auto item : msg.multi_path) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: planning_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_time:\n";
    to_block_style_yaml(msg.planning_time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeMultiPath_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_nav_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_nav_msgs::action::ComputeMultiPath_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_nav_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_nav_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const my_nav_msgs::action::ComputeMultiPath_Result & msg)
{
  return my_nav_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_nav_msgs::action::ComputeMultiPath_Result>()
{
  return "my_nav_msgs::action::ComputeMultiPath_Result";
}

template<>
inline const char * name<my_nav_msgs::action::ComputeMultiPath_Result>()
{
  return "my_nav_msgs/action/ComputeMultiPath_Result";
}

template<>
struct has_fixed_size<my_nav_msgs::action::ComputeMultiPath_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_nav_msgs::action::ComputeMultiPath_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_nav_msgs::action::ComputeMultiPath_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_nav_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ComputeMultiPath_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeMultiPath_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeMultiPath_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_nav_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_nav_msgs::action::ComputeMultiPath_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_nav_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_nav_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const my_nav_msgs::action::ComputeMultiPath_Feedback & msg)
{
  return my_nav_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_nav_msgs::action::ComputeMultiPath_Feedback>()
{
  return "my_nav_msgs::action::ComputeMultiPath_Feedback";
}

template<>
inline const char * name<my_nav_msgs::action::ComputeMultiPath_Feedback>()
{
  return "my_nav_msgs/action/ComputeMultiPath_Feedback";
}

template<>
struct has_fixed_size<my_nav_msgs::action::ComputeMultiPath_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_nav_msgs::action::ComputeMultiPath_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_nav_msgs::action::ComputeMultiPath_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "my_nav_msgs/action/detail/compute_multi_path__traits.hpp"

namespace my_nav_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ComputeMultiPath_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeMultiPath_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeMultiPath_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_nav_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_nav_msgs::action::ComputeMultiPath_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_nav_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_nav_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const my_nav_msgs::action::ComputeMultiPath_SendGoal_Request & msg)
{
  return my_nav_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_nav_msgs::action::ComputeMultiPath_SendGoal_Request>()
{
  return "my_nav_msgs::action::ComputeMultiPath_SendGoal_Request";
}

template<>
inline const char * name<my_nav_msgs::action::ComputeMultiPath_SendGoal_Request>()
{
  return "my_nav_msgs/action/ComputeMultiPath_SendGoal_Request";
}

template<>
struct has_fixed_size<my_nav_msgs::action::ComputeMultiPath_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<my_nav_msgs::action::ComputeMultiPath_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_nav_msgs::action::ComputeMultiPath_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<my_nav_msgs::action::ComputeMultiPath_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_nav_msgs::action::ComputeMultiPath_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace my_nav_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ComputeMultiPath_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeMultiPath_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeMultiPath_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_nav_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_nav_msgs::action::ComputeMultiPath_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_nav_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_nav_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const my_nav_msgs::action::ComputeMultiPath_SendGoal_Response & msg)
{
  return my_nav_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_nav_msgs::action::ComputeMultiPath_SendGoal_Response>()
{
  return "my_nav_msgs::action::ComputeMultiPath_SendGoal_Response";
}

template<>
inline const char * name<my_nav_msgs::action::ComputeMultiPath_SendGoal_Response>()
{
  return "my_nav_msgs/action/ComputeMultiPath_SendGoal_Response";
}

template<>
struct has_fixed_size<my_nav_msgs::action::ComputeMultiPath_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<my_nav_msgs::action::ComputeMultiPath_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<my_nav_msgs::action::ComputeMultiPath_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_nav_msgs::action::ComputeMultiPath_SendGoal>()
{
  return "my_nav_msgs::action::ComputeMultiPath_SendGoal";
}

template<>
inline const char * name<my_nav_msgs::action::ComputeMultiPath_SendGoal>()
{
  return "my_nav_msgs/action/ComputeMultiPath_SendGoal";
}

template<>
struct has_fixed_size<my_nav_msgs::action::ComputeMultiPath_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<my_nav_msgs::action::ComputeMultiPath_SendGoal_Request>::value &&
    has_fixed_size<my_nav_msgs::action::ComputeMultiPath_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_nav_msgs::action::ComputeMultiPath_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<my_nav_msgs::action::ComputeMultiPath_SendGoal_Request>::value &&
    has_bounded_size<my_nav_msgs::action::ComputeMultiPath_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<my_nav_msgs::action::ComputeMultiPath_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<my_nav_msgs::action::ComputeMultiPath_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_nav_msgs::action::ComputeMultiPath_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace my_nav_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ComputeMultiPath_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeMultiPath_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeMultiPath_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_nav_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_nav_msgs::action::ComputeMultiPath_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_nav_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_nav_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const my_nav_msgs::action::ComputeMultiPath_GetResult_Request & msg)
{
  return my_nav_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_nav_msgs::action::ComputeMultiPath_GetResult_Request>()
{
  return "my_nav_msgs::action::ComputeMultiPath_GetResult_Request";
}

template<>
inline const char * name<my_nav_msgs::action::ComputeMultiPath_GetResult_Request>()
{
  return "my_nav_msgs/action/ComputeMultiPath_GetResult_Request";
}

template<>
struct has_fixed_size<my_nav_msgs::action::ComputeMultiPath_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_nav_msgs::action::ComputeMultiPath_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_nav_msgs::action::ComputeMultiPath_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "my_nav_msgs/action/detail/compute_multi_path__traits.hpp"

namespace my_nav_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ComputeMultiPath_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeMultiPath_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeMultiPath_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_nav_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_nav_msgs::action::ComputeMultiPath_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_nav_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_nav_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const my_nav_msgs::action::ComputeMultiPath_GetResult_Response & msg)
{
  return my_nav_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_nav_msgs::action::ComputeMultiPath_GetResult_Response>()
{
  return "my_nav_msgs::action::ComputeMultiPath_GetResult_Response";
}

template<>
inline const char * name<my_nav_msgs::action::ComputeMultiPath_GetResult_Response>()
{
  return "my_nav_msgs/action/ComputeMultiPath_GetResult_Response";
}

template<>
struct has_fixed_size<my_nav_msgs::action::ComputeMultiPath_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<my_nav_msgs::action::ComputeMultiPath_Result>::value> {};

template<>
struct has_bounded_size<my_nav_msgs::action::ComputeMultiPath_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<my_nav_msgs::action::ComputeMultiPath_Result>::value> {};

template<>
struct is_message<my_nav_msgs::action::ComputeMultiPath_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_nav_msgs::action::ComputeMultiPath_GetResult>()
{
  return "my_nav_msgs::action::ComputeMultiPath_GetResult";
}

template<>
inline const char * name<my_nav_msgs::action::ComputeMultiPath_GetResult>()
{
  return "my_nav_msgs/action/ComputeMultiPath_GetResult";
}

template<>
struct has_fixed_size<my_nav_msgs::action::ComputeMultiPath_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<my_nav_msgs::action::ComputeMultiPath_GetResult_Request>::value &&
    has_fixed_size<my_nav_msgs::action::ComputeMultiPath_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_nav_msgs::action::ComputeMultiPath_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<my_nav_msgs::action::ComputeMultiPath_GetResult_Request>::value &&
    has_bounded_size<my_nav_msgs::action::ComputeMultiPath_GetResult_Response>::value
  >
{
};

template<>
struct is_service<my_nav_msgs::action::ComputeMultiPath_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<my_nav_msgs::action::ComputeMultiPath_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_nav_msgs::action::ComputeMultiPath_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "my_nav_msgs/action/detail/compute_multi_path__traits.hpp"

namespace my_nav_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ComputeMultiPath_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ComputeMultiPath_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ComputeMultiPath_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace my_nav_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_nav_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_nav_msgs::action::ComputeMultiPath_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_nav_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_nav_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const my_nav_msgs::action::ComputeMultiPath_FeedbackMessage & msg)
{
  return my_nav_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<my_nav_msgs::action::ComputeMultiPath_FeedbackMessage>()
{
  return "my_nav_msgs::action::ComputeMultiPath_FeedbackMessage";
}

template<>
inline const char * name<my_nav_msgs::action::ComputeMultiPath_FeedbackMessage>()
{
  return "my_nav_msgs/action/ComputeMultiPath_FeedbackMessage";
}

template<>
struct has_fixed_size<my_nav_msgs::action::ComputeMultiPath_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<my_nav_msgs::action::ComputeMultiPath_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<my_nav_msgs::action::ComputeMultiPath_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<my_nav_msgs::action::ComputeMultiPath_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<my_nav_msgs::action::ComputeMultiPath_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<my_nav_msgs::action::ComputeMultiPath>
  : std::true_type
{
};

template<>
struct is_action_goal<my_nav_msgs::action::ComputeMultiPath_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<my_nav_msgs::action::ComputeMultiPath_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<my_nav_msgs::action::ComputeMultiPath_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MY_NAV_MSGS__ACTION__DETAIL__COMPUTE_MULTI_PATH__TRAITS_HPP_
