// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:action/CheckIK.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__ACTION__DETAIL__CHECK_IK__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__ACTION__DETAIL__CHECK_IK__STRUCT_H_

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
// Member 'obj_pose'
// Member 'location_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'grasped_object'
#include "moveit_msgs/msg/detail/attached_collision_object__struct.h"

/// Struct defined in action/CheckIK in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__CheckIK_Goal
{
  rosidl_runtime_c__String command;
  rosidl_runtime_c__String id;
  geometry_msgs__msg__PoseStamped obj_pose;
  geometry_msgs__msg__PoseStamped location_pose;
  moveit_msgs__msg__AttachedCollisionObject grasped_object;
  bool stand;
} behavior_tree_msgs__action__CheckIK_Goal;

// Struct for a sequence of behavior_tree_msgs__action__CheckIK_Goal.
typedef struct behavior_tree_msgs__action__CheckIK_Goal__Sequence
{
  behavior_tree_msgs__action__CheckIK_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__CheckIK_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_string'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/CheckIK in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__CheckIK_Result
{
  rosidl_runtime_c__String error_string;
} behavior_tree_msgs__action__CheckIK_Result;

// Struct for a sequence of behavior_tree_msgs__action__CheckIK_Result.
typedef struct behavior_tree_msgs__action__CheckIK_Result__Sequence
{
  behavior_tree_msgs__action__CheckIK_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__CheckIK_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/CheckIK in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__CheckIK_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} behavior_tree_msgs__action__CheckIK_Feedback;

// Struct for a sequence of behavior_tree_msgs__action__CheckIK_Feedback.
typedef struct behavior_tree_msgs__action__CheckIK_Feedback__Sequence
{
  behavior_tree_msgs__action__CheckIK_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__CheckIK_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "behavior_tree_msgs/action/detail/check_ik__struct.h"

/// Struct defined in action/CheckIK in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__CheckIK_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__CheckIK_Goal goal;
} behavior_tree_msgs__action__CheckIK_SendGoal_Request;

// Struct for a sequence of behavior_tree_msgs__action__CheckIK_SendGoal_Request.
typedef struct behavior_tree_msgs__action__CheckIK_SendGoal_Request__Sequence
{
  behavior_tree_msgs__action__CheckIK_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__CheckIK_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/CheckIK in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__CheckIK_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} behavior_tree_msgs__action__CheckIK_SendGoal_Response;

// Struct for a sequence of behavior_tree_msgs__action__CheckIK_SendGoal_Response.
typedef struct behavior_tree_msgs__action__CheckIK_SendGoal_Response__Sequence
{
  behavior_tree_msgs__action__CheckIK_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__CheckIK_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/CheckIK in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__CheckIK_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} behavior_tree_msgs__action__CheckIK_GetResult_Request;

// Struct for a sequence of behavior_tree_msgs__action__CheckIK_GetResult_Request.
typedef struct behavior_tree_msgs__action__CheckIK_GetResult_Request__Sequence
{
  behavior_tree_msgs__action__CheckIK_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__CheckIK_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__struct.h"

/// Struct defined in action/CheckIK in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__CheckIK_GetResult_Response
{
  int8_t status;
  behavior_tree_msgs__action__CheckIK_Result result;
} behavior_tree_msgs__action__CheckIK_GetResult_Response;

// Struct for a sequence of behavior_tree_msgs__action__CheckIK_GetResult_Response.
typedef struct behavior_tree_msgs__action__CheckIK_GetResult_Response__Sequence
{
  behavior_tree_msgs__action__CheckIK_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__CheckIK_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__struct.h"

/// Struct defined in action/CheckIK in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__CheckIK_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__CheckIK_Feedback feedback;
} behavior_tree_msgs__action__CheckIK_FeedbackMessage;

// Struct for a sequence of behavior_tree_msgs__action__CheckIK_FeedbackMessage.
typedef struct behavior_tree_msgs__action__CheckIK_FeedbackMessage__Sequence
{
  behavior_tree_msgs__action__CheckIK_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__CheckIK_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__ACTION__DETAIL__CHECK_IK__STRUCT_H_
