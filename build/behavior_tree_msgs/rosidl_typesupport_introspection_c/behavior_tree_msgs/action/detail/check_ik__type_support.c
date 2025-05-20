// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from behavior_tree_msgs:action/CheckIK.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "behavior_tree_msgs/action/detail/check_ik__rosidl_typesupport_introspection_c.h"
#include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "behavior_tree_msgs/action/detail/check_ik__functions.h"
#include "behavior_tree_msgs/action/detail/check_ik__struct.h"


// Include directives for member types
// Member `command`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `obj_pose`
// Member `location_pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `obj_pose`
// Member `location_pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"
// Member `grasped_object`
#include "moveit_msgs/msg/attached_collision_object.h"
// Member `grasped_object`
#include "moveit_msgs/msg/detail/attached_collision_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__action__CheckIK_Goal__rosidl_typesupport_introspection_c__CheckIK_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__action__CheckIK_Goal__init(message_memory);
}

void behavior_tree_msgs__action__CheckIK_Goal__rosidl_typesupport_introspection_c__CheckIK_Goal_fini_function(void * message_memory)
{
  behavior_tree_msgs__action__CheckIK_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__action__CheckIK_Goal__rosidl_typesupport_introspection_c__CheckIK_Goal_message_member_array[6] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__CheckIK_Goal, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__CheckIK_Goal, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obj_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__CheckIK_Goal, obj_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "location_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__CheckIK_Goal, location_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grasped_object",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__CheckIK_Goal, grasped_object),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stand",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__CheckIK_Goal, stand),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__action__CheckIK_Goal__rosidl_typesupport_introspection_c__CheckIK_Goal_message_members = {
  "behavior_tree_msgs__action",  // message namespace
  "CheckIK_Goal",  // message name
  6,  // number of fields
  sizeof(behavior_tree_msgs__action__CheckIK_Goal),
  behavior_tree_msgs__action__CheckIK_Goal__rosidl_typesupport_introspection_c__CheckIK_Goal_message_member_array,  // message members
  behavior_tree_msgs__action__CheckIK_Goal__rosidl_typesupport_introspection_c__CheckIK_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__action__CheckIK_Goal__rosidl_typesupport_introspection_c__CheckIK_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__action__CheckIK_Goal__rosidl_typesupport_introspection_c__CheckIK_Goal_message_type_support_handle = {
  0,
  &behavior_tree_msgs__action__CheckIK_Goal__rosidl_typesupport_introspection_c__CheckIK_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_Goal)() {
  behavior_tree_msgs__action__CheckIK_Goal__rosidl_typesupport_introspection_c__CheckIK_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  behavior_tree_msgs__action__CheckIK_Goal__rosidl_typesupport_introspection_c__CheckIK_Goal_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  behavior_tree_msgs__action__CheckIK_Goal__rosidl_typesupport_introspection_c__CheckIK_Goal_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, AttachedCollisionObject)();
  if (!behavior_tree_msgs__action__CheckIK_Goal__rosidl_typesupport_introspection_c__CheckIK_Goal_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__CheckIK_Goal__rosidl_typesupport_introspection_c__CheckIK_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__action__CheckIK_Goal__rosidl_typesupport_introspection_c__CheckIK_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__functions.h"
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__struct.h"


// Include directives for member types
// Member `error_string`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__action__CheckIK_Result__rosidl_typesupport_introspection_c__CheckIK_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__action__CheckIK_Result__init(message_memory);
}

