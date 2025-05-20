// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_nav_msgs:msg/PathInfo.idl
// generated code does not contain a copyright notice
#include "my_nav_msgs/msg/detail/path_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_nav_msgs/msg/detail/path_info__struct.h"
#include "my_nav_msgs/msg/detail/path_info__functions.h"
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

#include "rosidl_runtime_c/string.h"  // remove_id_set
#include "rosidl_runtime_c/string_functions.h"  // remove_id_set

// forward declare type support functions


using _PathInfo__ros_msg_type = my_nav_msgs__msg__PathInfo;

static bool _PathInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathInfo__ros_msg_type * ros_message = static_cast<const _PathInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: remove_id_set
  {
    size_t size = ros_message->remove_id_set.size;
    auto array_ptr = ros_message->remove_id_set.data;
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

  // Field name: success_rate
  {
    cdr << ros_message->success_rate;
  }

  return true;
}

static bool _PathInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathInfo__ros_msg_type * ros_message = static_cast<_PathInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: remove_id_set
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->remove_id_set.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->remove_id_set);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->remove_id_set, size)) {
      fprintf(stderr, "failed to create array for field 'remove_id_set'");
      return false;
    }
    auto array_ptr = ros_message->remove_id_set.data;
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
        fprintf(stderr, "failed to assign string into field 'remove_id_set'\n");
        return false;
      }
    }
  }

  // Field name: success_rate
  {
    cdr >> ros_message->success_rate;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_nav_msgs
size_t get_serialized_size_my_nav_msgs__msg__PathInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathInfo__ros_msg_type * ros_message = static_cast<const _PathInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name remove_id_set
  {
    size_t array_size = ros_message->remove_id_set.size;
    auto array_ptr = ros_message->remove_id_set.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name success_rate
  {
    size_t item_size = sizeof(ros_message->success_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PathInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_nav_msgs__msg__PathInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_nav_msgs
size_t max_serialized_size_my_nav_msgs__msg__PathInfo(
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

  // member: remove_id_set
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
  // member: success_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_nav_msgs__msg__PathInfo;
    is_plain =
      (
      offsetof(DataType, success_rate) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PathInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_nav_msgs__msg__PathInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PathInfo = {
  "my_nav_msgs::msg",
  "PathInfo",
  _PathInfo__cdr_serialize,
  _PathInfo__cdr_deserialize,
  _PathInfo__get_serialized_size,
  _PathInfo__max_serialized_size
};

static rosidl_message_type_support_t _PathInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_nav_msgs, msg, PathInfo)() {
  return &_PathInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
