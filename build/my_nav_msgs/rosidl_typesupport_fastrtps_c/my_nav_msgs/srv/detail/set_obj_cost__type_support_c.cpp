// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_nav_msgs:srv/SetObjCost.idl
// generated code does not contain a copyright notice
#include "my_nav_msgs/srv/detail/set_obj_cost__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_nav_msgs/srv/detail/set_obj_cost__struct.h"
#include "my_nav_msgs/srv/detail/set_obj_cost__functions.h"
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

#include "visualization_msgs/msg/detail/marker_array__functions.h"  // markers

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_my_nav_msgs
size_t get_serialized_size_visualization_msgs__msg__MarkerArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_my_nav_msgs
size_t max_serialized_size_visualization_msgs__msg__MarkerArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_my_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, visualization_msgs, msg, MarkerArray)();


using _SetObjCost_Request__ros_msg_type = my_nav_msgs__srv__SetObjCost_Request;

static bool _SetObjCost_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetObjCost_Request__ros_msg_type * ros_message = static_cast<const _SetObjCost_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: markers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, visualization_msgs, msg, MarkerArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->markers, cdr))
    {
      return false;
    }
  }

  // Field name: partial_update
  {
    cdr << (ros_message->partial_update ? true : false);
  }

  return true;
}

static bool _SetObjCost_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetObjCost_Request__ros_msg_type * ros_message = static_cast<_SetObjCost_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: markers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, visualization_msgs, msg, MarkerArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->markers))
    {
      return false;
    }
  }

  // Field name: partial_update
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->partial_update = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_nav_msgs
size_t get_serialized_size_my_nav_msgs__srv__SetObjCost_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetObjCost_Request__ros_msg_type * ros_message = static_cast<const _SetObjCost_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name markers

  current_alignment += get_serialized_size_visualization_msgs__msg__MarkerArray(
    &(ros_message->markers), current_alignment);
  // field.name partial_update
  {
    size_t item_size = sizeof(ros_message->partial_update);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetObjCost_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_nav_msgs__srv__SetObjCost_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_nav_msgs
size_t max_serialized_size_my_nav_msgs__srv__SetObjCost_Request(
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

  // member: markers
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_visualization_msgs__msg__MarkerArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: partial_update
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_nav_msgs__srv__SetObjCost_Request;
    is_plain =
      (
      offsetof(DataType, partial_update) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetObjCost_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_nav_msgs__srv__SetObjCost_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetObjCost_Request = {
  "my_nav_msgs::srv",
  "SetObjCost_Request",
  _SetObjCost_Request__cdr_serialize,
  _SetObjCost_Request__cdr_deserialize,
  _SetObjCost_Request__get_serialized_size,
  _SetObjCost_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetObjCost_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetObjCost_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_nav_msgs, srv, SetObjCost_Request)() {
  return &_SetObjCost_Request__type_support;
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
// #include "my_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "my_nav_msgs/srv/detail/set_obj_cost__struct.h"
// already included above
// #include "my_nav_msgs/srv/detail/set_obj_cost__functions.h"
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

#include "rosidl_runtime_c/string.h"  // error_string
#include "rosidl_runtime_c/string_functions.h"  // error_string
// already included above
// #include "visualization_msgs/msg/detail/marker_array__functions.h"  // set_markers

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_my_nav_msgs
size_t get_serialized_size_visualization_msgs__msg__MarkerArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_my_nav_msgs
size_t max_serialized_size_visualization_msgs__msg__MarkerArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_my_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, visualization_msgs, msg, MarkerArray)();


using _SetObjCost_Response__ros_msg_type = my_nav_msgs__srv__SetObjCost_Response;

static bool _SetObjCost_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetObjCost_Response__ros_msg_type * ros_message = static_cast<const _SetObjCost_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: set_markers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, visualization_msgs, msg, MarkerArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->set_markers, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SetObjCost_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetObjCost_Response__ros_msg_type * ros_message = static_cast<_SetObjCost_Response__ros_msg_type *>(untyped_ros_message);
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

  // Field name: set_markers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, visualization_msgs, msg, MarkerArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->set_markers))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_nav_msgs
size_t get_serialized_size_my_nav_msgs__srv__SetObjCost_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetObjCost_Response__ros_msg_type * ros_message = static_cast<const _SetObjCost_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name error_string
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_string.size + 1);
  // field.name set_markers

  current_alignment += get_serialized_size_visualization_msgs__msg__MarkerArray(
    &(ros_message->set_markers), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SetObjCost_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_nav_msgs__srv__SetObjCost_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_nav_msgs
size_t max_serialized_size_my_nav_msgs__srv__SetObjCost_Response(
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
  // member: set_markers
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_visualization_msgs__msg__MarkerArray(
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
    using DataType = my_nav_msgs__srv__SetObjCost_Response;
    is_plain =
      (
      offsetof(DataType, set_markers) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetObjCost_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_nav_msgs__srv__SetObjCost_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetObjCost_Response = {
  "my_nav_msgs::srv",
  "SetObjCost_Response",
  _SetObjCost_Response__cdr_serialize,
  _SetObjCost_Response__cdr_deserialize,
  _SetObjCost_Response__get_serialized_size,
  _SetObjCost_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetObjCost_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetObjCost_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_nav_msgs, srv, SetObjCost_Response)() {
  return &_SetObjCost_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "my_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_nav_msgs/srv/set_obj_cost.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetObjCost__callbacks = {
  "my_nav_msgs::srv",
  "SetObjCost",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_nav_msgs, srv, SetObjCost_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_nav_msgs, srv, SetObjCost_Response)(),
};

static rosidl_service_type_support_t SetObjCost__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetObjCost__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_nav_msgs, srv, SetObjCost)() {
  return &SetObjCost__handle;
}

#if defined(__cplusplus)
}
#endif
