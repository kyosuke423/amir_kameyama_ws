// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from behavior_tree_msgs:action/MecanumSpin.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__ACTION__DETAIL__MECANUM_SPIN__TRAITS_HPP_
#define BEHAVIOR_TREE_MSGS__ACTION__DETAIL__MECANUM_SPIN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "behavior_tree_msgs/action/detail/mecanum_spin__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace behavior_tree_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MecanumSpin_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: dop
  {
    out << "dop: ";
    rosidl_generator_traits::value_to_yaml(msg.dop, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MecanumSpin_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: dop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dop: ";
    rosidl_generator_traits::value_to_yaml(msg.dop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MecanumSpin_Goal & msg, bool use_flow_style = false)
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

}  // namespace behavior_tree_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_tree_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_tree_msgs::action::MecanumSpin_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::action::MecanumSpin_Goal & msg)
{
  return behavior_tree_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::action::MecanumSpin_Goal>()
{
  return "behavior_tree_msgs::action::MecanumSpin_Goal";
}

template<>
inline const char * name<behavior_tree_msgs::action::MecanumSpin_Goal>()
{
  return "behavior_tree_msgs/action/MecanumSpin_Goal";
}

template<>
struct has_fixed_size<behavior_tree_msgs::action::MecanumSpin_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<behavior_tree_msgs::action::MecanumSpin_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<behavior_tree_msgs::action::MecanumSpin_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace behavior_tree_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MecanumSpin_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_string
  {
    out << "error_string: ";
    rosidl_generator_traits::value_to_yaml(msg.error_string, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MecanumSpin_Result & msg,
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

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MecanumSpin_Result & msg, bool use_flow_style = false)
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

}  // namespace behavior_tree_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_tree_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_tree_msgs::action::MecanumSpin_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::action::MecanumSpin_Result & msg)
{
  return behavior_tree_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::action::MecanumSpin_Result>()
{
  return "behavior_tree_msgs::action::MecanumSpin_Result";
}

template<>
inline const char * name<behavior_tree_msgs::action::MecanumSpin_Result>()
{
  return "behavior_tree_msgs/action/MecanumSpin_Result";
}

template<>
struct has_fixed_size<behavior_tree_msgs::action::MecanumSpin_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<behavior_tree_msgs::action::MecanumSpin_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<behavior_tree_msgs::action::MecanumSpin_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace behavior_tree_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MecanumSpin_Feedback & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MecanumSpin_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MecanumSpin_Feedback & msg, bool use_flow_style = false)
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

}  // namespace behavior_tree_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_tree_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_tree_msgs::action::MecanumSpin_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::action::MecanumSpin_Feedback & msg)
{
  return behavior_tree_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::action::MecanumSpin_Feedback>()
{
  return "behavior_tree_msgs::action::MecanumSpin_Feedback";
}

template<>
inline const char * name<behavior_tree_msgs::action::MecanumSpin_Feedback>()
{
  return "behavior_tree_msgs/action/MecanumSpin_Feedback";
}

template<>
struct has_fixed_size<behavior_tree_msgs::action::MecanumSpin_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<behavior_tree_msgs::action::MecanumSpin_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<behavior_tree_msgs::action::MecanumSpin_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "behavior_tree_msgs/action/detail/mecanum_spin__traits.hpp"

namespace behavior_tree_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MecanumSpin_SendGoal_Request & msg,
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
  const MecanumSpin_SendGoal_Request & msg,
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

inline std::string to_yaml(const MecanumSpin_SendGoal_Request & msg, bool use_flow_style = false)
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

}  // namespace behavior_tree_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_tree_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_tree_msgs::action::MecanumSpin_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::action::MecanumSpin_SendGoal_Request & msg)
{
  return behavior_tree_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::action::MecanumSpin_SendGoal_Request>()
{
  return "behavior_tree_msgs::action::MecanumSpin_SendGoal_Request";
}

template<>
inline const char * name<behavior_tree_msgs::action::MecanumSpin_SendGoal_Request>()
{
  return "behavior_tree_msgs/action/MecanumSpin_SendGoal_Request";
}

template<>
struct has_fixed_size<behavior_tree_msgs::action::MecanumSpin_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<behavior_tree_msgs::action::MecanumSpin_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<behavior_tree_msgs::action::MecanumSpin_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<behavior_tree_msgs::action::MecanumSpin_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<behavior_tree_msgs::action::MecanumSpin_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace behavior_tree_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MecanumSpin_SendGoal_Response & msg,
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
  const MecanumSpin_SendGoal_Response & msg,
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

inline std::string to_yaml(const MecanumSpin_SendGoal_Response & msg, bool use_flow_style = false)
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

}  // namespace behavior_tree_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_tree_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_tree_msgs::action::MecanumSpin_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::action::MecanumSpin_SendGoal_Response & msg)
{
  return behavior_tree_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::action::MecanumSpin_SendGoal_Response>()
{
  return "behavior_tree_msgs::action::MecanumSpin_SendGoal_Response";
}

template<>
inline const char * name<behavior_tree_msgs::action::MecanumSpin_SendGoal_Response>()
{
  return "behavior_tree_msgs/action/MecanumSpin_SendGoal_Response";
}

template<>
struct has_fixed_size<behavior_tree_msgs::action::MecanumSpin_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<behavior_tree_msgs::action::MecanumSpin_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<behavior_tree_msgs::action::MecanumSpin_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<behavior_tree_msgs::action::MecanumSpin_SendGoal>()
{
  return "behavior_tree_msgs::action::MecanumSpin_SendGoal";
}

template<>
inline const char * name<behavior_tree_msgs::action::MecanumSpin_SendGoal>()
{
  return "behavior_tree_msgs/action/MecanumSpin_SendGoal";
}

template<>
struct has_fixed_size<behavior_tree_msgs::action::MecanumSpin_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<behavior_tree_msgs::action::MecanumSpin_SendGoal_Request>::value &&
    has_fixed_size<behavior_tree_msgs::action::MecanumSpin_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<behavior_tree_msgs::action::MecanumSpin_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<behavior_tree_msgs::action::MecanumSpin_SendGoal_Request>::value &&
    has_bounded_size<behavior_tree_msgs::action::MecanumSpin_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<behavior_tree_msgs::action::MecanumSpin_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<behavior_tree_msgs::action::MecanumSpin_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<behavior_tree_msgs::action::MecanumSpin_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace behavior_tree_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MecanumSpin_GetResult_Request & msg,
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
  const MecanumSpin_GetResult_Request & msg,
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

inline std::string to_yaml(const MecanumSpin_GetResult_Request & msg, bool use_flow_style = false)
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

}  // namespace behavior_tree_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_tree_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_tree_msgs::action::MecanumSpin_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::action::MecanumSpin_GetResult_Request & msg)
{
  return behavior_tree_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::action::MecanumSpin_GetResult_Request>()
{
  return "behavior_tree_msgs::action::MecanumSpin_GetResult_Request";
}

template<>
inline const char * name<behavior_tree_msgs::action::MecanumSpin_GetResult_Request>()
{
  return "behavior_tree_msgs/action/MecanumSpin_GetResult_Request";
}

template<>
struct has_fixed_size<behavior_tree_msgs::action::MecanumSpin_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<behavior_tree_msgs::action::MecanumSpin_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<behavior_tree_msgs::action::MecanumSpin_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_tree_msgs/action/detail/mecanum_spin__traits.hpp"

namespace behavior_tree_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MecanumSpin_GetResult_Response & msg,
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
  const MecanumSpin_GetResult_Response & msg,
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

inline std::string to_yaml(const MecanumSpin_GetResult_Response & msg, bool use_flow_style = false)
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

}  // namespace behavior_tree_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_tree_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_tree_msgs::action::MecanumSpin_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::action::MecanumSpin_GetResult_Response & msg)
{
  return behavior_tree_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::action::MecanumSpin_GetResult_Response>()
{
  return "behavior_tree_msgs::action::MecanumSpin_GetResult_Response";
}

template<>
inline const char * name<behavior_tree_msgs::action::MecanumSpin_GetResult_Response>()
{
  return "behavior_tree_msgs/action/MecanumSpin_GetResult_Response";
}

template<>
struct has_fixed_size<behavior_tree_msgs::action::MecanumSpin_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<behavior_tree_msgs::action::MecanumSpin_Result>::value> {};

template<>
struct has_bounded_size<behavior_tree_msgs::action::MecanumSpin_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<behavior_tree_msgs::action::MecanumSpin_Result>::value> {};

template<>
struct is_message<behavior_tree_msgs::action::MecanumSpin_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<behavior_tree_msgs::action::MecanumSpin_GetResult>()
{
  return "behavior_tree_msgs::action::MecanumSpin_GetResult";
}

template<>
inline const char * name<behavior_tree_msgs::action::MecanumSpin_GetResult>()
{
  return "behavior_tree_msgs/action/MecanumSpin_GetResult";
}

template<>
struct has_fixed_size<behavior_tree_msgs::action::MecanumSpin_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<behavior_tree_msgs::action::MecanumSpin_GetResult_Request>::value &&
    has_fixed_size<behavior_tree_msgs::action::MecanumSpin_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<behavior_tree_msgs::action::MecanumSpin_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<behavior_tree_msgs::action::MecanumSpin_GetResult_Request>::value &&
    has_bounded_size<behavior_tree_msgs::action::MecanumSpin_GetResult_Response>::value
  >
{
};

template<>
struct is_service<behavior_tree_msgs::action::MecanumSpin_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<behavior_tree_msgs::action::MecanumSpin_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<behavior_tree_msgs::action::MecanumSpin_GetResult_Response>
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
// #include "behavior_tree_msgs/action/detail/mecanum_spin__traits.hpp"

namespace behavior_tree_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MecanumSpin_FeedbackMessage & msg,
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
  const MecanumSpin_FeedbackMessage & msg,
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

inline std::string to_yaml(const MecanumSpin_FeedbackMessage & msg, bool use_flow_style = false)
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

}  // namespace behavior_tree_msgs

namespace rosidl_generator_traits
{

[[deprecated("use behavior_tree_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const behavior_tree_msgs::action::MecanumSpin_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  behavior_tree_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use behavior_tree_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const behavior_tree_msgs::action::MecanumSpin_FeedbackMessage & msg)
{
  return behavior_tree_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<behavior_tree_msgs::action::MecanumSpin_FeedbackMessage>()
{
  return "behavior_tree_msgs::action::MecanumSpin_FeedbackMessage";
}

template<>
inline const char * name<behavior_tree_msgs::action::MecanumSpin_FeedbackMessage>()
{
  return "behavior_tree_msgs/action/MecanumSpin_FeedbackMessage";
}

template<>
struct has_fixed_size<behavior_tree_msgs::action::MecanumSpin_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<behavior_tree_msgs::action::MecanumSpin_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<behavior_tree_msgs::action::MecanumSpin_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<behavior_tree_msgs::action::MecanumSpin_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<behavior_tree_msgs::action::MecanumSpin_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<behavior_tree_msgs::action::MecanumSpin>
  : std::true_type
{
};

template<>
struct is_action_goal<behavior_tree_msgs::action::MecanumSpin_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<behavior_tree_msgs::action::MecanumSpin_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<behavior_tree_msgs::action::MecanumSpin_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // BEHAVIOR_TREE_MSGS__ACTION__DETAIL__MECANUM_SPIN__TRAITS_HPP_