void behavior_tree_msgs__action__CheckIK_Result__rosidl_typesupport_introspection_c__CheckIK_Result_fini_function(void * message_memory)
{
  behavior_tree_msgs__action__CheckIK_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__action__CheckIK_Result__rosidl_typesupport_introspection_c__CheckIK_Result_message_member_array[1] = {
  {
    "error_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__CheckIK_Result, error_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__action__CheckIK_Result__rosidl_typesupport_introspection_c__CheckIK_Result_message_members = {
  "behavior_tree_msgs__action",  // message namespace
  "CheckIK_Result",  // message name
  1,  // number of fields
  sizeof(behavior_tree_msgs__action__CheckIK_Result),
  behavior_tree_msgs__action__CheckIK_Result__rosidl_typesupport_introspection_c__CheckIK_Result_message_member_array,  // message members
  behavior_tree_msgs__action__CheckIK_Result__rosidl_typesupport_introspection_c__CheckIK_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__action__CheckIK_Result__rosidl_typesupport_introspection_c__CheckIK_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__action__CheckIK_Result__rosidl_typesupport_introspection_c__CheckIK_Result_message_type_support_handle = {
  0,
  &behavior_tree_msgs__action__CheckIK_Result__rosidl_typesupport_introspection_c__CheckIK_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_Result)() {
  if (!behavior_tree_msgs__action__CheckIK_Result__rosidl_typesupport_introspection_c__CheckIK_Result_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__CheckIK_Result__rosidl_typesupport_introspection_c__CheckIK_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__action__CheckIK_Result__rosidl_typesupport_introspection_c__CheckIK_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__functions.h"
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__action__CheckIK_Feedback__rosidl_typesupport_introspection_c__CheckIK_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__action__CheckIK_Feedback__init(message_memory);
}

void behavior_tree_msgs__action__CheckIK_Feedback__rosidl_typesupport_introspection_c__CheckIK_Feedback_fini_function(void * message_memory)
{
  behavior_tree_msgs__action__CheckIK_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__action__CheckIK_Feedback__rosidl_typesupport_introspection_c__CheckIK_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__CheckIK_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__action__CheckIK_Feedback__rosidl_typesupport_introspection_c__CheckIK_Feedback_message_members = {
  "behavior_tree_msgs__action",  // message namespace
  "CheckIK_Feedback",  // message name
  1,  // number of fields
  sizeof(behavior_tree_msgs__action__CheckIK_Feedback),
  behavior_tree_msgs__action__CheckIK_Feedback__rosidl_typesupport_introspection_c__CheckIK_Feedback_message_member_array,  // message members
  behavior_tree_msgs__action__CheckIK_Feedback__rosidl_typesupport_introspection_c__CheckIK_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__action__CheckIK_Feedback__rosidl_typesupport_introspection_c__CheckIK_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__action__CheckIK_Feedback__rosidl_typesupport_introspection_c__CheckIK_Feedback_message_type_support_handle = {
  0,
  &behavior_tree_msgs__action__CheckIK_Feedback__rosidl_typesupport_introspection_c__CheckIK_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_Feedback)() {
  if (!behavior_tree_msgs__action__CheckIK_Feedback__rosidl_typesupport_introspection_c__CheckIK_Feedback_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__CheckIK_Feedback__rosidl_typesupport_introspection_c__CheckIK_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__action__CheckIK_Feedback__rosidl_typesupport_introspection_c__CheckIK_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__functions.h"
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "behavior_tree_msgs/action/check_ik.h"
// Member `goal`
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__action__CheckIK_SendGoal_Request__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__action__CheckIK_SendGoal_Request__init(message_memory);
}

void behavior_tree_msgs__action__CheckIK_SendGoal_Request__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Request_fini_function(void * message_memory)
{
  behavior_tree_msgs__action__CheckIK_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__action__CheckIK_SendGoal_Request__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__CheckIK_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(behavior_tree_msgs__action__CheckIK_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__action__CheckIK_SendGoal_Request__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Request_message_members = {
  "behavior_tree_msgs__action",  // message namespace
  "CheckIK_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(behavior_tree_msgs__action__CheckIK_SendGoal_Request),
  behavior_tree_msgs__action__CheckIK_SendGoal_Request__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Request_message_member_array,  // message members
  behavior_tree_msgs__action__CheckIK_SendGoal_Request__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__action__CheckIK_SendGoal_Request__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__action__CheckIK_SendGoal_Request__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Request_message_type_support_handle = {
  0,
  &behavior_tree_msgs__action__CheckIK_SendGoal_Request__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_SendGoal_Request)() {
  behavior_tree_msgs__action__CheckIK_SendGoal_Request__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  behavior_tree_msgs__action__CheckIK_SendGoal_Request__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_Goal)();
  if (!behavior_tree_msgs__action__CheckIK_SendGoal_Request__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__CheckIK_SendGoal_Request__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__action__CheckIK_SendGoal_Request__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__functions.h"
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__action__CheckIK_SendGoal_Response__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__action__CheckIK_SendGoal_Response__init(message_memory);
}

void behavior_tree_msgs__action__CheckIK_SendGoal_Response__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Response_fini_function(void * message_memory)
{
  behavior_tree_msgs__action__CheckIK_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__action__CheckIK_SendGoal_Response__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__CheckIK_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(behavior_tree_msgs__action__CheckIK_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__action__CheckIK_SendGoal_Response__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Response_message_members = {
  "behavior_tree_msgs__action",  // message namespace
  "CheckIK_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(behavior_tree_msgs__action__CheckIK_SendGoal_Response),
  behavior_tree_msgs__action__CheckIK_SendGoal_Response__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Response_message_member_array,  // message members
  behavior_tree_msgs__action__CheckIK_SendGoal_Response__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__action__CheckIK_SendGoal_Response__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__action__CheckIK_SendGoal_Response__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Response_message_type_support_handle = {
  0,
  &behavior_tree_msgs__action__CheckIK_SendGoal_Response__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_SendGoal_Response)() {
  behavior_tree_msgs__action__CheckIK_SendGoal_Response__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!behavior_tree_msgs__action__CheckIK_SendGoal_Response__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__CheckIK_SendGoal_Response__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__action__CheckIK_SendGoal_Response__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_SendGoal_service_members = {
  "behavior_tree_msgs__action",  // service namespace
  "CheckIK_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_SendGoal_service_type_support_handle = {
  0,
  &behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_SendGoal)() {
  if (!behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_SendGoal_service_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_SendGoal_Response)()->data;
  }

  return &behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__functions.h"
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__struct.h"


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

void behavior_tree_msgs__action__CheckIK_GetResult_Request__rosidl_typesupport_introspection_c__CheckIK_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__action__CheckIK_GetResult_Request__init(message_memory);
}

void behavior_tree_msgs__action__CheckIK_GetResult_Request__rosidl_typesupport_introspection_c__CheckIK_GetResult_Request_fini_function(void * message_memory)
{
  behavior_tree_msgs__action__CheckIK_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__action__CheckIK_GetResult_Request__rosidl_typesupport_introspection_c__CheckIK_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__CheckIK_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__action__CheckIK_GetResult_Request__rosidl_typesupport_introspection_c__CheckIK_GetResult_Request_message_members = {
  "behavior_tree_msgs__action",  // message namespace
  "CheckIK_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(behavior_tree_msgs__action__CheckIK_GetResult_Request),
  behavior_tree_msgs__action__CheckIK_GetResult_Request__rosidl_typesupport_introspection_c__CheckIK_GetResult_Request_message_member_array,  // message members
  behavior_tree_msgs__action__CheckIK_GetResult_Request__rosidl_typesupport_introspection_c__CheckIK_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__action__CheckIK_GetResult_Request__rosidl_typesupport_introspection_c__CheckIK_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__action__CheckIK_GetResult_Request__rosidl_typesupport_introspection_c__CheckIK_GetResult_Request_message_type_support_handle = {
  0,
  &behavior_tree_msgs__action__CheckIK_GetResult_Request__rosidl_typesupport_introspection_c__CheckIK_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_GetResult_Request)() {
  behavior_tree_msgs__action__CheckIK_GetResult_Request__rosidl_typesupport_introspection_c__CheckIK_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!behavior_tree_msgs__action__CheckIK_GetResult_Request__rosidl_typesupport_introspection_c__CheckIK_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__CheckIK_GetResult_Request__rosidl_typesupport_introspection_c__CheckIK_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__action__CheckIK_GetResult_Request__rosidl_typesupport_introspection_c__CheckIK_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__functions.h"
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "behavior_tree_msgs/action/check_ik.h"
// Member `result`
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__action__CheckIK_GetResult_Response__rosidl_typesupport_introspection_c__CheckIK_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__action__CheckIK_GetResult_Response__init(message_memory);
}

void behavior_tree_msgs__action__CheckIK_GetResult_Response__rosidl_typesupport_introspection_c__CheckIK_GetResult_Response_fini_function(void * message_memory)
{
  behavior_tree_msgs__action__CheckIK_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__action__CheckIK_GetResult_Response__rosidl_typesupport_introspection_c__CheckIK_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__CheckIK_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(behavior_tree_msgs__action__CheckIK_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__action__CheckIK_GetResult_Response__rosidl_typesupport_introspection_c__CheckIK_GetResult_Response_message_members = {
  "behavior_tree_msgs__action",  // message namespace
  "CheckIK_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(behavior_tree_msgs__action__CheckIK_GetResult_Response),
  behavior_tree_msgs__action__CheckIK_GetResult_Response__rosidl_typesupport_introspection_c__CheckIK_GetResult_Response_message_member_array,  // message members
  behavior_tree_msgs__action__CheckIK_GetResult_Response__rosidl_typesupport_introspection_c__CheckIK_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__action__CheckIK_GetResult_Response__rosidl_typesupport_introspection_c__CheckIK_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__action__CheckIK_GetResult_Response__rosidl_typesupport_introspection_c__CheckIK_GetResult_Response_message_type_support_handle = {
  0,
  &behavior_tree_msgs__action__CheckIK_GetResult_Response__rosidl_typesupport_introspection_c__CheckIK_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_GetResult_Response)() {
  behavior_tree_msgs__action__CheckIK_GetResult_Response__rosidl_typesupport_introspection_c__CheckIK_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_Result)();
  if (!behavior_tree_msgs__action__CheckIK_GetResult_Response__rosidl_typesupport_introspection_c__CheckIK_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__CheckIK_GetResult_Response__rosidl_typesupport_introspection_c__CheckIK_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__action__CheckIK_GetResult_Response__rosidl_typesupport_introspection_c__CheckIK_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_GetResult_service_members = {
  "behavior_tree_msgs__action",  // service namespace
  "CheckIK_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_GetResult_service_type_support_handle = {
  0,
  &behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_GetResult)() {
  if (!behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_GetResult_service_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_GetResult_Response)()->data;
  }

  return &behavior_tree_msgs__action__detail__check_ik__rosidl_typesupport_introspection_c__CheckIK_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__functions.h"
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "behavior_tree_msgs/action/check_ik.h"
// Member `feedback`
// already included above
// #include "behavior_tree_msgs/action/detail/check_ik__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__action__CheckIK_FeedbackMessage__rosidl_typesupport_introspection_c__CheckIK_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__action__CheckIK_FeedbackMessage__init(message_memory);
}

void behavior_tree_msgs__action__CheckIK_FeedbackMessage__rosidl_typesupport_introspection_c__CheckIK_FeedbackMessage_fini_function(void * message_memory)
{
  behavior_tree_msgs__action__CheckIK_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__action__CheckIK_FeedbackMessage__rosidl_typesupport_introspection_c__CheckIK_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__action__CheckIK_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(behavior_tree_msgs__action__CheckIK_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__action__CheckIK_FeedbackMessage__rosidl_typesupport_introspection_c__CheckIK_FeedbackMessage_message_members = {
  "behavior_tree_msgs__action",  // message namespace
  "CheckIK_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(behavior_tree_msgs__action__CheckIK_FeedbackMessage),
  behavior_tree_msgs__action__CheckIK_FeedbackMessage__rosidl_typesupport_introspection_c__CheckIK_FeedbackMessage_message_member_array,  // message members
  behavior_tree_msgs__action__CheckIK_FeedbackMessage__rosidl_typesupport_introspection_c__CheckIK_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__action__CheckIK_FeedbackMessage__rosidl_typesupport_introspection_c__CheckIK_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__action__CheckIK_FeedbackMessage__rosidl_typesupport_introspection_c__CheckIK_FeedbackMessage_message_type_support_handle = {
  0,
  &behavior_tree_msgs__action__CheckIK_FeedbackMessage__rosidl_typesupport_introspection_c__CheckIK_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_FeedbackMessage)() {
  behavior_tree_msgs__action__CheckIK_FeedbackMessage__rosidl_typesupport_introspection_c__CheckIK_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  behavior_tree_msgs__action__CheckIK_FeedbackMessage__rosidl_typesupport_introspection_c__CheckIK_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, action, CheckIK_Feedback)();
  if (!behavior_tree_msgs__action__CheckIK_FeedbackMessage__rosidl_typesupport_introspection_c__CheckIK_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__action__CheckIK_FeedbackMessage__rosidl_typesupport_introspection_c__CheckIK_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__action__CheckIK_FeedbackMessage__rosidl_typesupport_introspection_c__CheckIK_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
