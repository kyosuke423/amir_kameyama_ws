// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:action/Search.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__ACTION__DETAIL__SEARCH__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__ACTION__DETAIL__SEARCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
// Member 'id'
// Member 'label'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/Search in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__Search_Goal
{
  rosidl_runtime_c__String command;
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String label;
  geometry_msgs__msg__PoseStamped pose;
} behavior_tree_msgs__action__Search_Goal;

// Struct for a sequence of behavior_tree_msgs__action__Search_Goal.
typedef struct behavior_tree_msgs__action__Search_Goal__Sequence
{
  behavior_tree_msgs__action__Search_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__Search_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_string'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'poses'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/Search in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__Search_Result
{
  rosidl_runtime_c__String error_string;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__PoseStamped__Sequence poses;
} behavior_tree_msgs__action__Search_Result;

// Struct for a sequence of behavior_tree_msgs__action__Search_Result.
typedef struct behavior_tree_msgs__action__Search_Result__Sequence
{
  behavior_tree_msgs__action__Search_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__Search_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Search in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__Search_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} behavior_tree_msgs__action__Search_Feedback;

// Struct for a sequence of behavior_tree_msgs__action__Search_Feedback.
typedef struct behavior_tree_msgs__action__Search_Feedback__Sequence
{
  behavior_tree_msgs__action__Search_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__Search_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "behavior_tree_msgs/action/detail/search__struct.h"

/// Struct defined in action/Search in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__Search_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__Search_Goal goal;
} behavior_tree_msgs__action__Search_SendGoal_Request;

// Struct for a sequence of behavior_tree_msgs__action__Search_SendGoal_Request.
typedef struct behavior_tree_msgs__action__Search_SendGoal_Request__Sequence
{
  behavior_tree_msgs__action__Search_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__Search_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Search in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__Search_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} behavior_tree_msgs__action__Search_SendGoal_Response;

// Struct for a sequence of behavior_tree_msgs__action__Search_SendGoal_Response.
typedef struct behavior_tree_msgs__action__Search_SendGoal_Response__Sequence
{
  behavior_tree_msgs__action__Search_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__Search_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Search in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__Search_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} behavior_tree_msgs__action__Search_GetResult_Request;

// Struct for a sequence of behavior_tree_msgs__action__Search_GetResult_Request.
typedef struct behavior_tree_msgs__action__Search_GetResult_Request__Sequence
{
  behavior_tree_msgs__action__Search_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__Search_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_tree_msgs/action/detail/search__struct.h"

/// Struct defined in action/Search in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__Search_GetResult_Response
{
  int8_t status;
  behavior_tree_msgs__action__Search_Result result;
} behavior_tree_msgs__action__Search_GetResult_Response;

// Struct for a sequence of behavior_tree_msgs__action__Search_GetResult_Response.
typedef struct behavior_tree_msgs__action__Search_GetResult_Response__Sequence
{
  behavior_tree_msgs__action__Search_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__Search_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "behavior_tree_msgs/action/detail/search__struct.h"

/// Struct defined in action/Search in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__Search_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__Search_Feedback feedback;
} behavior_tree_msgs__action__Search_FeedbackMessage;

// Struct for a sequence of behavior_tree_msgs__action__Search_FeedbackMessage.
typedef struct behavior_tree_msgs__action__Search_FeedbackMessage__Sequence
{
  behavior_tree_msgs__action__Search_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__Search_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__ACTION__DETAIL__SEARCH__STRUCT_H_
