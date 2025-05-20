// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from behavior_tree_msgs:action/SearchObj.idl
// generated code does not contain a copyright notice

#ifndef BEHAVIOR_TREE_MSGS__ACTION__DETAIL__SEARCH_OBJ__STRUCT_H_
#define BEHAVIOR_TREE_MSGS__ACTION__DETAIL__SEARCH_OBJ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/SearchObj in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__SearchObj_Goal
{
  /// Goal 定義
  /// 探索対象のオブジェクトID
  rosidl_runtime_c__String object_id;
} behavior_tree_msgs__action__SearchObj_Goal;

// Struct for a sequence of behavior_tree_msgs__action__SearchObj_Goal.
typedef struct behavior_tree_msgs__action__SearchObj_Goal__Sequence
{
  behavior_tree_msgs__action__SearchObj_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__SearchObj_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_string'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/SearchObj in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__SearchObj_Result
{
  /// 実行結果のエラーメッセージ（"success" またはエラー内容）
  rosidl_runtime_c__String error_string;
  /// 探索成功フラグ
  bool success;
} behavior_tree_msgs__action__SearchObj_Result;

// Struct for a sequence of behavior_tree_msgs__action__SearchObj_Result.
typedef struct behavior_tree_msgs__action__SearchObj_Result__Sequence
{
  behavior_tree_msgs__action__SearchObj_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__SearchObj_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/SearchObj in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__SearchObj_Feedback
{
  /// 現在の状態や進捗情報
  rosidl_runtime_c__String status;
} behavior_tree_msgs__action__SearchObj_Feedback;

// Struct for a sequence of behavior_tree_msgs__action__SearchObj_Feedback.
typedef struct behavior_tree_msgs__action__SearchObj_Feedback__Sequence
{
  behavior_tree_msgs__action__SearchObj_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__SearchObj_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "behavior_tree_msgs/action/detail/search_obj__struct.h"

/// Struct defined in action/SearchObj in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__SearchObj_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__SearchObj_Goal goal;
} behavior_tree_msgs__action__SearchObj_SendGoal_Request;

// Struct for a sequence of behavior_tree_msgs__action__SearchObj_SendGoal_Request.
typedef struct behavior_tree_msgs__action__SearchObj_SendGoal_Request__Sequence
{
  behavior_tree_msgs__action__SearchObj_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__SearchObj_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SearchObj in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__SearchObj_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} behavior_tree_msgs__action__SearchObj_SendGoal_Response;

// Struct for a sequence of behavior_tree_msgs__action__SearchObj_SendGoal_Response.
typedef struct behavior_tree_msgs__action__SearchObj_SendGoal_Response__Sequence
{
  behavior_tree_msgs__action__SearchObj_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__SearchObj_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SearchObj in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__SearchObj_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} behavior_tree_msgs__action__SearchObj_GetResult_Request;

// Struct for a sequence of behavior_tree_msgs__action__SearchObj_GetResult_Request.
typedef struct behavior_tree_msgs__action__SearchObj_GetResult_Request__Sequence
{
  behavior_tree_msgs__action__SearchObj_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__SearchObj_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "behavior_tree_msgs/action/detail/search_obj__struct.h"

/// Struct defined in action/SearchObj in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__SearchObj_GetResult_Response
{
  int8_t status;
  behavior_tree_msgs__action__SearchObj_Result result;
} behavior_tree_msgs__action__SearchObj_GetResult_Response;

// Struct for a sequence of behavior_tree_msgs__action__SearchObj_GetResult_Response.
typedef struct behavior_tree_msgs__action__SearchObj_GetResult_Response__Sequence
{
  behavior_tree_msgs__action__SearchObj_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__SearchObj_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "behavior_tree_msgs/action/detail/search_obj__struct.h"

/// Struct defined in action/SearchObj in the package behavior_tree_msgs.
typedef struct behavior_tree_msgs__action__SearchObj_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  behavior_tree_msgs__action__SearchObj_Feedback feedback;
} behavior_tree_msgs__action__SearchObj_FeedbackMessage;

// Struct for a sequence of behavior_tree_msgs__action__SearchObj_FeedbackMessage.
typedef struct behavior_tree_msgs__action__SearchObj_FeedbackMessage__Sequence
{
  behavior_tree_msgs__action__SearchObj_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} behavior_tree_msgs__action__SearchObj_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEHAVIOR_TREE_MSGS__ACTION__DETAIL__SEARCH_OBJ__STRUCT_H_
