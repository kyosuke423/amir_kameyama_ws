// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:action/CameraSearch.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__ACTION__DETAIL__CAMERA_SEARCH__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__ACTION__DETAIL__CAMERA_SEARCH__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"
// Member 'search_point'
#include "geometry_msgs/msg/detail/point_stamped__struct.h"

/// Struct defined in action/CameraSearch in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__CameraSearch_Goal
{
  rosidl_runtime_c__String command;
  rosidl_runtime_c__String id;
  geometry_msgs__msg__PointStamped search_point;
  double radius;
} behavior_tree_msgs__action__CameraSearch_Goal;

// Struct for a sequence of behavior_tree_msgs__action__CameraSearch_Goal.
typedef struct behavior_tree_msgs__action__CameraSearch_Goal__Sequence
{
  behavior_tree_msgs__action__CameraSearch_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__CameraSearch_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_string'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/CameraSearch in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__CameraSearch_Result
{
  rosidl_runtime_c__String error_string;
  geometry_msgs__msg__PoseStamped__Sequence poses;
} behavior_tree_msgs__action__CameraSearch_Result;

// Struct for a sequence of behavior_tree_msgs__action__CameraSearch_Result.
typedef struct behavior_tree_msgs__action__CameraSearch_Result__Sequence
{
  behavior_tree_msgs__action__CameraSearch_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__CameraSearch_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/CameraSearch in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__CameraSearch_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} behavior_tree_msgs__action__CameraSearch_Feedback;

// Struct for a sequence of behavior_tree_msgs__action__CameraSearch_Feedback.
typedef struct behavior_tree_msgs__action__CameraSearch_Feedback__Sequence
{
  behavior_tree_msgs__action__CameraSearch_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__CameraSearch_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "behavior_tree_msgs/action/detail/camera_search__struct.h"

/// Struct defined in action/CameraSearch in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__CameraSearch_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__CameraSearch_Goal goal;
} behavior_tree_msgs__action__CameraSearch_SendGoal_Request;

// Struct for a sequence of behavior_tree_msgs__action__CameraSearch_SendGoal_Request.
typedef struct behavior_tree_msgs__action__CameraSearch_SendGoal_Request__Sequence
{
  behavior_tree_msgs__action__CameraSearch_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__CameraSearch_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/CameraSearch in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__CameraSearch_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} behavior_tree_msgs__action__CameraSearch_SendGoal_Response;

// Struct for a sequence of behavior_tree_msgs__action__CameraSearch_SendGoal_Response.
typedef struct behavior_tree_msgs__action__CameraSearch_SendGoal_Response__Sequence
{
  behavior_tree_msgs__action__CameraSearch_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__CameraSearch_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/CameraSearch in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__CameraSearch_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} behavior_tree_msgs__action__CameraSearch_GetResult_Request;

// Struct for a sequence of behavior_tree_msgs__action__CameraSearch_GetResult_Request.
typedef struct behavior_tree_msgs__action__CameraSearch_GetResult_Request__Sequence
{
  behavior_tree_msgs__action__CameraSearch_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__CameraSearch_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_tree_msgs/action/detail/camera_search__struct.h"

/// Struct defined in action/CameraSearch in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__CameraSearch_GetResult_Response
{
  int8_t status;
  behavior_tree_msgs__action__CameraSearch_Result result;
} behavior_tree_msgs__action__CameraSearch_GetResult_Response;

// Struct for a sequence of behavior_tree_msgs__action__CameraSearch_GetResult_Response.
typedef struct behavior_tree_msgs__action__CameraSearch_GetResult_Response__Sequence
{
  behavior_tree_msgs__action__CameraSearch_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__CameraSearch_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "behavior_tree_msgs/action/detail/camera_search__struct.h"

/// Struct defined in action/CameraSearch in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__CameraSearch_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__CameraSearch_Feedback feedback;
} behavior_tree_msgs__action__CameraSearch_FeedbackMessage;

// Struct for a sequence of behavior_tree_msgs__action__CameraSearch_FeedbackMessage.
typedef struct behavior_tree_msgs__action__CameraSearch_FeedbackMessage__Sequence
{
  behavior_tree_msgs__action__CameraSearch_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__CameraSearch_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__ACTION__DETAIL__CAMERA_SEARCH__STRUCT_H_
