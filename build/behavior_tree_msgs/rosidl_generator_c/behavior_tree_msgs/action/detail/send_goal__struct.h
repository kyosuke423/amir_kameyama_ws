// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:action/SendGoal.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__ACTION__DETAIL__SEND_GOAL__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__ACTION__DETAIL__SEND_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_states'
#include "rosidl_runtime_c/string.h"
// Member 'bb_message'
#include "behavior_tree_msgs/msg/detail/bb_message__struct.h"

/// Struct defined in action/SendGoal in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__SendGoal_Goal
{
  rosidl_runtime_c__String__Sequence goal_states;
  behavior_tree_msgs__msg__BBMessage bb_message;
} behavior_tree_msgs__action__SendGoal_Goal;

// Struct for a sequence of behavior_tree_msgs__action__SendGoal_Goal.
typedef struct behavior_tree_msgs__action__SendGoal_Goal__Sequence
{
  behavior_tree_msgs__action__SendGoal_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__SendGoal_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_string'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/SendGoal in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__SendGoal_Result
{
  rosidl_runtime_c__String error_string;
} behavior_tree_msgs__action__SendGoal_Result;

// Struct for a sequence of behavior_tree_msgs__action__SendGoal_Result.
typedef struct behavior_tree_msgs__action__SendGoal_Result__Sequence
{
  behavior_tree_msgs__action__SendGoal_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__SendGoal_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/SendGoal in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__SendGoal_Feedback
{
  double progress_rate;
  double success_prospect;
} behavior_tree_msgs__action__SendGoal_Feedback;

// Struct for a sequence of behavior_tree_msgs__action__SendGoal_Feedback.
typedef struct behavior_tree_msgs__action__SendGoal_Feedback__Sequence
{
  behavior_tree_msgs__action__SendGoal_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__SendGoal_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "behavior_tree_msgs/action/detail/send_goal__struct.h"

/// Struct defined in action/SendGoal in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__SendGoal_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__SendGoal_Goal goal;
} behavior_tree_msgs__action__SendGoal_SendGoal_Request;

// Struct for a sequence of behavior_tree_msgs__action__SendGoal_SendGoal_Request.
typedef struct behavior_tree_msgs__action__SendGoal_SendGoal_Request__Sequence
{
  behavior_tree_msgs__action__SendGoal_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__SendGoal_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SendGoal in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__SendGoal_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} behavior_tree_msgs__action__SendGoal_SendGoal_Response;

// Struct for a sequence of behavior_tree_msgs__action__SendGoal_SendGoal_Response.
typedef struct behavior_tree_msgs__action__SendGoal_SendGoal_Response__Sequence
{
  behavior_tree_msgs__action__SendGoal_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__SendGoal_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SendGoal in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__SendGoal_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} behavior_tree_msgs__action__SendGoal_GetResult_Request;

// Struct for a sequence of behavior_tree_msgs__action__SendGoal_GetResult_Request.
typedef struct behavior_tree_msgs__action__SendGoal_GetResult_Request__Sequence
{
  behavior_tree_msgs__action__SendGoal_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__SendGoal_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_tree_msgs/action/detail/send_goal__struct.h"

/// Struct defined in action/SendGoal in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__SendGoal_GetResult_Response
{
  int8_t status;
  behavior_tree_msgs__action__SendGoal_Result result;
} behavior_tree_msgs__action__SendGoal_GetResult_Response;

// Struct for a sequence of behavior_tree_msgs__action__SendGoal_GetResult_Response.
typedef struct behavior_tree_msgs__action__SendGoal_GetResult_Response__Sequence
{
  behavior_tree_msgs__action__SendGoal_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__SendGoal_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "behavior_tree_msgs/action/detail/send_goal__struct.h"

/// Struct defined in action/SendGoal in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__SendGoal_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__SendGoal_Feedback feedback;
} behavior_tree_msgs__action__SendGoal_FeedbackMessage;

// Struct for a sequence of behavior_tree_msgs__action__SendGoal_FeedbackMessage.
typedef struct behavior_tree_msgs__action__SendGoal_FeedbackMessage__Sequence
{
  behavior_tree_msgs__action__SendGoal_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__SendGoal_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__ACTION__DETAIL__SEND_GOAL__STRUCT_H_
