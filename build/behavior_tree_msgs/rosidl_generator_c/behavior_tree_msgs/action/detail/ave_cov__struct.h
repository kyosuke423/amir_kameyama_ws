// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:action/AveCov.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__ACTION__DETAIL__AVE_COV__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__ACTION__DETAIL__AVE_COV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input_csv_path'
// Member 'output_csv_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/AveCov in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__AveCov_Goal
{
  rosidl_runtime_c__String input_csv_path;
  rosidl_runtime_c__String output_csv_path;
} behavior_tree_msgs__action__AveCov_Goal;

// Struct for a sequence of behavior_tree_msgs__action__AveCov_Goal.
typedef struct behavior_tree_msgs__action__AveCov_Goal__Sequence
{
  behavior_tree_msgs__action__AveCov_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__AveCov_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'output_backup_path'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/AveCov in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__AveCov_Result
{
  bool success;
  rosidl_runtime_c__String output_backup_path;
} behavior_tree_msgs__action__AveCov_Result;

// Struct for a sequence of behavior_tree_msgs__action__AveCov_Result.
typedef struct behavior_tree_msgs__action__AveCov_Result__Sequence
{
  behavior_tree_msgs__action__AveCov_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__AveCov_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_step'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/AveCov in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__AveCov_Feedback
{
  rosidl_runtime_c__String current_step;
} behavior_tree_msgs__action__AveCov_Feedback;

// Struct for a sequence of behavior_tree_msgs__action__AveCov_Feedback.
typedef struct behavior_tree_msgs__action__AveCov_Feedback__Sequence
{
  behavior_tree_msgs__action__AveCov_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__AveCov_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "behavior_tree_msgs/action/detail/ave_cov__struct.h"

/// Struct defined in action/AveCov in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__AveCov_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__AveCov_Goal goal;
} behavior_tree_msgs__action__AveCov_SendGoal_Request;

// Struct for a sequence of behavior_tree_msgs__action__AveCov_SendGoal_Request.
typedef struct behavior_tree_msgs__action__AveCov_SendGoal_Request__Sequence
{
  behavior_tree_msgs__action__AveCov_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__AveCov_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AveCov in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__AveCov_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} behavior_tree_msgs__action__AveCov_SendGoal_Response;

// Struct for a sequence of behavior_tree_msgs__action__AveCov_SendGoal_Response.
typedef struct behavior_tree_msgs__action__AveCov_SendGoal_Response__Sequence
{
  behavior_tree_msgs__action__AveCov_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__AveCov_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AveCov in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__AveCov_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} behavior_tree_msgs__action__AveCov_GetResult_Request;

// Struct for a sequence of behavior_tree_msgs__action__AveCov_GetResult_Request.
typedef struct behavior_tree_msgs__action__AveCov_GetResult_Request__Sequence
{
  behavior_tree_msgs__action__AveCov_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__AveCov_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_tree_msgs/action/detail/ave_cov__struct.h"

/// Struct defined in action/AveCov in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__AveCov_GetResult_Response
{
  int8_t status;
  behavior_tree_msgs__action__AveCov_Result result;
} behavior_tree_msgs__action__AveCov_GetResult_Response;

// Struct for a sequence of behavior_tree_msgs__action__AveCov_GetResult_Response.
typedef struct behavior_tree_msgs__action__AveCov_GetResult_Response__Sequence
{
  behavior_tree_msgs__action__AveCov_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__AveCov_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "behavior_tree_msgs/action/detail/ave_cov__struct.h"

/// Struct defined in action/AveCov in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__AveCov_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__AveCov_Feedback feedback;
} behavior_tree_msgs__action__AveCov_FeedbackMessage;

// Struct for a sequence of behavior_tree_msgs__action__AveCov_FeedbackMessage.
typedef struct behavior_tree_msgs__action__AveCov_FeedbackMessage__Sequence
{
  behavior_tree_msgs__action__AveCov_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__AveCov_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__ACTION__DETAIL__AVE_COV__STRUCT_H_
