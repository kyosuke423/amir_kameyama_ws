// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from failure_detection_msgs:srv/AfterPick.idl
// generated code does not contain a copyright notice
#include "failure_detection_msgs/srv/detail/after_pick__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "failure_detection_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "failure_detection_msgs/srv/detail/after_pick__struct.h"
#include "failure_detection_msgs/srv/detail/after_pick__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "moveit_msgs/msg/detail/attached_collision_object__functions.h"  // grasped_object
#include "rosidl_runtime_c/string.h"  // bt_node_name, error_string
#include "rosidl_runtime_c/string_functions.h"  // bt_node_name, error_string

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_failure_detection_msgs
size_t get_serialized_size_moveit_msgs__msg__AttachedCollisionObject(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_failure_detection_msgs
size_t max_serialized_size_moveit_msgs__msg__AttachedCollisionObject(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_failure_detection_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, AttachedCollisionObject)();


using _AfterPick_Request__ros_msg_type = failure_detection_msgs__srv__AfterPick_Request;

static bool _AfterPick_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AfterPick_Request__ros_msg_type * ros_message = static_cast<const _AfterPick_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: bt_node_name
  {
    const rosidl_runtime_c__String * str = &ros_message->bt_node_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: error_string
  {
    const rosidl_runtime_c__String * str = &ros_message->error_string;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: grasped_object
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, AttachedCollisionObject
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->grasped_object, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AfterPick_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AfterPick_Request__ros_msg_type * ros_message = static_cast<_AfterPick_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: bt_node_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bt_node_name.data) {
      rosidl_runtime_c__String__init(&ros_message->bt_node_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->bt_node_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bt_node_name'\n");
      return false;
    }
  }

  // Field name: error_string
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_string.data) {
      rosidl_runtime_c__String__init(&ros_message->error_string);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_string,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_string'\n");
      return false;
    }
  }

  // Field name: grasped_object
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, AttachedCollisionObject
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->grasped_object))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_failure_detection_msgs
size_t get_serialized_size_failure_detection_msgs__srv__AfterPick_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AfterPick_Request__ros_msg_type * ros_message = static_cast<const _AfterPick_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bt_node_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bt_node_name.size + 1);
  // field.name error_string
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_string.size + 1);
  // field.name grasped_object

  current_alignment += get_serialized_size_moveit_msgs__msg__AttachedCollisionObject(
    &(ros_message->grasped_object), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AfterPick_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_failure_detection_msgs__srv__AfterPick_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_failure_detection_msgs
size_t max_serialized_size_failure_detection_msgs__srv__AfterPick_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: bt_node_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: error_string
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: grasped_object
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__AttachedCollisionObject(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = failure_detection_msgs__srv__AfterPick_Request;
    is_plain =
      (
      offsetof(DataType, grasped_object) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AfterPick_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_failure_detection_msgs__srv__AfterPick_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AfterPick_Request = {
  "failure_detection_msgs::srv",
  "AfterPick_Request",
  _AfterPick_Request__cdr_serialize,
  _AfterPick_Request__cdr_deserialize,
  _AfterPick_Request__get_serialized_size,
  _AfterPick_Request__max_serialized_size
};

static rosidl_message_type_support_t _AfterPick_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AfterPick_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, failure_detection_msgs, srv, AfterPick_Request)() {
  return &_AfterPick_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "failure_detection_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "failure_detection_msgs/srv/detail/after_pick__struct.h"
// already included above
// #include "failure_detection_msgs/srv/detail/after_pick__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // command
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // command

// forward declare type support functions


using _AfterPick_Response__ros_msg_type = failure_detection_msgs__srv__AfterPick_Response;

static bool _AfterPick_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AfterPick_Response__ros_msg_type * ros_message = static_cast<const _AfterPick_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: command
  {
    const rosidl_runtime_c__String * str = &ros_message->command;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _AfterPick_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AfterPick_Response__ros_msg_type * ros_message = static_cast<_AfterPick_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: command
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->command.data) {
      rosidl_runtime_c__String__init(&ros_message->command);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->command,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'command'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_failure_detection_msgs
size_t get_serialized_size_failure_detection_msgs__srv__AfterPick_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AfterPick_Response__ros_msg_type * ros_message = static_cast<const _AfterPick_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name command
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->command.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _AfterPick_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_failure_detection_msgs__srv__AfterPick_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_failure_detection_msgs
size_t max_serialized_size_failure_detection_msgs__srv__AfterPick_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: command
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = failure_detection_msgs__srv__AfterPick_Response;
    is_plain =
      (
      offsetof(DataType, command) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AfterPick_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_failure_detection_msgs__srv__AfterPick_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AfterPick_Response = {
  "failure_detection_msgs::srv",
  "AfterPick_Response",
  _AfterPick_Response__cdr_serialize,
  _AfterPick_Response__cdr_deserialize,
  _AfterPick_Response__get_serialized_size,
  _AfterPick_Response__max_serialized_size
};

static rosidl_message_type_support_t _AfterPick_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AfterPick_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, failure_detection_msgs, srv, AfterPick_Response)() {
  return &_AfterPick_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "failure_detection_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "failure_detection_msgs/srv/after_pick.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AfterPick__callbacks = {
  "failure_detection_msgs::srv",
  "AfterPick",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, failure_detection_msgs, srv, AfterPick_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, failure_detection_msgs, srv, AfterPick_Response)(),
};

static rosidl_service_type_support_t AfterPick__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AfterPick__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, failure_detection_msgs, srv, AfterPick)() {
  return &AfterPick__handle;
}

#if defined(__cplusplus)
}
#endif
