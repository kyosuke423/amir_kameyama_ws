// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from behavior_tree_msgs:srv/GetBlackBoard.idl
// generated code does not contain a copyright notice
#include "behavior_tree_msgs/srv/detail/get_black_board__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "behavior_tree_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "behavior_tree_msgs/srv/detail/get_black_board__struct.h"
#include "behavior_tree_msgs/srv/detail/get_black_board__functions.h"
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

#include "rosidl_runtime_c/string.h"  // float_array_names, path_names, pose_names
#include "rosidl_runtime_c/string_functions.h"  // float_array_names, path_names, pose_names

// forward declare type support functions


using _GetBlackBoard_Request__ros_msg_type = behavior_tree_msgs__srv__GetBlackBoard_Request;

static bool _GetBlackBoard_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetBlackBoard_Request__ros_msg_type * ros_message = static_cast<const _GetBlackBoard_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pose_names
  {
    size_t size = ros_message->pose_names.size;
    auto array_ptr = ros_message->pose_names.data;
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

  // Field name: path_names
  {
    size_t size = ros_message->path_names.size;
    auto array_ptr = ros_message->path_names.data;
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

  // Field name: float_array_names
  {
    size_t size = ros_message->float_array_names.size;
    auto array_ptr = ros_message->float_array_names.data;
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

  return true;
}

static bool _GetBlackBoard_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetBlackBoard_Request__ros_msg_type * ros_message = static_cast<_GetBlackBoard_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pose_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pose_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->pose_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->pose_names, size)) {
      fprintf(stderr, "failed to create array for field 'pose_names'");
      return false;
    }
    auto array_ptr = ros_message->pose_names.data;
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
        fprintf(stderr, "failed to assign string into field 'pose_names'\n");
        return false;
      }
    }
  }

  // Field name: path_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->path_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->path_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->path_names, size)) {
      fprintf(stderr, "failed to create array for field 'path_names'");
      return false;
    }
    auto array_ptr = ros_message->path_names.data;
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
        fprintf(stderr, "failed to assign string into field 'path_names'\n");
        return false;
      }
    }
  }

  // Field name: float_array_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->float_array_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->float_array_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->float_array_names, size)) {
      fprintf(stderr, "failed to create array for field 'float_array_names'");
      return false;
    }
    auto array_ptr = ros_message->float_array_names.data;
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
        fprintf(stderr, "failed to assign string into field 'float_array_names'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_behavior_tree_msgs
size_t get_serialized_size_behavior_tree_msgs__srv__GetBlackBoard_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetBlackBoard_Request__ros_msg_type * ros_message = static_cast<const _GetBlackBoard_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pose_names
  {
    size_t array_size = ros_message->pose_names.size;
    auto array_ptr = ros_message->pose_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name path_names
  {
    size_t array_size = ros_message->path_names.size;
    auto array_ptr = ros_message->path_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name float_array_names
  {
    size_t array_size = ros_message->float_array_names.size;
    auto array_ptr = ros_message->float_array_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetBlackBoard_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_behavior_tree_msgs__srv__GetBlackBoard_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_behavior_tree_msgs
size_t max_serialized_size_behavior_tree_msgs__srv__GetBlackBoard_Request(
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

  // member: pose_names
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
  // member: path_names
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
  // member: float_array_names
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = behavior_tree_msgs__srv__GetBlackBoard_Request;
    is_plain =
      (
      offsetof(DataType, float_array_names) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetBlackBoard_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_behavior_tree_msgs__srv__GetBlackBoard_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetBlackBoard_Request = {
  "behavior_tree_msgs::srv",
  "GetBlackBoard_Request",
  _GetBlackBoard_Request__cdr_serialize,
  _GetBlackBoard_Request__cdr_deserialize,
  _GetBlackBoard_Request__get_serialized_size,
  _GetBlackBoard_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetBlackBoard_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetBlackBoard_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, srv, GetBlackBoard_Request)() {
  return &_GetBlackBoard_Request__type_support;
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
// #include "behavior_tree_msgs/srv/detail/get_black_board__struct.h"
// already included above
// #include "behavior_tree_msgs/srv/detail/get_black_board__functions.h"
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

#include "behavior_tree_msgs/msg/detail/bb_float64_array__functions.h"  // float_array_set
#include "behavior_tree_msgs/msg/detail/bb_path__functions.h"  // paths
#include "behavior_tree_msgs/msg/detail/bb_pose__functions.h"  // poses

// forward declare type support functions
size_t get_serialized_size_behavior_tree_msgs__msg__BBFloat64Array(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_behavior_tree_msgs__msg__BBFloat64Array(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, BBFloat64Array)();
size_t get_serialized_size_behavior_tree_msgs__msg__BBPath(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_behavior_tree_msgs__msg__BBPath(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, BBPath)();
size_t get_serialized_size_behavior_tree_msgs__msg__BBPose(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_behavior_tree_msgs__msg__BBPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, BBPose)();


using _GetBlackBoard_Response__ros_msg_type = behavior_tree_msgs__srv__GetBlackBoard_Response;

static bool _GetBlackBoard_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetBlackBoard_Response__ros_msg_type * ros_message = static_cast<const _GetBlackBoard_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: poses
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, BBPose
      )()->data);
    size_t size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: paths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, BBPath
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

  // Field name: float_array_set
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, BBFloat64Array
      )()->data);
    size_t size = ros_message->float_array_set.size;
    auto array_ptr = ros_message->float_array_set.data;
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

static bool _GetBlackBoard_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetBlackBoard_Response__ros_msg_type * ros_message = static_cast<_GetBlackBoard_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: poses
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, BBPose
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->poses.data) {
      behavior_tree_msgs__msg__BBPose__Sequence__fini(&ros_message->poses);
    }
    if (!behavior_tree_msgs__msg__BBPose__Sequence__init(&ros_message->poses, size)) {
      fprintf(stderr, "failed to create array for field 'poses'");
      return false;
    }
    auto array_ptr = ros_message->poses.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: paths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, BBPath
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->paths.data) {
      behavior_tree_msgs__msg__BBPath__Sequence__fini(&ros_message->paths);
    }
    if (!behavior_tree_msgs__msg__BBPath__Sequence__init(&ros_message->paths, size)) {
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

  // Field name: float_array_set
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, behavior_tree_msgs, msg, BBFloat64Array
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->float_array_set.data) {
      behavior_tree_msgs__msg__BBFloat64Array__Sequence__fini(&ros_message->float_array_set);
    }
    if (!behavior_tree_msgs__msg__BBFloat64Array__Sequence__init(&ros_message->float_array_set, size)) {
      fprintf(stderr, "failed to create array for field 'float_array_set'");
      return false;
    }
    auto array_ptr = ros_message->float_array_set.data;
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
size_t get_serialized_size_behavior_tree_msgs__srv__GetBlackBoard_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetBlackBoard_Response__ros_msg_type * ros_message = static_cast<const _GetBlackBoard_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name poses
  {
    size_t array_size = ros_message->poses.size;
    auto array_ptr = ros_message->poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_behavior_tree_msgs__msg__BBPose(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name paths
  {
    size_t array_size = ros_message->paths.size;
    auto array_ptr = ros_message->paths.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_behavior_tree_msgs__msg__BBPath(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name float_array_set
  {
    size_t array_size = ros_message->float_array_set.size;
    auto array_ptr = ros_message->float_array_set.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_behavior_tree_msgs__msg__BBFloat64Array(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetBlackBoard_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_behavior_tree_msgs__srv__GetBlackBoard_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_behavior_tree_msgs
size_t max_serialized_size_behavior_tree_msgs__srv__GetBlackBoard_Response(
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

  // member: poses
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
        max_serialized_size_behavior_tree_msgs__msg__BBPose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
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
        max_serialized_size_behavior_tree_msgs__msg__BBPath(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: float_array_set
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
        max_serialized_size_behavior_tree_msgs__msg__BBFloat64Array(
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
    using DataType = behavior_tree_msgs__srv__GetBlackBoard_Response;
    is_plain =
      (
      offsetof(DataType, float_array_set) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetBlackBoard_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_behavior_tree_msgs__srv__GetBlackBoard_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetBlackBoard_Response = {
  "behavior_tree_msgs::srv",
  "GetBlackBoard_Response",
  _GetBlackBoard_Response__cdr_serialize,
  _GetBlackBoard_Response__cdr_deserialize,
  _GetBlackBoard_Response__get_serialized_size,
  _GetBlackBoard_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetBlackBoard_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetBlackBoard_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, srv, GetBlackBoard_Response)() {
  return &_GetBlackBoard_Response__type_support;
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
#include "behavior_tree_msgs/srv/get_black_board.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetBlackBoard__callbacks = {
  "behavior_tree_msgs::srv",
  "GetBlackBoard",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, srv, GetBlackBoard_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, srv, GetBlackBoard_Response)(),
};

static rosidl_service_type_support_t GetBlackBoard__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetBlackBoard__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, behavior_tree_msgs, srv, GetBlackBoard)() {
  return &GetBlackBoard__handle;
}

#if defined(__cplusplus)
}
#endif
