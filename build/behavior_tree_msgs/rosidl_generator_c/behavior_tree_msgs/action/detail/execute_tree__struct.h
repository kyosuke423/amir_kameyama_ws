// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:action/ExecuteTree.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__ACTION__DETAIL__EXECUTE_TREE__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__ACTION__DETAIL__EXECUTE_TREE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bt'
// Member 'id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteTree in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__ExecuteTree_Goal
{
  rosidl_runtime_c__String bt;
  rosidl_runtime_c__String id;
} behavior_tree_msgs__action__ExecuteTree_Goal;

// Struct for a sequence of behavior_tree_msgs__action__ExecuteTree_Goal.
typedef struct behavior_tree_msgs__action__ExecuteTree_Goal__Sequence
{
  behavior_tree_msgs__action__ExecuteTree_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__ExecuteTree_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'bt_status'
#include "behavior_tree_msgs/msg/detail/bt_status__struct.h"
// Member 'error_string'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteTree in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__ExecuteTree_Result
{
  behavior_tree_msgs__msg__BTStatus bt_status;
  rosidl_runtime_c__String error_string;
} behavior_tree_msgs__action__ExecuteTree_Result;

// Struct for a sequence of behavior_tree_msgs__action__ExecuteTree_Result.
typedef struct behavior_tree_msgs__action__ExecuteTree_Result__Sequence
{
  behavior_tree_msgs__action__ExecuteTree_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__ExecuteTree_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'bt_status'
// already included above
// #include "behavior_tree_msgs/msg/detail/bt_status__struct.h"

/// Struct defined in action/ExecuteTree in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__ExecuteTree_Feedback
{
  behavior_tree_msgs__msg__BTStatus bt_status;
} behavior_tree_msgs__action__ExecuteTree_Feedback;

// Struct for a sequence of behavior_tree_msgs__action__ExecuteTree_Feedback.
typedef struct behavior_tree_msgs__action__ExecuteTree_Feedback__Sequence
{
  behavior_tree_msgs__action__ExecuteTree_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__ExecuteTree_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "behavior_tree_msgs/action/detail/execute_tree__struct.h"

/// Struct defined in action/ExecuteTree in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__ExecuteTree_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__ExecuteTree_Goal goal;
} behavior_tree_msgs__action__ExecuteTree_SendGoal_Request;

// Struct for a sequence of behavior_tree_msgs__action__ExecuteTree_SendGoal_Request.
typedef struct behavior_tree_msgs__action__ExecuteTree_SendGoal_Request__Sequence
{
  behavior_tree_msgs__action__ExecuteTree_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__ExecuteTree_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ExecuteTree in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__ExecuteTree_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} behavior_tree_msgs__action__ExecuteTree_SendGoal_Response;

// Struct for a sequence of behavior_tree_msgs__action__ExecuteTree_SendGoal_Response.
typedef struct behavior_tree_msgs__action__ExecuteTree_SendGoal_Response__Sequence
{
  behavior_tree_msgs__action__ExecuteTree_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__ExecuteTree_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ExecuteTree in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__ExecuteTree_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} behavior_tree_msgs__action__ExecuteTree_GetResult_Request;

// Struct for a sequence of behavior_tree_msgs__action__ExecuteTree_GetResult_Request.
typedef struct behavior_tree_msgs__action__ExecuteTree_GetResult_Request__Sequence
{
  behavior_tree_msgs__action__ExecuteTree_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__ExecuteTree_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_tree_msgs/action/detail/execute_tree__struct.h"

/// Struct defined in action/ExecuteTree in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__ExecuteTree_GetResult_Response
{
  int8_t status;
  behavior_tree_msgs__action__ExecuteTree_Result result;
} behavior_tree_msgs__action__ExecuteTree_GetResult_Response;

// Struct for a sequence of behavior_tree_msgs__action__ExecuteTree_GetResult_Response.
typedef struct behavior_tree_msgs__action__ExecuteTree_GetResult_Response__Sequence
{
  behavior_tree_msgs__action__ExecuteTree_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__ExecuteTree_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "behavior_tree_msgs/action/detail/execute_tree__struct.h"

/// Struct defined in action/ExecuteTree in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__ExecuteTree_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__ExecuteTree_Feedback feedback;
} behavior_tree_msgs__action__ExecuteTree_FeedbackMessage;

// Struct for a sequence of behavior_tree_msgs__action__ExecuteTree_FeedbackMessage.
typedef struct behavior_tree_msgs__action__ExecuteTree_FeedbackMessage__Sequence
{
  behavior_tree_msgs__action__ExecuteTree_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__ExecuteTree_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__ACTION__DETAIL__EXECUTE_TREE__STRUCT_H_
