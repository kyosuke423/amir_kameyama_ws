// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from behavior_tree_msgs:srv/CreateBT.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "behavior_tree_msgs/srv/detail/create_bt__rosidl_typesupport_introspection_c.h"
#include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "behavior_tree_msgs/srv/detail/create_bt__functions.h"
#include "behavior_tree_msgs/srv/detail/create_bt__struct.h"


// Include directives for member types
// Member `bt_name`
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__srv__CreateBT_Request__rosidl_typesupport_introspection_c__CreateBT_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__srv__CreateBT_Request__init(message_memory);
}

void behavior_tree_msgs__srv__CreateBT_Request__rosidl_typesupport_introspection_c__CreateBT_Request_fini_function(void * message_memory)
{
  behavior_tree_msgs__srv__CreateBT_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__srv__CreateBT_Request__rosidl_typesupport_introspection_c__CreateBT_Request_message_member_array[2] = {
  {
    "bt_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__srv__CreateBT_Request, bt_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__srv__CreateBT_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__srv__CreateBT_Request__rosidl_typesupport_introspection_c__CreateBT_Request_message_members = {
  "behavior_tree_msgs__srv",  // message namespace
  "CreateBT_Request",  // message name
  2,  // number of fields
  sizeof(behavior_tree_msgs__srv__CreateBT_Request),
  behavior_tree_msgs__srv__CreateBT_Request__rosidl_typesupport_introspection_c__CreateBT_Request_message_member_array,  // message members
  behavior_tree_msgs__srv__CreateBT_Request__rosidl_typesupport_introspection_c__CreateBT_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__srv__CreateBT_Request__rosidl_typesupport_introspection_c__CreateBT_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__srv__CreateBT_Request__rosidl_typesupport_introspection_c__CreateBT_Request_message_type_support_handle = {
  0,
  &behavior_tree_msgs__srv__CreateBT_Request__rosidl_typesupport_introspection_c__CreateBT_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, CreateBT_Request)() {
  if (!behavior_tree_msgs__srv__CreateBT_Request__rosidl_typesupport_introspection_c__CreateBT_Request_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__srv__CreateBT_Request__rosidl_typesupport_introspection_c__CreateBT_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__srv__CreateBT_Request__rosidl_typesupport_introspection_c__CreateBT_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "behavior_tree_msgs/srv/detail/create_bt__rosidl_typesupport_introspection_c.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "behavior_tree_msgs/srv/detail/create_bt__functions.h"
// already included above
// #include "behavior_tree_msgs/srv/detail/create_bt__struct.h"


// Include directives for member types
// Member `error_string`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__srv__CreateBT_Response__rosidl_typesupport_introspection_c__CreateBT_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__srv__CreateBT_Response__init(message_memory);
}

void behavior_tree_msgs__srv__CreateBT_Response__rosidl_typesupport_introspection_c__CreateBT_Response_fini_function(void * message_memory)
{
  behavior_tree_msgs__srv__CreateBT_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__srv__CreateBT_Response__rosidl_typesupport_introspection_c__CreateBT_Response_message_member_array[1] = {
  {
    "error_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__srv__CreateBT_Response, error_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__srv__CreateBT_Response__rosidl_typesupport_introspection_c__CreateBT_Response_message_members = {
  "behavior_tree_msgs__srv",  // message namespace
  "CreateBT_Response",  // message name
  1,  // number of fields
  sizeof(behavior_tree_msgs__srv__CreateBT_Response),
  behavior_tree_msgs__srv__CreateBT_Response__rosidl_typesupport_introspection_c__CreateBT_Response_message_member_array,  // message members
  behavior_tree_msgs__srv__CreateBT_Response__rosidl_typesupport_introspection_c__CreateBT_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__srv__CreateBT_Response__rosidl_typesupport_introspection_c__CreateBT_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__srv__CreateBT_Response__rosidl_typesupport_introspection_c__CreateBT_Response_message_type_support_handle = {
  0,
  &behavior_tree_msgs__srv__CreateBT_Response__rosidl_typesupport_introspection_c__CreateBT_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, CreateBT_Response)() {
  if (!behavior_tree_msgs__srv__CreateBT_Response__rosidl_typesupport_introspection_c__CreateBT_Response_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__srv__CreateBT_Response__rosidl_typesupport_introspection_c__CreateBT_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__srv__CreateBT_Response__rosidl_typesupport_introspection_c__CreateBT_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "behavior_tree_msgs/srv/detail/create_bt__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers behavior_tree_msgs__srv__detail__create_bt__rosidl_typesupport_introspection_c__CreateBT_service_members = {
  "behavior_tree_msgs__srv",  // service namespace
  "CreateBT",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // behavior_tree_msgs__srv__detail__create_bt__rosidl_typesupport_introspection_c__CreateBT_Request_message_type_support_handle,
  NULL  // response message
  // behavior_tree_msgs__srv__detail__create_bt__rosidl_typesupport_introspection_c__CreateBT_Response_message_type_support_handle
};

static rosidl_service_type_support_t behavior_tree_msgs__srv__detail__create_bt__rosidl_typesupport_introspection_c__CreateBT_service_type_support_handle = {
  0,
  &behavior_tree_msgs__srv__detail__create_bt__rosidl_typesupport_introspection_c__CreateBT_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, CreateBT_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, CreateBT_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, CreateBT)() {
  if (!behavior_tree_msgs__srv__detail__create_bt__rosidl_typesupport_introspection_c__CreateBT_service_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__srv__detail__create_bt__rosidl_typesupport_introspection_c__CreateBT_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)behavior_tree_msgs__srv__detail__create_bt__rosidl_typesupport_introspection_c__CreateBT_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, CreateBT_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, srv, CreateBT_Response)()->data;
  }

  return &behavior_tree_msgs__srv__detail__create_bt__rosidl_typesupport_introspection_c__CreateBT_service_type_support_handle;
}
