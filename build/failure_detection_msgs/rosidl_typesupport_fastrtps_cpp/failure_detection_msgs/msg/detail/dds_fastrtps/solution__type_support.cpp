// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from failure_detection_msgs:msg/Solution.idl
// generated code does not contain a copyright notice
#include "failure_detection_msgs/msg/detail/solution__rosidl_typesupport_fastrtps_cpp.hpp"
#include "failure_detection_msgs/msg/detail/solution__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace behavior_tree_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const behavior_tree_msgs::msg::BBMessage &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  behavior_tree_msgs::msg::BBMessage &);
size_t get_serialized_size(
  const behavior_tree_msgs::msg::BBMessage &,
  size_t current_alignment);
size_t
max_serialized_size_BBMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace behavior_tree_msgs


namespace failure_detection_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_failure_detection_msgs
cdr_serialize(
  const failure_detection_msgs::msg::Solution & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: bt_node_name
  cdr << ros_message.bt_node_name;
  // Member: solutions
  {
    cdr << ros_message.solutions;
  }
  // Member: priorities
  {
    cdr << ros_message.priorities;
  }
  // Member: bb_message
  behavior_tree_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.bb_message,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_failure_detection_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  failure_detection_msgs::msg::Solution & ros_message)
{
  // Member: bt_node_name
  cdr >> ros_message.bt_node_name;

  // Member: solutions
  {
    cdr >> ros_message.solutions;
  }

  // Member: priorities
  {
    cdr >> ros_message.priorities;
  }

  // Member: bb_message
  behavior_tree_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.bb_message);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_failure_detection_msgs
get_serialized_size(
  const failure_detection_msgs::msg::Solution & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: bt_node_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.bt_node_name.size() + 1);
  // Member: solutions
  {
    size_t array_size = ros_message.solutions.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.solutions[index].size() + 1);
    }
  }
  // Member: priorities
  {
    size_t array_size = ros_message.priorities.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.priorities[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bb_message

  current_alignment +=
    behavior_tree_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.bb_message, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_failure_detection_msgs
max_serialized_size_Solution(
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


  // Member: bt_node_name
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

  // Member: solutions
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

  // Member: priorities
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

  // Member: bb_message
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        behavior_tree_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BBMessage(
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
    using DataType = failure_detection_msgs::msg::Solution;
    is_plain =
      (
      offsetof(DataType, bb_message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Solution__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const failure_detection_msgs::msg::Solution *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Solution__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<failure_detection_msgs::msg::Solution *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Solution__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const failure_detection_msgs::msg::Solution *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Solution__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Solution(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Solution__callbacks = {
  "failure_detection_msgs::msg",
  "Solution",
  _Solution__cdr_serialize,
  _Solution__cdr_deserialize,
  _Solution__get_serialized_size,
  _Solution__max_serialized_size
};

static rosidl_message_type_support_t _Solution__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Solution__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace failure_detection_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_failure_detection_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<failure_detection_msgs::msg::Solution>()
{
  return &failure_detection_msgs::msg::typesupport_fastrtps_cpp::_Solution__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, failure_detection_msgs, msg, Solution)() {
  return &failure_detection_msgs::msg::typesupport_fastrtps_cpp::_Solution__handle;
}

#ifdef __cplusplus
}
#endif
