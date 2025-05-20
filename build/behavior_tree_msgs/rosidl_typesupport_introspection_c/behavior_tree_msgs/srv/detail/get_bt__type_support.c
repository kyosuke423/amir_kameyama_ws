// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from behavior_tree_msgs:srv/GetBT.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "behavior_tree_msgs/srv/detail/get_bt__rosidl_typesupport_introspection_c.h"
#include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "behavior_tree_msgs/srv/detail/get_bt__functions.h"
#include "behavior_tree_msgs/srv/detail/get_bt__struct.h"


// Include directives for member types
// Member `type`
// Member `bt`
// Member `goal_condition`
// Member `goal_conditions`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__GetBT_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__srv__GetBT_Request__init(message_memory);
}

void behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__GetBT_Request_fini_function(void * message_memory)
{
  behavior_tree_msgs__srv__GetBT_Request__fini(message_memory);
}

size_t behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__size_function__GetBT_Request__goal_conditions(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__get_const_function__GetBT_Request__goal_conditions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__get_function__GetBT_Request__goal_conditions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__fetch_function__GetBT_Request__goal_conditions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__get_const_function__GetBT_Request__goal_conditions(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__assign_function__GetBT_Request__goal_conditions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__get_function__GetBT_Request__goal_conditions(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__resize_function__GetBT_Request__goal_conditions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__GetBT_Request_message_member_array[5] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__srv__GetBT_Request, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__srv__GetBT_Request, bt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_condition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__srv__GetBT_Request, goal_condition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_conditions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__srv__GetBT_Request, goal_conditions),  // bytes offset in struct
    NULL,  // default value
    behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__size_function__GetBT_Request__goal_conditions,  // size() function pointer
    behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__get_const_function__GetBT_Request__goal_conditions,  // get_const(index) function pointer
    behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__get_function__GetBT_Request__goal_conditions,  // get(index) function pointer
    behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__fetch_function__GetBT_Request__goal_conditions,  // fetch(index, &value) function pointer
    behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__assign_function__GetBT_Request__goal_conditions,  // assign(index, value) function pointer
    behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__resize_function__GetBT_Request__goal_conditions  // resize(index) function pointer
  },
  {
    "failed_nood_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__srv__GetBT_Request, failed_nood_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__GetBT_Request_message_members = {
  "behavior_tree_msgs__srv",  // message namespace
  "GetBT_Request",  // message name
  5,  // number of fields
  sizeof(behavior_tree_msgs__srv__GetBT_Request),
  behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__GetBT_Request_message_member_array,  // message members
  behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__GetBT_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__GetBT_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__GetBT_Request_message_type_support_handle = {
  0,
  &behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__GetBT_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, GetBT_Request)() {
  if (!behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__GetBT_Request_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__GetBT_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__srv__GetBT_Request__rosidl_typesupport_introspection_c__GetBT_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_tree_msgs/srv/detail/get_bt__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_tree_msgs/srv/detail/get_bt__functions.h"
// already included above
// #include "behavior_tree_msgs/srv/detail/get_bt__struct.h"


// Include directives for member types
// Member `behavior_tree`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__srv__GetBT_Response__rosidl_typesupport_introspection_c__GetBT_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__srv__GetBT_Response__init(message_memory);
}

void behavior_tree_msgs__srv__GetBT_Response__rosidl_typesupport_introspection_c__GetBT_Response_fini_function(void * message_memory)
{
  behavior_tree_msgs__srv__GetBT_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__srv__GetBT_Response__rosidl_typesupport_introspection_c__GetBT_Response_message_member_array[1] = {
  {
    "behavior_tree",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__srv__GetBT_Response, behavior_tree),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__srv__GetBT_Response__rosidl_typesupport_introspection_c__GetBT_Response_message_members = {
  "behavior_tree_msgs__srv",  // message namespace
  "GetBT_Response",  // message name
  1,  // number of fields
  sizeof(behavior_tree_msgs__srv__GetBT_Response),
  behavior_tree_msgs__srv__GetBT_Response__rosidl_typesupport_introspection_c__GetBT_Response_message_member_array,  // message members
  behavior_tree_msgs__srv__GetBT_Response__rosidl_typesupport_introspection_c__GetBT_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__srv__GetBT_Response__rosidl_typesupport_introspection_c__GetBT_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__srv__GetBT_Response__rosidl_typesupport_introspection_c__GetBT_Response_message_type_support_handle = {
  0,
  &behavior_tree_msgs__srv__GetBT_Response__rosidl_typesupport_introspection_c__GetBT_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, GetBT_Response)() {
  if (!behavior_tree_msgs__srv__GetBT_Response__rosidl_typesupport_introspection_c__GetBT_Response_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__srv__GetBT_Response__rosidl_typesupport_introspection_c__GetBT_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__srv__GetBT_Response__rosidl_typesupport_introspection_c__GetBT_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "behavior_tree_msgs/srv/detail/get_bt__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers behavior_tree_msgs__srv__detail__get_bt__rosidl_typesupport_introspection_c__GetBT_service_members = {
  "behavior_tree_msgs__srv",  // service namespace
  "GetBT",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // behavior_tree_msgs__srv__detail__get_bt__rosidl_typesupport_introspection_c__GetBT_Request_message_type_support_handle,
  NULL  // response message
  // behavior_tree_msgs__srv__detail__get_bt__rosidl_typesupport_introspection_c__GetBT_Response_message_type_support_handle
};

static rosidl_service_type_support_t behavior_tree_msgs__srv__detail__get_bt__rosidl_typesupport_introspection_c__GetBT_service_type_support_handle = {
  0,
  &behavior_tree_msgs__srv__detail__get_bt__rosidl_typesupport_introspection_c__GetBT_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, GetBT_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, GetBT_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, GetBT)() {
  if (!behavior_tree_msgs__srv__detail__get_bt__rosidl_typesupport_introspection_c__GetBT_service_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__srv__detail__get_bt__rosidl_typesupport_introspection_c__GetBT_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)behavior_tree_msgs__srv__detail__get_bt__rosidl_typesupport_introspection_c__GetBT_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, GetBT_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, GetBT_Response)()->data;
  }

  return &behavior_tree_msgs__srv__detail__get_bt__rosidl_typesupport_introspection_c__GetBT_service_type_support_handle;
}
