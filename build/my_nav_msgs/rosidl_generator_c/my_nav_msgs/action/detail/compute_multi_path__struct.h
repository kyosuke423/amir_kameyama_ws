// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_nav_msgs:action/ComputeMultiPath.idl
// generated code does not contain a copyright notice

#ifndef MY_NAV_MSGS__ACTION__DETAIL__COMPUTE_MULTI_PATH__STRUCT_H_
#define MY_NAV_MSGS__ACTION__DETAIL__COMPUTE_MULTI_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal'
// Member 'start'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'planner_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ComputeMultiPath in the package my_nav_msgs.
typedef struct my_nav_msgs__action__ComputeMultiPath_Goal
{
  geometry_msgs__msg__PoseStamped goal;
  geometry_msgs__msg__PoseStamped start;
  rosidl_runtime_c__String planner_id;
  /// If true, use current robot pose as path start, if false, use start above instead
  bool use_start;
} my_nav_msgs__action__ComputeMultiPath_Goal;

// Struct for a sequence of my_nav_msgs__action__ComputeMultiPath_Goal.
typedef struct my_nav_msgs__action__ComputeMultiPath_Goal__Sequence
{
  my_nav_msgs__action__ComputeMultiPath_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_nav_msgs__action__ComputeMultiPath_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'multi_path'
#include "my_nav_msgs/msg/detail/path_with_condition__struct.h"
// Member 'planning_time'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/ComputeMultiPath in the package my_nav_msgs.
typedef struct my_nav_msgs__action__ComputeMultiPath_Result
{
  my_nav_msgs__msg__PathWithCondition__Sequence multi_path;
  builtin_interfaces__msg__Duration planning_time;
} my_nav_msgs__action__ComputeMultiPath_Result;

// Struct for a sequence of my_nav_msgs__action__ComputeMultiPath_Result.
typedef struct my_nav_msgs__action__ComputeMultiPath_Result__Sequence
{
  my_nav_msgs__action__ComputeMultiPath_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_nav_msgs__action__ComputeMultiPath_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ComputeMultiPath in the package my_nav_msgs.
typedef struct my_nav_msgs__action__ComputeMultiPath_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} my_nav_msgs__action__ComputeMultiPath_Feedback;

// Struct for a sequence of my_nav_msgs__action__ComputeMultiPath_Feedback.
typedef struct my_nav_msgs__action__ComputeMultiPath_Feedback__Sequence
{
  my_nav_msgs__action__ComputeMultiPath_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_nav_msgs__action__ComputeMultiPath_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "my_nav_msgs/action/detail/compute_multi_path__struct.h"

/// Struct defined in action/ComputeMultiPath in the package my_nav_msgs.
typedef struct my_nav_msgs__action__ComputeMultiPath_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_nav_msgs__action__ComputeMultiPath_Goal goal;
} my_nav_msgs__action__ComputeMultiPath_SendGoal_Request;

// Struct for a sequence of my_nav_msgs__action__ComputeMultiPath_SendGoal_Request.
typedef struct my_nav_msgs__action__ComputeMultiPath_SendGoal_Request__Sequence
{
  my_nav_msgs__action__ComputeMultiPath_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_nav_msgs__action__ComputeMultiPath_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ComputeMultiPath in the package my_nav_msgs.
typedef struct my_nav_msgs__action__ComputeMultiPath_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} my_nav_msgs__action__ComputeMultiPath_SendGoal_Response;

// Struct for a sequence of my_nav_msgs__action__ComputeMultiPath_SendGoal_Response.
typedef struct my_nav_msgs__action__ComputeMultiPath_SendGoal_Response__Sequence
{
  my_nav_msgs__action__ComputeMultiPath_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_nav_msgs__action__ComputeMultiPath_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ComputeMultiPath in the package my_nav_msgs.
typedef struct my_nav_msgs__action__ComputeMultiPath_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} my_nav_msgs__action__ComputeMultiPath_GetResult_Request;

// Struct for a sequence of my_nav_msgs__action__ComputeMultiPath_GetResult_Request.
typedef struct my_nav_msgs__action__ComputeMultiPath_GetResult_Request__Sequence
{
  my_nav_msgs__action__ComputeMultiPath_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_nav_msgs__action__ComputeMultiPath_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "my_nav_msgs/action/detail/compute_multi_path__struct.h"

/// Struct defined in action/ComputeMultiPath in the package my_nav_msgs.
typedef struct my_nav_msgs__action__ComputeMultiPath_GetResult_Response
{
  int8_t status;
  my_nav_msgs__action__ComputeMultiPath_Result result;
} my_nav_msgs__action__ComputeMultiPath_GetResult_Response;

// Struct for a sequence of my_nav_msgs__action__ComputeMultiPath_GetResult_Response.
typedef struct my_nav_msgs__action__ComputeMultiPath_GetResult_Response__Sequence
{
  my_nav_msgs__action__ComputeMultiPath_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_nav_msgs__action__ComputeMultiPath_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "my_nav_msgs/action/detail/compute_multi_path__struct.h"

/// Struct defined in action/ComputeMultiPath in the package my_nav_msgs.
typedef struct my_nav_msgs__action__ComputeMultiPath_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_nav_msgs__action__ComputeMultiPath_Feedback feedback;
} my_nav_msgs__action__ComputeMultiPath_FeedbackMessage;

// Struct for a sequence of my_nav_msgs__action__ComputeMultiPath_FeedbackMessage.
typedef struct my_nav_msgs__action__ComputeMultiPath_FeedbackMessage__Sequence
{
  my_nav_msgs__action__ComputeMultiPath_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_nav_msgs__action__ComputeMultiPath_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_NAV_MSGS__ACTION__DETAIL__COMPUTE_MULTI_PATH__STRUCT_H_
