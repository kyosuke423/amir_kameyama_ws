// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:action/MecanumSpin.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__ACTION__DETAIL__MECANUM_SPIN__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__ACTION__DETAIL__MECANUM_SPIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MecanumSpin in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__MecanumSpin_Goal
{
  /// 視点を変える回数
  int32_t time;
  /// D-optimalityの値
  double dop;
} behavior_tree_msgs__action__MecanumSpin_Goal;

// Struct for a sequence of behavior_tree_msgs__action__MecanumSpin_Goal.
typedef struct behavior_tree_msgs__action__MecanumSpin_Goal__Sequence
{
  behavior_tree_msgs__action__MecanumSpin_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__MecanumSpin_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_string'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MecanumSpin in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__MecanumSpin_Result
{
  rosidl_runtime_c__String error_string;
  bool success;
} behavior_tree_msgs__action__MecanumSpin_Result;

// Struct for a sequence of behavior_tree_msgs__action__MecanumSpin_Result.
typedef struct behavior_tree_msgs__action__MecanumSpin_Result__Sequence
{
  behavior_tree_msgs__action__MecanumSpin_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__MecanumSpin_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MecanumSpin in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__MecanumSpin_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} behavior_tree_msgs__action__MecanumSpin_Feedback;

// Struct for a sequence of behavior_tree_msgs__action__MecanumSpin_Feedback.
typedef struct behavior_tree_msgs__action__MecanumSpin_Feedback__Sequence
{
  behavior_tree_msgs__action__MecanumSpin_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__MecanumSpin_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "behavior_tree_msgs/action/detail/mecanum_spin__struct.h"

/// Struct defined in action/MecanumSpin in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__MecanumSpin_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__MecanumSpin_Goal goal;
} behavior_tree_msgs__action__MecanumSpin_SendGoal_Request;

// Struct for a sequence of behavior_tree_msgs__action__MecanumSpin_SendGoal_Request.
typedef struct behavior_tree_msgs__action__MecanumSpin_SendGoal_Request__Sequence
{
  behavior_tree_msgs__action__MecanumSpin_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__MecanumSpin_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MecanumSpin in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__MecanumSpin_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} behavior_tree_msgs__action__MecanumSpin_SendGoal_Response;

// Struct for a sequence of behavior_tree_msgs__action__MecanumSpin_SendGoal_Response.
typedef struct behavior_tree_msgs__action__MecanumSpin_SendGoal_Response__Sequence
{
  behavior_tree_msgs__action__MecanumSpin_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__MecanumSpin_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MecanumSpin in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__MecanumSpin_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} behavior_tree_msgs__action__MecanumSpin_GetResult_Request;

// Struct for a sequence of behavior_tree_msgs__action__MecanumSpin_GetResult_Request.
typedef struct behavior_tree_msgs__action__MecanumSpin_GetResult_Request__Sequence
{
  behavior_tree_msgs__action__MecanumSpin_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__MecanumSpin_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_tree_msgs/action/detail/mecanum_spin__struct.h"

/// Struct defined in action/MecanumSpin in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__MecanumSpin_GetResult_Response
{
  int8_t status;
  behavior_tree_msgs__action__MecanumSpin_Result result;
} behavior_tree_msgs__action__MecanumSpin_GetResult_Response;

// Struct for a sequence of behavior_tree_msgs__action__MecanumSpin_GetResult_Response.
typedef struct behavior_tree_msgs__action__MecanumSpin_GetResult_Response__Sequence
{
  behavior_tree_msgs__action__MecanumSpin_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__MecanumSpin_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "behavior_tree_msgs/action/detail/mecanum_spin__struct.h"

/// Struct defined in action/MecanumSpin in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__MecanumSpin_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__MecanumSpin_Feedback feedback;
} behavior_tree_msgs__action__MecanumSpin_FeedbackMessage;

// Struct for a sequence of behavior_tree_msgs__action__MecanumSpin_FeedbackMessage.
typedef struct behavior_tree_msgs__action__MecanumSpin_FeedbackMessage__Sequence
{
  behavior_tree_msgs__action__MecanumSpin_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__MecanumSpin_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__ACTION__DETAIL__MECANUM_SPIN__STRUCT_H_
