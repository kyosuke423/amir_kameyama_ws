// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from failure_detection_msgs:action/Analysys.idl
// generated code does not contain a copyright notice

#ifndef FAILURE_DETECTION_MSGS__ACTION__DETAIL__ANALYSYS__STRUCT_H_
#define FAILURE_DETECTION_MSGS__ACTION__DETAIL__ANALYSYS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Analysys in the package failure_detection_msgs.
typedef struct failure_detection_msgs__action__Analysys_Goal
{
  rosidl_runtime_c__String node_name;
  int32_t node_id;
} failure_detection_msgs__action__Analysys_Goal;

// Struct for a sequence of failure_detection_msgs__action__Analysys_Goal.
typedef struct failure_detection_msgs__action__Analysys_Goal__Sequence
{
  failure_detection_msgs__action__Analysys_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} failure_detection_msgs__action__Analysys_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Analysys in the package failure_detection_msgs.
typedef struct failure_detection_msgs__action__Analysys_Result
{
  double success_probability;
} failure_detection_msgs__action__Analysys_Result;

// Struct for a sequence of failure_detection_msgs__action__Analysys_Result.
typedef struct failure_detection_msgs__action__Analysys_Result__Sequence
{
  failure_detection_msgs__action__Analysys_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} failure_detection_msgs__action__Analysys_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Analysys in the package failure_detection_msgs.
typedef struct failure_detection_msgs__action__Analysys_Feedback
{
  double success_probability;
} failure_detection_msgs__action__Analysys_Feedback;

// Struct for a sequence of failure_detection_msgs__action__Analysys_Feedback.
typedef struct failure_detection_msgs__action__Analysys_Feedback__Sequence
{
  failure_detection_msgs__action__Analysys_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} failure_detection_msgs__action__Analysys_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "failure_detection_msgs/action/detail/analysys__struct.h"

/// Struct defined in action/Analysys in the package failure_detection_msgs.
typedef struct failure_detection_msgs__action__Analysys_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  failure_detection_msgs__action__Analysys_Goal goal;
} failure_detection_msgs__action__Analysys_SendGoal_Request;

// Struct for a sequence of failure_detection_msgs__action__Analysys_SendGoal_Request.
typedef struct failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence
{
  failure_detection_msgs__action__Analysys_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} failure_detection_msgs__action__Analysys_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Analysys in the package failure_detection_msgs.
typedef struct failure_detection_msgs__action__Analysys_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} failure_detection_msgs__action__Analysys_SendGoal_Response;

// Struct for a sequence of failure_detection_msgs__action__Analysys_SendGoal_Response.
typedef struct failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence
{
  failure_detection_msgs__action__Analysys_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} failure_detection_msgs__action__Analysys_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Analysys in the package failure_detection_msgs.
typedef struct failure_detection_msgs__action__Analysys_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} failure_detection_msgs__action__Analysys_GetResult_Request;

// Struct for a sequence of failure_detection_msgs__action__Analysys_GetResult_Request.
typedef struct failure_detection_msgs__action__Analysys_GetResult_Request__Sequence
{
  failure_detection_msgs__action__Analysys_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} failure_detection_msgs__action__Analysys_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "failure_detection_msgs/action/detail/analysys__struct.h"

/// Struct defined in action/Analysys in the package failure_detection_msgs.
typedef struct failure_detection_msgs__action__Analysys_GetResult_Response
{
  int8_t status;
  failure_detection_msgs__action__Analysys_Result result;
} failure_detection_msgs__action__Analysys_GetResult_Response;

// Struct for a sequence of failure_detection_msgs__action__Analysys_GetResult_Response.
typedef struct failure_detection_msgs__action__Analysys_GetResult_Response__Sequence
{
  failure_detection_msgs__action__Analysys_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} failure_detection_msgs__action__Analysys_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "failure_detection_msgs/action/detail/analysys__struct.h"

/// Struct defined in action/Analysys in the package failure_detection_msgs.
typedef struct failure_detection_msgs__action__Analysys_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  failure_detection_msgs__action__Analysys_Feedback feedback;
} failure_detection_msgs__action__Analysys_FeedbackMessage;

// Struct for a sequence of failure_detection_msgs__action__Analysys_FeedbackMessage.
typedef struct failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence
{
  failure_detection_msgs__action__Analysys_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} failure_detection_msgs__action__Analysys_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FAILURE_DETECTION_MSGS__ACTION__DETAIL__ANALYSYS__STRUCT_H_
