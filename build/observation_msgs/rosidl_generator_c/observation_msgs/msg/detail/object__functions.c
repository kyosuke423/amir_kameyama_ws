// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from observation_msgs:msg/Object.idl
// generated code does not contain a copyright notice
#include "observation_msgs/msg/detail/object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `collision_object`
#include "moveit_msgs/msg/detail/collision_object__functions.h"
// Member `attached_collision_object`
#include "moveit_msgs/msg/detail/attached_collision_object__functions.h"
// Member `id`
// Member `obj_group`
#include "rosidl_runtime_c/string_functions.h"

bool
observation_msgs__msg__Object__init(observation_msgs__msg__Object * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    observation_msgs__msg__Object__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    observation_msgs__msg__Object__fini(msg);
    return false;
  }
  // collision_object
  if (!moveit_msgs__msg__CollisionObject__init(&msg->collision_object)) {
    observation_msgs__msg__Object__fini(msg);
    return false;
  }
  // attached_collision_object
  if (!moveit_msgs__msg__AttachedCollisionObject__init(&msg->attached_collision_object)) {
    observation_msgs__msg__Object__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    observation_msgs__msg__Object__fini(msg);
    return false;
  }
  // obj_group
  if (!rosidl_runtime_c__String__init(&msg->obj_group)) {
    observation_msgs__msg__Object__fini(msg);
    return false;
  }
  // status
  // msg_type
  // weight
  return true;
}

void
observation_msgs__msg__Object__fini(observation_msgs__msg__Object * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // collision_object
  moveit_msgs__msg__CollisionObject__fini(&msg->collision_object);
  // attached_collision_object
  moveit_msgs__msg__AttachedCollisionObject__fini(&msg->attached_collision_object);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // obj_group
  rosidl_runtime_c__String__fini(&msg->obj_group);
  // status
  // msg_type
  // weight
}

bool
observation_msgs__msg__Object__are_equal(const observation_msgs__msg__Object * lhs, const observation_msgs__msg__Object * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // collision_object
  if (!moveit_msgs__msg__CollisionObject__are_equal(
      &(lhs->collision_object), &(rhs->collision_object)))
  {
    return false;
  }
  // attached_collision_object
  if (!moveit_msgs__msg__AttachedCollisionObject__are_equal(
      &(lhs->attached_collision_object), &(rhs->attached_collision_object)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // obj_group
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->obj_group), &(rhs->obj_group)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // msg_type
  if (lhs->msg_type != rhs->msg_type) {
    return false;
  }
  // weight
  if (lhs->weight != rhs->weight) {
    return false;
  }
  return true;
}

bool
observation_msgs__msg__Object__copy(
  const observation_msgs__msg__Object * input,
  observation_msgs__msg__Object * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // collision_object
  if (!moveit_msgs__msg__CollisionObject__copy(
      &(input->collision_object), &(output->collision_object)))
  {
    return false;
  }
  // attached_collision_object
  if (!moveit_msgs__msg__AttachedCollisionObject__copy(
      &(input->attached_collision_object), &(output->attached_collision_object)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // obj_group
  if (!rosidl_runtime_c__String__copy(
      &(input->obj_group), &(output->obj_group)))
  {
    return false;
  }
  // status
  output->status = input->status;
  // msg_type
  output->msg_type = input->msg_type;
  // weight
  output->weight = input->weight;
  return true;
}

observation_msgs__msg__Object *
observation_msgs__msg__Object__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  observation_msgs__msg__Object * msg = (observation_msgs__msg__Object *)allocator.allocate(sizeof(observation_msgs__msg__Object), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(observation_msgs__msg__Object));
  bool success = observation_msgs__msg__Object__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
observation_msgs__msg__Object__destroy(observation_msgs__msg__Object * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    observation_msgs__msg__Object__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
observation_msgs__msg__Object__Sequence__init(observation_msgs__msg__Object__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  observation_msgs__msg__Object * data = NULL;

  if (size) {
    data = (observation_msgs__msg__Object *)allocator.zero_allocate(size, sizeof(observation_msgs__msg__Object), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = observation_msgs__msg__Object__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        observation_msgs__msg__Object__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
observation_msgs__msg__Object__Sequence__fini(observation_msgs__msg__Object__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      observation_msgs__msg__Object__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

observation_msgs__msg__Object__Sequence *
observation_msgs__msg__Object__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  observation_msgs__msg__Object__Sequence * array = (observation_msgs__msg__Object__Sequence *)allocator.allocate(sizeof(observation_msgs__msg__Object__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = observation_msgs__msg__Object__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
observation_msgs__msg__Object__Sequence__destroy(observation_msgs__msg__Object__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    observation_msgs__msg__Object__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
observation_msgs__msg__Object__Sequence__are_equal(const observation_msgs__msg__Object__Sequence * lhs, const observation_msgs__msg__Object__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!observation_msgs__msg__Object__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
observation_msgs__msg__Object__Sequence__copy(
  const observation_msgs__msg__Object__Sequence * input,
  observation_msgs__msg__Object__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(observation_msgs__msg__Object);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    observation_msgs__msg__Object * data =
      (observation_msgs__msg__Object *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!observation_msgs__msg__Object__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          observation_msgs__msg__Object__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!observation_msgs__msg__Object__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
