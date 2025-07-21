// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:action/DOp.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__ACTION__DETAIL__D_OP__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__ACTION__DETAIL__D_OP__STRUCT_H_

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
// Member 'output_txt_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/DOp in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__DOp_Goal
{
  rosidl_runtime_c__String input_csv_path;
  rosidl_runtime_c__String output_txt_path;
} behavior_tree_msgs__action__DOp_Goal;

// Struct for a sequence of behavior_tree_msgs__action__DOp_Goal.
typedef struct behavior_tree_msgs__action__DOp_Goal__Sequence
{
  behavior_tree_msgs__action__DOp_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__DOp_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/DOp in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__DOp_Result
{
  bool success;
  rosidl_runtime_c__String message;
} behavior_tree_msgs__action__DOp_Result;

// Struct for a sequence of behavior_tree_msgs__action__DOp_Result.
typedef struct behavior_tree_msgs__action__DOp_Result__Sequence
{
  behavior_tree_msgs__action__DOp_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__DOp_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_step'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/DOp in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__DOp_Feedback
{
  rosidl_runtime_c__String current_step;
} behavior_tree_msgs__action__DOp_Feedback;

// Struct for a sequence of behavior_tree_msgs__action__DOp_Feedback.
typedef struct behavior_tree_msgs__action__DOp_Feedback__Sequence
{
  behavior_tree_msgs__action__DOp_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__DOp_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "behavior_tree_msgs/action/detail/d_op__struct.h"

/// Struct defined in action/DOp in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__DOp_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__DOp_Goal goal;
} behavior_tree_msgs__action__DOp_SendGoal_Request;

// Struct for a sequence of behavior_tree_msgs__action__DOp_SendGoal_Request.
typedef struct behavior_tree_msgs__action__DOp_SendGoal_Request__Sequence
{
  behavior_tree_msgs__action__DOp_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__DOp_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DOp in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__DOp_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} behavior_tree_msgs__action__DOp_SendGoal_Response;

// Struct for a sequence of behavior_tree_msgs__action__DOp_SendGoal_Response.
typedef struct behavior_tree_msgs__action__DOp_SendGoal_Response__Sequence
{
  behavior_tree_msgs__action__DOp_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__DOp_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DOp in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__DOp_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} behavior_tree_msgs__action__DOp_GetResult_Request;

// Struct for a sequence of behavior_tree_msgs__action__DOp_GetResult_Request.
typedef struct behavior_tree_msgs__action__DOp_GetResult_Request__Sequence
{
  behavior_tree_msgs__action__DOp_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__DOp_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__struct.h"

/// Struct defined in action/DOp in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__DOp_GetResult_Response
{
  int8_t status;
  behavior_tree_msgs__action__DOp_Result result;
} behavior_tree_msgs__action__DOp_GetResult_Response;

// Struct for a sequence of behavior_tree_msgs__action__DOp_GetResult_Response.
typedef struct behavior_tree_msgs__action__DOp_GetResult_Response__Sequence
{
  behavior_tree_msgs__action__DOp_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__DOp_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__struct.h"

/// Struct defined in action/DOp in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__DOp_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__DOp_Feedback feedback;
} behavior_tree_msgs__action__DOp_FeedbackMessage;

// Struct for a sequence of behavior_tree_msgs__action__DOp_FeedbackMessage.
typedef struct behavior_tree_msgs__action__DOp_FeedbackMessage__Sequence
{
  behavior_tree_msgs__action__DOp_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__DOp_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__ACTION__DETAIL__D_OP__STRUCT_H_
