// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from behavior_tree_msgs:srv/SetBlackBoard.idl
// generated code does not contain a copyright notice
#include "behavior_tree_msgs/srv/detail/set_black_board__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "behavior_tree_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "behavior_tree_msgs/srv/detail/set_black_board__struct.h"
#include "behavior_tree_msgs/srv/detail/set_black_board__functions.h"
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

#include "behavior_tree_msgs/msg/detail/bb_message__functions.h"  // bb_message

// forward declare type support functions
size_t get_serialized_size_behavior_tree_msgs__msg__BBMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_behavior_tree_msgs__msg__BBMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, BBMessage)();


using _SetBlackBoard_Request__ros_msg_type = behavior_tree_msgs__srv__SetBlackBoard_Request;

static bool _SetBlackBoard_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetBlackBoard_Request__ros_msg_type * ros_message = static_cast<const _SetBlackBoard_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: bb_message
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, BBMessage
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bb_message, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SetBlackBoard_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetBlackBoard_Request__ros_msg_type * ros_message = static_cast<_SetBlackBoard_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: bb_message
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, BBMessage
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bb_message))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_behavior_tree_msgs
size_t get_serialized_size_behavior_tree_msgs__srv__SetBlackBoard_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetBlackBoard_Request__ros_msg_type * ros_message = static_cast<const _SetBlackBoard_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bb_message

  current_alignment += get_serialized_size_behavior_tree_msgs__msg__BBMessage(
    &(ros_message->bb_message), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SetBlackBoard_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_behavior_tree_msgs__srv__SetBlackBoard_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_behavior_tree_msgs
size_t max_serialized_size_behavior_tree_msgs__srv__SetBlackBoard_Request(
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

  // member: bb_message
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_behavior_tree_msgs__msg__BBMessage(
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
    using DataType = behavior_tree_msgs__srv__SetBlackBoard_Request;
    is_plain =
      (
      offsetof(DataType, bb_message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetBlackBoard_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_behavior_tree_msgs__srv__SetBlackBoard_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetBlackBoard_Request = {
  "behavior_tree_msgs::srv",
  "SetBlackBoard_Request",
  _SetBlackBoard_Request__cdr_serialize,
  _SetBlackBoard_Request__cdr_deserialize,
  _SetBlackBoard_Request__get_serialized_size,
  _SetBlackBoard_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetBlackBoard_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetBlackBoard_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, srv, SetBlackBoard_Request)() {
  return &_SetBlackBoard_Request__type_support;
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
// #include "behavior_tree_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "behavior_tree_msgs/srv/detail/set_black_board__struct.h"
// already included above
// #include "behavior_tree_msgs/srv/detail/set_black_board__functions.h"
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

#include "rosidl_runtime_c/string.h"  // behavior_tree
#include "rosidl_runtime_c/string_functions.h"  // behavior_tree

// forward declare type support functions


using _SetBlackBoard_Response__ros_msg_type = behavior_tree_msgs__srv__SetBlackBoard_Response;

static bool _SetBlackBoard_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetBlackBoard_Response__ros_msg_type * ros_message = static_cast<const _SetBlackBoard_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: behavior_tree
  {
    const rosidl_runtime_c__String * str = &ros_message->behavior_tree;
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

static bool _SetBlackBoard_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetBlackBoard_Response__ros_msg_type * ros_message = static_cast<_SetBlackBoard_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: behavior_tree
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->behavior_tree.data) {
      rosidl_runtime_c__String__init(&ros_message->behavior_tree);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->behavior_tree,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'behavior_tree'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_behavior_tree_msgs
size_t get_serialized_size_behavior_tree_msgs__srv__SetBlackBoard_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetBlackBoard_Response__ros_msg_type * ros_message = static_cast<const _SetBlackBoard_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name behavior_tree
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->behavior_tree.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetBlackBoard_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_behavior_tree_msgs__srv__SetBlackBoard_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_behavior_tree_msgs
size_t max_serialized_size_behavior_tree_msgs__srv__SetBlackBoard_Response(
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

  // member: behavior_tree
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
    using DataType = behavior_tree_msgs__srv__SetBlackBoard_Response;
    is_plain =
      (
      offsetof(DataType, behavior_tree) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetBlackBoard_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_behavior_tree_msgs__srv__SetBlackBoard_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetBlackBoard_Response = {
  "behavior_tree_msgs::srv",
  "SetBlackBoard_Response",
  _SetBlackBoard_Response__cdr_serialize,
  _SetBlackBoard_Response__cdr_deserialize,
  _SetBlackBoard_Response__get_serialized_size,
  _SetBlackBoard_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetBlackBoard_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetBlackBoard_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, srv, SetBlackBoard_Response)() {
  return &_SetBlackBoard_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "behavior_tree_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "behavior_tree_msgs/srv/set_black_board.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetBlackBoard__callbacks = {
  "behavior_tree_msgs::srv",
  "SetBlackBoard",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, srv, SetBlackBoard_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, srv, SetBlackBoard_Response)(),
};

static rosidl_service_type_support_t SetBlackBoard__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetBlackBoard__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, srv, SetBlackBoard)() {
  return &SetBlackBoard__handle;
}

#if defined(__cplusplus)
}
#endif
