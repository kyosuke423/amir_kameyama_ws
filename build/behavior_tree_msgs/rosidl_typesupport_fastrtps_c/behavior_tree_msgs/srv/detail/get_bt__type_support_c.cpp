// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from behavior_tree_msgs:srv/GetBT.idl
// generated code does not contain a copyright notice
#include "behavior_tree_msgs/srv/detail/get_bt__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "behavior_tree_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "behavior_tree_msgs/srv/detail/get_bt__struct.h"
#include "behavior_tree_msgs/srv/detail/get_bt__functions.h"
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

#include "rosidl_runtime_c/string.h"  // bt, goal_condition, goal_conditions, type
#include "rosidl_runtime_c/string_functions.h"  // bt, goal_condition, goal_conditions, type

// forward declare type support functions


using _GetBT_Request__ros_msg_type = behavior_tree_msgs__srv__GetBT_Request;

static bool _GetBT_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetBT_Request__ros_msg_type * ros_message = static_cast<const _GetBT_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    const rosidl_runtime_c__String * str = &ros_message->type;
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

  // Field name: goal_condition
  {
    const rosidl_runtime_c__String * str = &ros_message->goal_condition;
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

  // Field name: goal_conditions
  {
    size_t size = ros_message->goal_conditions.size;
    auto array_ptr = ros_message->goal_conditions.data;
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

  // Field name: failed_nood_id
  {
    cdr << ros_message->failed_nood_id;
  }

  return true;
}

static bool _GetBT_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetBT_Request__ros_msg_type * ros_message = static_cast<_GetBT_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->type.data) {
      rosidl_runtime_c__String__init(&ros_message->type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'type'\n");
      return false;
    }
  }

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

  // Field name: goal_condition
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->goal_condition.data) {
      rosidl_runtime_c__String__init(&ros_message->goal_condition);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->goal_condition,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'goal_condition'\n");
      return false;
    }
  }

  // Field name: goal_conditions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->goal_conditions.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->goal_conditions);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->goal_conditions, size)) {
      fprintf(stderr, "failed to create array for field 'goal_conditions'");
      return false;
    }
    auto array_ptr = ros_message->goal_conditions.data;
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
        fprintf(stderr, "failed to assign string into field 'goal_conditions'\n");
        return false;
      }
    }
  }

  // Field name: failed_nood_id
  {
    cdr >> ros_message->failed_nood_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_behavior_tree_msgs
size_t get_serialized_size_behavior_tree_msgs__srv__GetBT_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetBT_Request__ros_msg_type * ros_message = static_cast<const _GetBT_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type.size + 1);
  // field.name bt
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bt.size + 1);
  // field.name goal_condition
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->goal_condition.size + 1);
  // field.name goal_conditions
  {
    size_t array_size = ros_message->goal_conditions.size;
    auto array_ptr = ros_message->goal_conditions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name failed_nood_id
  {
    size_t item_size = sizeof(ros_message->failed_nood_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetBT_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_behavior_tree_msgs__srv__GetBT_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_behavior_tree_msgs
size_t max_serialized_size_behavior_tree_msgs__srv__GetBT_Request(
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

  // member: type
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
  // member: goal_condition
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
  // member: goal_conditions
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
  // member: failed_nood_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = behavior_tree_msgs__srv__GetBT_Request;
    is_plain =
      (
      offsetof(DataType, failed_nood_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetBT_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_behavior_tree_msgs__srv__GetBT_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetBT_Request = {
  "behavior_tree_msgs::srv",
  "GetBT_Request",
  _GetBT_Request__cdr_serialize,
  _GetBT_Request__cdr_deserialize,
  _GetBT_Request__get_serialized_size,
  _GetBT_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetBT_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetBT_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, srv, GetBT_Request)() {
  return &_GetBT_Request__type_support;
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
// #include "behavior_tree_msgs/srv/detail/get_bt__struct.h"
// already included above
// #include "behavior_tree_msgs/srv/detail/get_bt__functions.h"
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
// #include "rosidl_runtime_c/string.h"  // behavior_tree
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // behavior_tree

// forward declare type support functions


using _GetBT_Response__ros_msg_type = behavior_tree_msgs__srv__GetBT_Response;

static bool _GetBT_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetBT_Response__ros_msg_type * ros_message = static_cast<const _GetBT_Response__ros_msg_type *>(untyped_ros_message);
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

static bool _GetBT_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetBT_Response__ros_msg_type * ros_message = static_cast<_GetBT_Response__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_behavior_tree_msgs__srv__GetBT_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetBT_Response__ros_msg_type * ros_message = static_cast<const _GetBT_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _GetBT_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_behavior_tree_msgs__srv__GetBT_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_behavior_tree_msgs
size_t max_serialized_size_behavior_tree_msgs__srv__GetBT_Response(
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
    using DataType = behavior_tree_msgs__srv__GetBT_Response;
    is_plain =
      (
      offsetof(DataType, behavior_tree) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetBT_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_behavior_tree_msgs__srv__GetBT_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetBT_Response = {
  "behavior_tree_msgs::srv",
  "GetBT_Response",
  _GetBT_Response__cdr_serialize,
  _GetBT_Response__cdr_deserialize,
  _GetBT_Response__get_serialized_size,
  _GetBT_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetBT_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetBT_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, srv, GetBT_Response)() {
  return &_GetBT_Response__type_support;
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
#include "behavior_tree_msgs/srv/get_bt.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetBT__callbacks = {
  "behavior_tree_msgs::srv",
  "GetBT",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, srv, GetBT_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, srv, GetBT_Response)(),
};

static rosidl_service_type_support_t GetBT__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetBT__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, srv, GetBT)() {
  return &GetBT__handle;
}

#if defined(__cplusplus)
}
#endif
