// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from failure_detection_msgs:srv/PathCheck.idl
// generated code does not contain a copyright notice
#include "failure_detection_msgs/srv/detail/path_check__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "failure_detection_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "failure_detection_msgs/srv/detail/path_check__struct.h"
#include "failure_detection_msgs/srv/detail/path_check__functions.h"
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

#include "my_nav_msgs/msg/detail/path_with_condition__functions.h"  // paths

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_failure_detection_msgs
size_t get_serialized_size_my_nav_msgs__msg__PathWithCondition(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_failure_detection_msgs
size_t max_serialized_size_my_nav_msgs__msg__PathWithCondition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_failure_detection_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_nav_msgs, msg, PathWithCondition)();


using _PathCheck_Request__ros_msg_type = failure_detection_msgs__srv__PathCheck_Request;

static bool _PathCheck_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathCheck_Request__ros_msg_type * ros_message = static_cast<const _PathCheck_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: paths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, my_nav_msgs, msg, PathWithCondition
      )()->data);
    size_t size = ros_message->paths.size;
    auto array_ptr = ros_message->paths.data;
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

static bool _PathCheck_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathCheck_Request__ros_msg_type * ros_message = static_cast<_PathCheck_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: paths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, my_nav_msgs, msg, PathWithCondition
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->paths.data) {
      my_nav_msgs__msg__PathWithCondition__Sequence__fini(&ros_message->paths);
    }
    if (!my_nav_msgs__msg__PathWithCondition__Sequence__init(&ros_message->paths, size)) {
      fprintf(stderr, "failed to create array for field 'paths'");
      return false;
    }
    auto array_ptr = ros_message->paths.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_failure_detection_msgs
size_t get_serialized_size_failure_detection_msgs__srv__PathCheck_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathCheck_Request__ros_msg_type * ros_message = static_cast<const _PathCheck_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name paths
  {
    size_t array_size = ros_message->paths.size;
    auto array_ptr = ros_message->paths.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_my_nav_msgs__msg__PathWithCondition(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PathCheck_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_failure_detection_msgs__srv__PathCheck_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_failure_detection_msgs
size_t max_serialized_size_failure_detection_msgs__srv__PathCheck_Request(
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

  // member: paths
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
        max_serialized_size_my_nav_msgs__msg__PathWithCondition(
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
    using DataType = failure_detection_msgs__srv__PathCheck_Request;
    is_plain =
      (
      offsetof(DataType, paths) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PathCheck_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_failure_detection_msgs__srv__PathCheck_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PathCheck_Request = {
  "failure_detection_msgs::srv",
  "PathCheck_Request",
  _PathCheck_Request__cdr_serialize,
  _PathCheck_Request__cdr_deserialize,
  _PathCheck_Request__get_serialized_size,
  _PathCheck_Request__max_serialized_size
};

static rosidl_message_type_support_t _PathCheck_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathCheck_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, failure_detection_msgs, srv, PathCheck_Request)() {
  return &_PathCheck_Request__type_support;
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
// #include "failure_detection_msgs/srv/detail/path_check__struct.h"
// already included above
// #include "failure_detection_msgs/srv/detail/path_check__functions.h"
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

#include "my_nav_msgs/msg/detail/path_info__functions.h"  // info_set
#include "rosidl_runtime_c/string.h"  // error_strings
#include "rosidl_runtime_c/string_functions.h"  // error_strings

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_failure_detection_msgs
size_t get_serialized_size_my_nav_msgs__msg__PathInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_failure_detection_msgs
size_t max_serialized_size_my_nav_msgs__msg__PathInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_failure_detection_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_nav_msgs, msg, PathInfo)();


using _PathCheck_Response__ros_msg_type = failure_detection_msgs__srv__PathCheck_Response;

static bool _PathCheck_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathCheck_Response__ros_msg_type * ros_message = static_cast<const _PathCheck_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: error_strings
  {
    const rosidl_runtime_c__String * str = &ros_message->error_strings;
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

  // Field name: info_set
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, my_nav_msgs, msg, PathInfo
      )()->data);
    size_t size = ros_message->info_set.size;
    auto array_ptr = ros_message->info_set.data;
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

static bool _PathCheck_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathCheck_Response__ros_msg_type * ros_message = static_cast<_PathCheck_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: error_strings
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_strings.data) {
      rosidl_runtime_c__String__init(&ros_message->error_strings);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_strings,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_strings'\n");
      return false;
    }
  }

  // Field name: info_set
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, my_nav_msgs, msg, PathInfo
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->info_set.data) {
      my_nav_msgs__msg__PathInfo__Sequence__fini(&ros_message->info_set);
    }
    if (!my_nav_msgs__msg__PathInfo__Sequence__init(&ros_message->info_set, size)) {
      fprintf(stderr, "failed to create array for field 'info_set'");
      return false;
    }
    auto array_ptr = ros_message->info_set.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_failure_detection_msgs
size_t get_serialized_size_failure_detection_msgs__srv__PathCheck_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathCheck_Response__ros_msg_type * ros_message = static_cast<const _PathCheck_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name error_strings
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_strings.size + 1);
  // field.name info_set
  {
    size_t array_size = ros_message->info_set.size;
    auto array_ptr = ros_message->info_set.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_my_nav_msgs__msg__PathInfo(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PathCheck_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_failure_detection_msgs__srv__PathCheck_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_failure_detection_msgs
size_t max_serialized_size_failure_detection_msgs__srv__PathCheck_Response(
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

  // member: error_strings
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
  // member: info_set
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
        max_serialized_size_my_nav_msgs__msg__PathInfo(
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
    using DataType = failure_detection_msgs__srv__PathCheck_Response;
    is_plain =
      (
      offsetof(DataType, info_set) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PathCheck_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_failure_detection_msgs__srv__PathCheck_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PathCheck_Response = {
  "failure_detection_msgs::srv",
  "PathCheck_Response",
  _PathCheck_Response__cdr_serialize,
  _PathCheck_Response__cdr_deserialize,
  _PathCheck_Response__get_serialized_size,
  _PathCheck_Response__max_serialized_size
};

static rosidl_message_type_support_t _PathCheck_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathCheck_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, failure_detection_msgs, srv, PathCheck_Response)() {
  return &_PathCheck_Response__type_support;
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
#include "failure_detection_msgs/srv/path_check.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t PathCheck__callbacks = {
  "failure_detection_msgs::srv",
  "PathCheck",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, failure_detection_msgs, srv, PathCheck_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, failure_detection_msgs, srv, PathCheck_Response)(),
};

static rosidl_service_type_support_t PathCheck__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &PathCheck__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, failure_detection_msgs, srv, PathCheck)() {
  return &PathCheck__handle;
}

#if defined(__cplusplus)
}
#endif
