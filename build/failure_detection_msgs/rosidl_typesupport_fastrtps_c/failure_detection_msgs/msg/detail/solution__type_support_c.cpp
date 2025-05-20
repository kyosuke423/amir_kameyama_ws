// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from failure_detection_msgs:msg/Solution.idl
// generated code does not contain a copyright notice
#include "failure_detection_msgs/msg/detail/solution__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "failure_detection_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "failure_detection_msgs/msg/detail/solution__struct.h"
#include "failure_detection_msgs/msg/detail/solution__functions.h"
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
#include "rosidl_runtime_c/primitives_sequence.h"  // priorities
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // priorities
#include "rosidl_runtime_c/string.h"  // bt_node_name, solutions
#include "rosidl_runtime_c/string_functions.h"  // bt_node_name, solutions

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_failure_detection_msgs
size_t get_serialized_size_behavior_tree_msgs__msg__BBMessage(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_failure_detection_msgs
size_t max_serialized_size_behavior_tree_msgs__msg__BBMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_failure_detection_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, BBMessage)();


using _Solution__ros_msg_type = failure_detection_msgs__msg__Solution;

static bool _Solution__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Solution__ros_msg_type * ros_message = static_cast<const _Solution__ros_msg_type *>(untyped_ros_message);
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

  // Field name: solutions
  {
    size_t size = ros_message->solutions.size;
    auto array_ptr = ros_message->solutions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: priorities
  {
    size_t size = ros_message->priorities.size;
    auto array_ptr = ros_message->priorities.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

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

static bool _Solution__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Solution__ros_msg_type * ros_message = static_cast<_Solution__ros_msg_type *>(untyped_ros_message);
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

  // Field name: solutions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->solutions.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->solutions);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->solutions, size)) {
      fprintf(stderr, "failed to create array for field 'solutions'");
      return false;
    }
    auto array_ptr = ros_message->solutions.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'solutions'\n");
        return false;
      }
    }
  }

  // Field name: priorities
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->priorities.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->priorities);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->priorities, size)) {
      fprintf(stderr, "failed to create array for field 'priorities'");
      return false;
    }
    auto array_ptr = ros_message->priorities.data;
    cdr.deserializeArray(array_ptr, size);
  }

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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_failure_detection_msgs
size_t get_serialized_size_failure_detection_msgs__msg__Solution(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Solution__ros_msg_type * ros_message = static_cast<const _Solution__ros_msg_type *>(untyped_ros_message);
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
  // field.name solutions
  {
    size_t array_size = ros_message->solutions.size;
    auto array_ptr = ros_message->solutions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name priorities
  {
    size_t array_size = ros_message->priorities.size;
    auto array_ptr = ros_message->priorities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bb_message

  current_alignment += get_serialized_size_behavior_tree_msgs__msg__BBMessage(
    &(ros_message->bb_message), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Solution__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_failure_detection_msgs__msg__Solution(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_failure_detection_msgs
size_t max_serialized_size_failure_detection_msgs__msg__Solution(
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
  // member: solutions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: priorities
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
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
    using DataType = failure_detection_msgs__msg__Solution;
    is_plain =
      (
      offsetof(DataType, bb_message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Solution__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_failure_detection_msgs__msg__Solution(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Solution = {
  "failure_detection_msgs::msg",
  "Solution",
  _Solution__cdr_serialize,
  _Solution__cdr_deserialize,
  _Solution__get_serialized_size,
  _Solution__max_serialized_size
};

static rosidl_message_type_support_t _Solution__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Solution,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, failure_detection_msgs, msg, Solution)() {
  return &_Solution__type_support;
}

#if defined(__cplusplus)
}
#endif
