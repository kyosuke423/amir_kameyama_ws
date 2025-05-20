// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from failure_detection_msgs:action/Analysys.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__ACTION__DETAIL__ANALYSYS__TRAITS_HPP_
#define FAILURE_DETECTION_MSGS__ACTION__DETAIL__ANALYSYS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "failure_detection_msgs/action/detail/analysys__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace failure_detection_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Analysys_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_name
  {
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << ", ";
  }

  // member: node_id
  {
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Analysys_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << "\n";
  }

  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Analysys_Goal & msg, bool use_flow_style = false)
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

}  // namespace failure_detection_msgs

namespace rosidl_generator_traits
{

[[deprecated("use failure_detection_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const failure_detection_msgs::action::Analysys_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  failure_detection_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use failure_detection_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const failure_detection_msgs::action::Analysys_Goal & msg)
{
  return failure_detection_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<failure_detection_msgs::action::Analysys_Goal>()
{
  return "failure_detection_msgs::action::Analysys_Goal";
}

template<>
inline const char * name<failure_detection_msgs::action::Analysys_Goal>()
{
  return "failure_detection_msgs/action/Analysys_Goal";
}

template<>
struct has_fixed_size<failure_detection_msgs::action::Analysys_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<failure_detection_msgs::action::Analysys_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<failure_detection_msgs::action::Analysys_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace failure_detection_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Analysys_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success_probability
  {
    out << "success_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.success_probability, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Analysys_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success_probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.success_probability, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Analysys_Result & msg, bool use_flow_style = false)
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

}  // namespace failure_detection_msgs

namespace rosidl_generator_traits
{

[[deprecated("use failure_detection_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const failure_detection_msgs::action::Analysys_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  failure_detection_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use failure_detection_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const failure_detection_msgs::action::Analysys_Result & msg)
{
  return failure_detection_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<failure_detection_msgs::action::Analysys_Result>()
{
  return "failure_detection_msgs::action::Analysys_Result";
}

template<>
inline const char * name<failure_detection_msgs::action::Analysys_Result>()
{
  return "failure_detection_msgs/action/Analysys_Result";
}

template<>
struct has_fixed_size<failure_detection_msgs::action::Analysys_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<failure_detection_msgs::action::Analysys_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<failure_detection_msgs::action::Analysys_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace failure_detection_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Analysys_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: success_probability
  {
    out << "success_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.success_probability, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Analysys_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success_probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.success_probability, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Analysys_Feedback & msg, bool use_flow_style = false)
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

}  // namespace failure_detection_msgs

namespace rosidl_generator_traits
{

[[deprecated("use failure_detection_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const failure_detection_msgs::action::Analysys_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  failure_detection_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use failure_detection_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const failure_detection_msgs::action::Analysys_Feedback & msg)
{
  return failure_detection_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<failure_detection_msgs::action::Analysys_Feedback>()
{
  return "failure_detection_msgs::action::Analysys_Feedback";
}

template<>
inline const char * name<failure_detection_msgs::action::Analysys_Feedback>()
{
  return "failure_detection_msgs/action/Analysys_Feedback";
}

template<>
struct has_fixed_size<failure_detection_msgs::action::Analysys_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<failure_detection_msgs::action::Analysys_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<failure_detection_msgs::action::Analysys_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "failure_detection_msgs/action/detail/analysys__traits.hpp"

namespace failure_detection_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Analysys_SendGoal_Request & msg,
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
  const Analysys_SendGoal_Request & msg,
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

inline std::string to_yaml(const Analysys_SendGoal_Request & msg, bool use_flow_style = false)
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

}  // namespace failure_detection_msgs

namespace rosidl_generator_traits
{

[[deprecated("use failure_detection_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const failure_detection_msgs::action::Analysys_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  failure_detection_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use failure_detection_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const failure_detection_msgs::action::Analysys_SendGoal_Request & msg)
{
  return failure_detection_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<failure_detection_msgs::action::Analysys_SendGoal_Request>()
{
  return "failure_detection_msgs::action::Analysys_SendGoal_Request";
}

template<>
inline const char * name<failure_detection_msgs::action::Analysys_SendGoal_Request>()
{
  return "failure_detection_msgs/action/Analysys_SendGoal_Request";
}

template<>
struct has_fixed_size<failure_detection_msgs::action::Analysys_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<failure_detection_msgs::action::Analysys_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<failure_detection_msgs::action::Analysys_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<failure_detection_msgs::action::Analysys_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<failure_detection_msgs::action::Analysys_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace failure_detection_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Analysys_SendGoal_Response & msg,
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
  const Analysys_SendGoal_Response & msg,
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

inline std::string to_yaml(const Analysys_SendGoal_Response & msg, bool use_flow_style = false)
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

}  // namespace failure_detection_msgs

namespace rosidl_generator_traits
{

[[deprecated("use failure_detection_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const failure_detection_msgs::action::Analysys_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  failure_detection_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use failure_detection_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const failure_detection_msgs::action::Analysys_SendGoal_Response & msg)
{
  return failure_detection_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<failure_detection_msgs::action::Analysys_SendGoal_Response>()
{
  return "failure_detection_msgs::action::Analysys_SendGoal_Response";
}

template<>
inline const char * name<failure_detection_msgs::action::Analysys_SendGoal_Response>()
{
  return "failure_detection_msgs/action/Analysys_SendGoal_Response";
}

template<>
struct has_fixed_size<failure_detection_msgs::action::Analysys_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<failure_detection_msgs::action::Analysys_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<failure_detection_msgs::action::Analysys_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<failure_detection_msgs::action::Analysys_SendGoal>()
{
  return "failure_detection_msgs::action::Analysys_SendGoal";
}

template<>
inline const char * name<failure_detection_msgs::action::Analysys_SendGoal>()
{
  return "failure_detection_msgs/action/Analysys_SendGoal";
}

template<>
struct has_fixed_size<failure_detection_msgs::action::Analysys_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<failure_detection_msgs::action::Analysys_SendGoal_Request>::value &&
    has_fixed_size<failure_detection_msgs::action::Analysys_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<failure_detection_msgs::action::Analysys_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<failure_detection_msgs::action::Analysys_SendGoal_Request>::value &&
    has_bounded_size<failure_detection_msgs::action::Analysys_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<failure_detection_msgs::action::Analysys_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<failure_detection_msgs::action::Analysys_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<failure_detection_msgs::action::Analysys_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace failure_detection_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Analysys_GetResult_Request & msg,
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
  const Analysys_GetResult_Request & msg,
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

inline std::string to_yaml(const Analysys_GetResult_Request & msg, bool use_flow_style = false)
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

}  // namespace failure_detection_msgs

namespace rosidl_generator_traits
{

[[deprecated("use failure_detection_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const failure_detection_msgs::action::Analysys_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  failure_detection_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use failure_detection_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const failure_detection_msgs::action::Analysys_GetResult_Request & msg)
{
  return failure_detection_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<failure_detection_msgs::action::Analysys_GetResult_Request>()
{
  return "failure_detection_msgs::action::Analysys_GetResult_Request";
}

template<>
inline const char * name<failure_detection_msgs::action::Analysys_GetResult_Request>()
{
  return "failure_detection_msgs/action/Analysys_GetResult_Request";
}

template<>
struct has_fixed_size<failure_detection_msgs::action::Analysys_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<failure_detection_msgs::action::Analysys_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<failure_detection_msgs::action::Analysys_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "failure_detection_msgs/action/detail/analysys__traits.hpp"

namespace failure_detection_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Analysys_GetResult_Response & msg,
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
  const Analysys_GetResult_Response & msg,
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

inline std::string to_yaml(const Analysys_GetResult_Response & msg, bool use_flow_style = false)
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

}  // namespace failure_detection_msgs

namespace rosidl_generator_traits
{

[[deprecated("use failure_detection_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const failure_detection_msgs::action::Analysys_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  failure_detection_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use failure_detection_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const failure_detection_msgs::action::Analysys_GetResult_Response & msg)
{
  return failure_detection_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<failure_detection_msgs::action::Analysys_GetResult_Response>()
{
  return "failure_detection_msgs::action::Analysys_GetResult_Response";
}

template<>
inline const char * name<failure_detection_msgs::action::Analysys_GetResult_Response>()
{
  return "failure_detection_msgs/action/Analysys_GetResult_Response";
}

template<>
struct has_fixed_size<failure_detection_msgs::action::Analysys_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<failure_detection_msgs::action::Analysys_Result>::value> {};

template<>
struct has_bounded_size<failure_detection_msgs::action::Analysys_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<failure_detection_msgs::action::Analysys_Result>::value> {};

template<>
struct is_message<failure_detection_msgs::action::Analysys_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<failure_detection_msgs::action::Analysys_GetResult>()
{
  return "failure_detection_msgs::action::Analysys_GetResult";
}

template<>
inline const char * name<failure_detection_msgs::action::Analysys_GetResult>()
{
  return "failure_detection_msgs/action/Analysys_GetResult";
}

template<>
struct has_fixed_size<failure_detection_msgs::action::Analysys_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<failure_detection_msgs::action::Analysys_GetResult_Request>::value &&
    has_fixed_size<failure_detection_msgs::action::Analysys_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<failure_detection_msgs::action::Analysys_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<failure_detection_msgs::action::Analysys_GetResult_Request>::value &&
    has_bounded_size<failure_detection_msgs::action::Analysys_GetResult_Response>::value
  >
{
};

template<>
struct is_service<failure_detection_msgs::action::Analysys_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<failure_detection_msgs::action::Analysys_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<failure_detection_msgs::action::Analysys_GetResult_Response>
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
// #include "failure_detection_msgs/action/detail/analysys__traits.hpp"

namespace failure_detection_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Analysys_FeedbackMessage & msg,
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
  const Analysys_FeedbackMessage & msg,
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

inline std::string to_yaml(const Analysys_FeedbackMessage & msg, bool use_flow_style = false)
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

}  // namespace failure_detection_msgs

namespace rosidl_generator_traits
{

[[deprecated("use failure_detection_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const failure_detection_msgs::action::Analysys_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  failure_detection_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use failure_detection_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const failure_detection_msgs::action::Analysys_FeedbackMessage & msg)
{
  return failure_detection_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<failure_detection_msgs::action::Analysys_FeedbackMessage>()
{
  return "failure_detection_msgs::action::Analysys_FeedbackMessage";
}

template<>
inline const char * name<failure_detection_msgs::action::Analysys_FeedbackMessage>()
{
  return "failure_detection_msgs/action/Analysys_FeedbackMessage";
}

template<>
struct has_fixed_size<failure_detection_msgs::action::Analysys_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<failure_detection_msgs::action::Analysys_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<failure_detection_msgs::action::Analysys_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<failure_detection_msgs::action::Analysys_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<failure_detection_msgs::action::Analysys_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<failure_detection_msgs::action::Analysys>
  : std::true_type
{
};

template<>
struct is_action_goal<failure_detection_msgs::action::Analysys_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<failure_detection_msgs::action::Analysys_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<failure_detection_msgs::action::Analysys_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // FAILURE_DETECTION_MSGS__ACTION__DETAIL__ANALYSYS__TRAITS_HPP_
