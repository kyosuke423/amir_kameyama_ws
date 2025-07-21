// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from behavior_tree_msgs:action/DOp.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "behavior_tree_msgs/action/detail/d_op__rosidl_typesupport_introspection_c.h"
#include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "behavior_tree_msgs/action/detail/d_op__functions.h"
#include "behavior_tree_msgs/action/detail/d_op__struct.h"


// Include directives for member types
// Member `input_csv_path`
// Member `output_txt_path`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__action__DOp_Goal__rosidl_typesupport_introspection_c__DOp_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__action__DOp_Goal__init(message_memory);
}

void behavior_tree_msgs__action__DOp_Goal__rosidl_typesupport_introspection_c__DOp_Goal_fini_function(void * message_memory)
{
  behavior_tree_msgs__action__DOp_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__action__DOp_Goal__rosidl_typesupport_introspection_c__DOp_Goal_message_member_array[2] = {
  {
    "input_csv_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__DOp_Goal, input_csv_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "output_txt_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__DOp_Goal, output_txt_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__action__DOp_Goal__rosidl_typesupport_introspection_c__DOp_Goal_message_members = {
  "behavior_tree_msgs__action",  // message namespace
  "DOp_Goal",  // message name
  2,  // number of fields
  sizeof(behavior_tree_msgs__action__DOp_Goal),
  behavior_tree_msgs__action__DOp_Goal__rosidl_typesupport_introspection_c__DOp_Goal_message_member_array,  // message members
  behavior_tree_msgs__action__DOp_Goal__rosidl_typesupport_introspection_c__DOp_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__action__DOp_Goal__rosidl_typesupport_introspection_c__DOp_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__action__DOp_Goal__rosidl_typesupport_introspection_c__DOp_Goal_message_type_support_handle = {
  0,
  &behavior_tree_msgs__action__DOp_Goal__rosidl_typesupport_introspection_c__DOp_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_Goal)() {
  if (!behavior_tree_msgs__action__DOp_Goal__rosidl_typesupport_introspection_c__DOp_Goal_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__DOp_Goal__rosidl_typesupport_introspection_c__DOp_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__action__DOp_Goal__rosidl_typesupport_introspection_c__DOp_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__functions.h"
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__action__DOp_Result__rosidl_typesupport_introspection_c__DOp_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__action__DOp_Result__init(message_memory);
}

void behavior_tree_msgs__action__DOp_Result__rosidl_typesupport_introspection_c__DOp_Result_fini_function(void * message_memory)
{
  behavior_tree_msgs__action__DOp_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__action__DOp_Result__rosidl_typesupport_introspection_c__DOp_Result_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__DOp_Result, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__DOp_Result, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__action__DOp_Result__rosidl_typesupport_introspection_c__DOp_Result_message_members = {
  "behavior_tree_msgs__action",  // message namespace
  "DOp_Result",  // message name
  2,  // number of fields
  sizeof(behavior_tree_msgs__action__DOp_Result),
  behavior_tree_msgs__action__DOp_Result__rosidl_typesupport_introspection_c__DOp_Result_message_member_array,  // message members
  behavior_tree_msgs__action__DOp_Result__rosidl_typesupport_introspection_c__DOp_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__action__DOp_Result__rosidl_typesupport_introspection_c__DOp_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__action__DOp_Result__rosidl_typesupport_introspection_c__DOp_Result_message_type_support_handle = {
  0,
  &behavior_tree_msgs__action__DOp_Result__rosidl_typesupport_introspection_c__DOp_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_Result)() {
  if (!behavior_tree_msgs__action__DOp_Result__rosidl_typesupport_introspection_c__DOp_Result_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__DOp_Result__rosidl_typesupport_introspection_c__DOp_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__action__DOp_Result__rosidl_typesupport_introspection_c__DOp_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__functions.h"
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__struct.h"


// Include directives for member types
// Member `current_step`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__action__DOp_Feedback__rosidl_typesupport_introspection_c__DOp_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__action__DOp_Feedback__init(message_memory);
}

void behavior_tree_msgs__action__DOp_Feedback__rosidl_typesupport_introspection_c__DOp_Feedback_fini_function(void * message_memory)
{
  behavior_tree_msgs__action__DOp_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__action__DOp_Feedback__rosidl_typesupport_introspection_c__DOp_Feedback_message_member_array[1] = {
  {
    "current_step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__DOp_Feedback, current_step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__action__DOp_Feedback__rosidl_typesupport_introspection_c__DOp_Feedback_message_members = {
  "behavior_tree_msgs__action",  // message namespace
  "DOp_Feedback",  // message name
  1,  // number of fields
  sizeof(behavior_tree_msgs__action__DOp_Feedback),
  behavior_tree_msgs__action__DOp_Feedback__rosidl_typesupport_introspection_c__DOp_Feedback_message_member_array,  // message members
  behavior_tree_msgs__action__DOp_Feedback__rosidl_typesupport_introspection_c__DOp_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__action__DOp_Feedback__rosidl_typesupport_introspection_c__DOp_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__action__DOp_Feedback__rosidl_typesupport_introspection_c__DOp_Feedback_message_type_support_handle = {
  0,
  &behavior_tree_msgs__action__DOp_Feedback__rosidl_typesupport_introspection_c__DOp_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_Feedback)() {
  if (!behavior_tree_msgs__action__DOp_Feedback__rosidl_typesupport_introspection_c__DOp_Feedback_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__DOp_Feedback__rosidl_typesupport_introspection_c__DOp_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__action__DOp_Feedback__rosidl_typesupport_introspection_c__DOp_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__functions.h"
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "behavior_tree_msgs/action/d_op.h"
// Member `goal`
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__action__DOp_SendGoal_Request__rosidl_typesupport_introspection_c__DOp_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__action__DOp_SendGoal_Request__init(message_memory);
}

void behavior_tree_msgs__action__DOp_SendGoal_Request__rosidl_typesupport_introspection_c__DOp_SendGoal_Request_fini_function(void * message_memory)
{
  behavior_tree_msgs__action__DOp_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__action__DOp_SendGoal_Request__rosidl_typesupport_introspection_c__DOp_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__DOp_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__DOp_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__action__DOp_SendGoal_Request__rosidl_typesupport_introspection_c__DOp_SendGoal_Request_message_members = {
  "behavior_tree_msgs__action",  // message namespace
  "DOp_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(behavior_tree_msgs__action__DOp_SendGoal_Request),
  behavior_tree_msgs__action__DOp_SendGoal_Request__rosidl_typesupport_introspection_c__DOp_SendGoal_Request_message_member_array,  // message members
  behavior_tree_msgs__action__DOp_SendGoal_Request__rosidl_typesupport_introspection_c__DOp_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__action__DOp_SendGoal_Request__rosidl_typesupport_introspection_c__DOp_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__action__DOp_SendGoal_Request__rosidl_typesupport_introspection_c__DOp_SendGoal_Request_message_type_support_handle = {
  0,
  &behavior_tree_msgs__action__DOp_SendGoal_Request__rosidl_typesupport_introspection_c__DOp_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_SendGoal_Request)() {
  behavior_tree_msgs__action__DOp_SendGoal_Request__rosidl_typesupport_introspection_c__DOp_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  behavior_tree_msgs__action__DOp_SendGoal_Request__rosidl_typesupport_introspection_c__DOp_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_Goal)();
  if (!behavior_tree_msgs__action__DOp_SendGoal_Request__rosidl_typesupport_introspection_c__DOp_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__DOp_SendGoal_Request__rosidl_typesupport_introspection_c__DOp_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__action__DOp_SendGoal_Request__rosidl_typesupport_introspection_c__DOp_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__functions.h"
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__action__DOp_SendGoal_Response__rosidl_typesupport_introspection_c__DOp_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__action__DOp_SendGoal_Response__init(message_memory);
}

void behavior_tree_msgs__action__DOp_SendGoal_Response__rosidl_typesupport_introspection_c__DOp_SendGoal_Response_fini_function(void * message_memory)
{
  behavior_tree_msgs__action__DOp_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__action__DOp_SendGoal_Response__rosidl_typesupport_introspection_c__DOp_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__DOp_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__DOp_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__action__DOp_SendGoal_Response__rosidl_typesupport_introspection_c__DOp_SendGoal_Response_message_members = {
  "behavior_tree_msgs__action",  // message namespace
  "DOp_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(behavior_tree_msgs__action__DOp_SendGoal_Response),
  behavior_tree_msgs__action__DOp_SendGoal_Response__rosidl_typesupport_introspection_c__DOp_SendGoal_Response_message_member_array,  // message members
  behavior_tree_msgs__action__DOp_SendGoal_Response__rosidl_typesupport_introspection_c__DOp_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__action__DOp_SendGoal_Response__rosidl_typesupport_introspection_c__DOp_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__action__DOp_SendGoal_Response__rosidl_typesupport_introspection_c__DOp_SendGoal_Response_message_type_support_handle = {
  0,
  &behavior_tree_msgs__action__DOp_SendGoal_Response__rosidl_typesupport_introspection_c__DOp_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_SendGoal_Response)() {
  behavior_tree_msgs__action__DOp_SendGoal_Response__rosidl_typesupport_introspection_c__DOp_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!behavior_tree_msgs__action__DOp_SendGoal_Response__rosidl_typesupport_introspection_c__DOp_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__DOp_SendGoal_Response__rosidl_typesupport_introspection_c__DOp_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__action__DOp_SendGoal_Response__rosidl_typesupport_introspection_c__DOp_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_SendGoal_service_members = {
  "behavior_tree_msgs__action",  // service namespace
  "DOp_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_SendGoal_service_type_support_handle = {
  0,
  &behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_SendGoal)() {
  if (!behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_SendGoal_service_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_SendGoal_Response)()->data;
  }

  return &behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__functions.h"
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__action__DOp_GetResult_Request__rosidl_typesupport_introspection_c__DOp_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__action__DOp_GetResult_Request__init(message_memory);
}

void behavior_tree_msgs__action__DOp_GetResult_Request__rosidl_typesupport_introspection_c__DOp_GetResult_Request_fini_function(void * message_memory)
{
  behavior_tree_msgs__action__DOp_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__action__DOp_GetResult_Request__rosidl_typesupport_introspection_c__DOp_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__DOp_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__action__DOp_GetResult_Request__rosidl_typesupport_introspection_c__DOp_GetResult_Request_message_members = {
  "behavior_tree_msgs__action",  // message namespace
  "DOp_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(behavior_tree_msgs__action__DOp_GetResult_Request),
  behavior_tree_msgs__action__DOp_GetResult_Request__rosidl_typesupport_introspection_c__DOp_GetResult_Request_message_member_array,  // message members
  behavior_tree_msgs__action__DOp_GetResult_Request__rosidl_typesupport_introspection_c__DOp_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__action__DOp_GetResult_Request__rosidl_typesupport_introspection_c__DOp_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__action__DOp_GetResult_Request__rosidl_typesupport_introspection_c__DOp_GetResult_Request_message_type_support_handle = {
  0,
  &behavior_tree_msgs__action__DOp_GetResult_Request__rosidl_typesupport_introspection_c__DOp_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_GetResult_Request)() {
  behavior_tree_msgs__action__DOp_GetResult_Request__rosidl_typesupport_introspection_c__DOp_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!behavior_tree_msgs__action__DOp_GetResult_Request__rosidl_typesupport_introspection_c__DOp_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__DOp_GetResult_Request__rosidl_typesupport_introspection_c__DOp_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__action__DOp_GetResult_Request__rosidl_typesupport_introspection_c__DOp_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__functions.h"
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "behavior_tree_msgs/action/d_op.h"
// Member `result`
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__action__DOp_GetResult_Response__rosidl_typesupport_introspection_c__DOp_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__action__DOp_GetResult_Response__init(message_memory);
}

void behavior_tree_msgs__action__DOp_GetResult_Response__rosidl_typesupport_introspection_c__DOp_GetResult_Response_fini_function(void * message_memory)
{
  behavior_tree_msgs__action__DOp_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__action__DOp_GetResult_Response__rosidl_typesupport_introspection_c__DOp_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__DOp_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__DOp_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__action__DOp_GetResult_Response__rosidl_typesupport_introspection_c__DOp_GetResult_Response_message_members = {
  "behavior_tree_msgs__action",  // message namespace
  "DOp_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(behavior_tree_msgs__action__DOp_GetResult_Response),
  behavior_tree_msgs__action__DOp_GetResult_Response__rosidl_typesupport_introspection_c__DOp_GetResult_Response_message_member_array,  // message members
  behavior_tree_msgs__action__DOp_GetResult_Response__rosidl_typesupport_introspection_c__DOp_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__action__DOp_GetResult_Response__rosidl_typesupport_introspection_c__DOp_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__action__DOp_GetResult_Response__rosidl_typesupport_introspection_c__DOp_GetResult_Response_message_type_support_handle = {
  0,
  &behavior_tree_msgs__action__DOp_GetResult_Response__rosidl_typesupport_introspection_c__DOp_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_GetResult_Response)() {
  behavior_tree_msgs__action__DOp_GetResult_Response__rosidl_typesupport_introspection_c__DOp_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_Result)();
  if (!behavior_tree_msgs__action__DOp_GetResult_Response__rosidl_typesupport_introspection_c__DOp_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__DOp_GetResult_Response__rosidl_typesupport_introspection_c__DOp_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__action__DOp_GetResult_Response__rosidl_typesupport_introspection_c__DOp_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_GetResult_service_members = {
  "behavior_tree_msgs__action",  // service namespace
  "DOp_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_GetResult_service_type_support_handle = {
  0,
  &behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_GetResult)() {
  if (!behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_GetResult_service_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_GetResult_Response)()->data;
  }

  return &behavior_tree_msgs__action__detail__d_op__rosidl_typesupport_introspection_c__DOp_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__functions.h"
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "behavior_tree_msgs/action/d_op.h"
// Member `feedback`
// already included above
// #include "behavior_tree_msgs/action/detail/d_op__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__action__DOp_FeedbackMessage__rosidl_typesupport_introspection_c__DOp_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__action__DOp_FeedbackMessage__init(message_memory);
}

void behavior_tree_msgs__action__DOp_FeedbackMessage__rosidl_typesupport_introspection_c__DOp_FeedbackMessage_fini_function(void * message_memory)
{
  behavior_tree_msgs__action__DOp_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__action__DOp_FeedbackMessage__rosidl_typesupport_introspection_c__DOp_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__DOp_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__DOp_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__action__DOp_FeedbackMessage__rosidl_typesupport_introspection_c__DOp_FeedbackMessage_message_members = {
  "behavior_tree_msgs__action",  // message namespace
  "DOp_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(behavior_tree_msgs__action__DOp_FeedbackMessage),
  behavior_tree_msgs__action__DOp_FeedbackMessage__rosidl_typesupport_introspection_c__DOp_FeedbackMessage_message_member_array,  // message members
  behavior_tree_msgs__action__DOp_FeedbackMessage__rosidl_typesupport_introspection_c__DOp_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__action__DOp_FeedbackMessage__rosidl_typesupport_introspection_c__DOp_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__action__DOp_FeedbackMessage__rosidl_typesupport_introspection_c__DOp_FeedbackMessage_message_type_support_handle = {
  0,
  &behavior_tree_msgs__action__DOp_FeedbackMessage__rosidl_typesupport_introspection_c__DOp_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_FeedbackMessage)() {
  behavior_tree_msgs__action__DOp_FeedbackMessage__rosidl_typesupport_introspection_c__DOp_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  behavior_tree_msgs__action__DOp_FeedbackMessage__rosidl_typesupport_introspection_c__DOp_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, DOp_Feedback)();
  if (!behavior_tree_msgs__action__DOp_FeedbackMessage__rosidl_typesupport_introspection_c__DOp_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__DOp_FeedbackMessage__rosidl_typesupport_introspection_c__DOp_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__action__DOp_FeedbackMessage__rosidl_typesupport_introspection_c__DOp_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
