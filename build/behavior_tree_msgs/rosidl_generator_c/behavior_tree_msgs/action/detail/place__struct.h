// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:action/Place.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__ACTION__DETAIL__PLACE__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__ACTION__DETAIL__PLACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Place in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__Place_Goal
{
  double x;
  double y;
  double z;
} behavior_tree_msgs__action__Place_Goal;

// Struct for a sequence of behavior_tree_msgs__action__Place_Goal.
typedef struct behavior_tree_msgs__action__Place_Goal__Sequence
{
  behavior_tree_msgs__action__Place_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__Place_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_string'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Place in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__Place_Result
{
  rosidl_runtime_c__String error_string;
} behavior_tree_msgs__action__Place_Result;

// Struct for a sequence of behavior_tree_msgs__action__Place_Result.
typedef struct behavior_tree_msgs__action__Place_Result__Sequence
{
  behavior_tree_msgs__action__Place_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__Place_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Place in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__Place_Feedback
{
  rosidl_runtime_c__String feedback;
} behavior_tree_msgs__action__Place_Feedback;

// Struct for a sequence of behavior_tree_msgs__action__Place_Feedback.
typedef struct behavior_tree_msgs__action__Place_Feedback__Sequence
{
  behavior_tree_msgs__action__Place_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__Place_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "behavior_tree_msgs/action/detail/place__struct.h"

/// Struct defined in action/Place in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__Place_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__Place_Goal goal;
} behavior_tree_msgs__action__Place_SendGoal_Request;

// Struct for a sequence of behavior_tree_msgs__action__Place_SendGoal_Request.
typedef struct behavior_tree_msgs__action__Place_SendGoal_Request__Sequence
{
  behavior_tree_msgs__action__Place_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__Place_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Place in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__Place_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} behavior_tree_msgs__action__Place_SendGoal_Response;

// Struct for a sequence of behavior_tree_msgs__action__Place_SendGoal_Response.
typedef struct behavior_tree_msgs__action__Place_SendGoal_Response__Sequence
{
  behavior_tree_msgs__action__Place_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__Place_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Place in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__Place_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} behavior_tree_msgs__action__Place_GetResult_Request;

// Struct for a sequence of behavior_tree_msgs__action__Place_GetResult_Request.
typedef struct behavior_tree_msgs__action__Place_GetResult_Request__Sequence
{
  behavior_tree_msgs__action__Place_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__Place_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_tree_msgs/action/detail/place__struct.h"

/// Struct defined in action/Place in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__Place_GetResult_Response
{
  int8_t status;
  behavior_tree_msgs__action__Place_Result result;
} behavior_tree_msgs__action__Place_GetResult_Response;

// Struct for a sequence of behavior_tree_msgs__action__Place_GetResult_Response.
typedef struct behavior_tree_msgs__action__Place_GetResult_Response__Sequence
{
  behavior_tree_msgs__action__Place_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__Place_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "behavior_tree_msgs/action/detail/place__struct.h"

/// Struct defined in action/Place in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__Place_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__Place_Feedback feedback;
} behavior_tree_msgs__action__Place_FeedbackMessage;

// Struct for a sequence of behavior_tree_msgs__action__Place_FeedbackMessage.
typedef struct behavior_tree_msgs__action__Place_FeedbackMessage__Sequence
{
  behavior_tree_msgs__action__Place_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__Place_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__ACTION__DETAIL__PLACE__STRUCT_H_
