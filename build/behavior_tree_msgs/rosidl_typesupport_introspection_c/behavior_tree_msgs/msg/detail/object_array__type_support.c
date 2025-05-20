// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from behavior_tree_msgs:msg/ObjectArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "behavior_tree_msgs/msg/detail/object_array__rosidl_typesupport_introspection_c.h"
#include "behavior_tree_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "behavior_tree_msgs/msg/detail/object_array__functions.h"
#include "behavior_tree_msgs/msg/detail/object_array__struct.h"


// Include directives for member types
// Member `objects`
#include "behavior_tree_msgs/msg/object.h"
// Member `objects`
#include "behavior_tree_msgs/msg/detail/object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  behavior_tree_msgs__msg__ObjectArray__init(message_memory);
}

void behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_fini_function(void * message_memory)
{
  behavior_tree_msgs__msg__ObjectArray__fini(message_memory);
}

size_t behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__size_function__ObjectArray__objects(
  const void * untyped_member)
{
  const behavior_tree_msgs__msg__Object__Sequence * member =
    (const behavior_tree_msgs__msg__Object__Sequence *)(untyped_member);
  return member->size;
}

const void * behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__get_const_function__ObjectArray__objects(
  const void * untyped_member, size_t index)
{
  const behavior_tree_msgs__msg__Object__Sequence * member =
    (const behavior_tree_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void * behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__get_function__ObjectArray__objects(
  void * untyped_member, size_t index)
{
  behavior_tree_msgs__msg__Object__Sequence * member =
    (behavior_tree_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__fetch_function__ObjectArray__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const behavior_tree_msgs__msg__Object * item =
    ((const behavior_tree_msgs__msg__Object *)
    behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__get_const_function__ObjectArray__objects(untyped_member, index));
  behavior_tree_msgs__msg__Object * value =
    (behavior_tree_msgs__msg__Object *)(untyped_value);
  *value = *item;
}

void behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__assign_function__ObjectArray__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  behavior_tree_msgs__msg__Object * item =
    ((behavior_tree_msgs__msg__Object *)
    behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__get_function__ObjectArray__objects(untyped_member, index));
  const behavior_tree_msgs__msg__Object * value =
    (const behavior_tree_msgs__msg__Object *)(untyped_value);
  *item = *value;
}

bool behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__resize_function__ObjectArray__objects(
  void * untyped_member, size_t size)
{
  behavior_tree_msgs__msg__Object__Sequence * member =
    (behavior_tree_msgs__msg__Object__Sequence *)(untyped_member);
  behavior_tree_msgs__msg__Object__Sequence__fini(member);
  return behavior_tree_msgs__msg__Object__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_member_array[1] = {
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(behavior_tree_msgs__msg__ObjectArray, objects),  // bytes offset in struct
    NULL,  // default value
    behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__size_function__ObjectArray__objects,  // size() function pointer
    behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__get_const_function__ObjectArray__objects,  // get_const(index) function pointer
    behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__get_function__ObjectArray__objects,  // get(index) function pointer
    behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__fetch_function__ObjectArray__objects,  // fetch(index, &value) function pointer
    behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__assign_function__ObjectArray__objects,  // assign(index, value) function pointer
    behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__resize_function__ObjectArray__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_members = {
  "behavior_tree_msgs__msg",  // message namespace
  "ObjectArray",  // message name
  1,  // number of fields
  sizeof(behavior_tree_msgs__msg__ObjectArray),
  behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_member_array,  // message members
  behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_init_function,  // function to initialize message memory (memory has to be allocated)
  behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_type_support_handle = {
  0,
  &behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_behavior_tree_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, msg, ObjectArray)() {
  behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, behavior_tree_msgs, msg, Object)();
  if (!behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_type_support_handle.typesupport_identifier) {
    behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &behavior_tree_msgs__msg__ObjectArray__rosidl_typesupport_introspection_c__ObjectArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
