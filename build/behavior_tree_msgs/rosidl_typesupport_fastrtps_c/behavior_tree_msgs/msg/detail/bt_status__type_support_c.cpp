// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from behavior_tree_msgs:msg/BTStatus.idl
// generated code does not contain a copyright notice
#include "behavior_tree_msgs/msg/detail/bt_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "behavior_tree_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "behavior_tree_msgs/msg/detail/bt_status__struct.h"
#include "behavior_tree_msgs/msg/detail/bt_status__functions.h"
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

#include "behavior_tree_msgs/msg/detail/node_status__functions.h"  // bt_status, root_status
#include "rosidl_runtime_c/string.h"  // bt
#include "rosidl_runtime_c/string_functions.h"  // bt

// forward declare type support functions
size_t get_serialized_size_behavior_tree_msgs__msg__NodeStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_behavior_tree_msgs__msg__NodeStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, NodeStatus)();


using _BTStatus__ros_msg_type = behavior_tree_msgs__msg__BTStatus;

static bool _BTStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BTStatus__ros_msg_type * ros_message = static_cast<const _BTStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: bt
  {
    const rosidl_runtime_c__String * str = &ros_message->bt;
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

  // Field name: root_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, NodeStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->root_status, cdr))
    {
      return false;
    }
  }

  // Field name: bt_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, NodeStatus
      )()->data);
    size_t size = ros_message->bt_status.size;
    auto array_ptr = ros_message->bt_status.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _BTStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BTStatus__ros_msg_type * ros_message = static_cast<_BTStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: bt
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bt.data) {
      rosidl_runtime_c__String__init(&ros_message->bt);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->bt,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bt'\n");
      return false;
    }
  }

  // Field name: root_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, NodeStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->root_status))
    {
      return false;
    }
  }

  // Field name: bt_status
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, NodeStatus
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bt_status.data) {
      behavior_tree_msgs__msg__NodeStatus__Sequence__fini(&ros_message->bt_status);
    }
    if (!behavior_tree_msgs__msg__NodeStatus__Sequence__init(&ros_message->bt_status, size)) {
      fprintf(stderr, "failed to create array for field 'bt_status'");
      return false;
    }
    auto array_ptr = ros_message->bt_status.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_behavior_tree_msgs
size_t get_serialized_size_behavior_tree_msgs__msg__BTStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BTStatus__ros_msg_type * ros_message = static_cast<const _BTStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bt
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bt.size + 1);
  // field.name root_status

  current_alignment += get_serialized_size_behavior_tree_msgs__msg__NodeStatus(
    &(ros_message->root_status), current_alignment);
  // field.name bt_status
  {
    size_t array_size = ros_message->bt_status.size;
    auto array_ptr = ros_message->bt_status.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_behavior_tree_msgs__msg__NodeStatus(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BTStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_behavior_tree_msgs__msg__BTStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_behavior_tree_msgs
size_t max_serialized_size_behavior_tree_msgs__msg__BTStatus(
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

  // member: bt
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
  // member: root_status
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_behavior_tree_msgs__msg__NodeStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: bt_status
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_behavior_tree_msgs__msg__NodeStatus(
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
    using DataType = behavior_tree_msgs__msg__BTStatus;
    is_plain =
      (
      offsetof(DataType, bt_status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BTStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_behavior_tree_msgs__msg__BTStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BTStatus = {
  "behavior_tree_msgs::msg",
  "BTStatus",
  _BTStatus__cdr_serialize,
  _BTStatus__cdr_deserialize,
  _BTStatus__get_serialized_size,
  _BTStatus__max_serialized_size
};

static rosidl_message_type_support_t _BTStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BTStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, BTStatus)() {
  return &_BTStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
