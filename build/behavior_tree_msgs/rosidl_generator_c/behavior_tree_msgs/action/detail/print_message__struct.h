// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:action/PrintMessage.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__ACTION__DETAIL__PRINT_MESSAGE__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__ACTION__DETAIL__PRINT_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/PrintMessage in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__PrintMessage_Goal
{
  rosidl_runtime_c__String message;
  uint32_t iterations;
  uint32_t pause_ms;
} behavior_tree_msgs__action__PrintMessage_Goal;

// Struct for a sequence of behavior_tree_msgs__action__PrintMessage_Goal.
typedef struct behavior_tree_msgs__action__PrintMessage_Goal__Sequence
{
  behavior_tree_msgs__action__PrintMessage_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__PrintMessage_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
#include "std_msgs/msg/detail/empty__struct.h"

/// Struct defined in action/PrintMessage in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__PrintMessage_Result
{
  std_msgs__msg__Empty result;
} behavior_tree_msgs__action__PrintMessage_Result;

// Struct for a sequence of behavior_tree_msgs__action__PrintMessage_Result.
typedef struct behavior_tree_msgs__action__PrintMessage_Result__Sequence
{
  behavior_tree_msgs__action__PrintMessage_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__PrintMessage_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/PrintMessage in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__PrintMessage_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} behavior_tree_msgs__action__PrintMessage_Feedback;

// Struct for a sequence of behavior_tree_msgs__action__PrintMessage_Feedback.
typedef struct behavior_tree_msgs__action__PrintMessage_Feedback__Sequence
{
  behavior_tree_msgs__action__PrintMessage_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__PrintMessage_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "behavior_tree_msgs/action/detail/print_message__struct.h"

/// Struct defined in action/PrintMessage in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__PrintMessage_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__PrintMessage_Goal goal;
} behavior_tree_msgs__action__PrintMessage_SendGoal_Request;

// Struct for a sequence of behavior_tree_msgs__action__PrintMessage_SendGoal_Request.
typedef struct behavior_tree_msgs__action__PrintMessage_SendGoal_Request__Sequence
{
  behavior_tree_msgs__action__PrintMessage_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__PrintMessage_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PrintMessage in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__PrintMessage_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} behavior_tree_msgs__action__PrintMessage_SendGoal_Response;

// Struct for a sequence of behavior_tree_msgs__action__PrintMessage_SendGoal_Response.
typedef struct behavior_tree_msgs__action__PrintMessage_SendGoal_Response__Sequence
{
  behavior_tree_msgs__action__PrintMessage_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__PrintMessage_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PrintMessage in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__PrintMessage_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} behavior_tree_msgs__action__PrintMessage_GetResult_Request;

// Struct for a sequence of behavior_tree_msgs__action__PrintMessage_GetResult_Request.
typedef struct behavior_tree_msgs__action__PrintMessage_GetResult_Request__Sequence
{
  behavior_tree_msgs__action__PrintMessage_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__PrintMessage_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_tree_msgs/action/detail/print_message__struct.h"

/// Struct defined in action/PrintMessage in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__PrintMessage_GetResult_Response
{
  int8_t status;
  behavior_tree_msgs__action__PrintMessage_Result result;
} behavior_tree_msgs__action__PrintMessage_GetResult_Response;

// Struct for a sequence of behavior_tree_msgs__action__PrintMessage_GetResult_Response.
typedef struct behavior_tree_msgs__action__PrintMessage_GetResult_Response__Sequence
{
  behavior_tree_msgs__action__PrintMessage_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__PrintMessage_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "behavior_tree_msgs/action/detail/print_message__struct.h"

/// Struct defined in action/PrintMessage in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__PrintMessage_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__PrintMessage_Feedback feedback;
} behavior_tree_msgs__action__PrintMessage_FeedbackMessage;

// Struct for a sequence of behavior_tree_msgs__action__PrintMessage_FeedbackMessage.
typedef struct behavior_tree_msgs__action__PrintMessage_FeedbackMessage__Sequence
{
  behavior_tree_msgs__action__PrintMessage_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__PrintMessage_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__ACTION__DETAIL__PRINT_MESSAGE__STRUCT_H_
