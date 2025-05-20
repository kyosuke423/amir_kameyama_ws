// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from behavior_tree_msgs:msg/Object.idl
// generated code does not contain a copyright notice
#include "behavior_tree_msgs/msg/detail/object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `from_camera`
// Member `from_base`
// Member `from_odom`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `label`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pixel_bottom_right`
// Member `pixel_top_left`
// Member `pixel_center`
#include "behavior_tree_msgs/msg/detail/pixel__functions.h"

bool
behavior_tree_msgs__msg__Object__init(behavior_tree_msgs__msg__Object * msg)
{
  if (!msg) {
    return false;
  }
  // from_camera
  if (!geometry_msgs__msg__Pose__init(&msg->from_camera)) {
    behavior_tree_msgs__msg__Object__fini(msg);
    return false;
  }
  // from_base
  if (!geometry_msgs__msg__Pose__init(&msg->from_base)) {
    behavior_tree_msgs__msg__Object__fini(msg);
    return false;
  }
  // from_odom
  if (!geometry_msgs__msg__Pose__init(&msg->from_odom)) {
    behavior_tree_msgs__msg__Object__fini(msg);
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    behavior_tree_msgs__msg__Object__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    behavior_tree_msgs__msg__Object__fini(msg);
    return false;
  }
  // pixel_bottom_right
  if (!behavior_tree_msgs__msg__Pixel__init(&msg->pixel_bottom_right)) {
    behavior_tree_msgs__msg__Object__fini(msg);
    return false;
  }
  // pixel_top_left
  if (!behavior_tree_msgs__msg__Pixel__init(&msg->pixel_top_left)) {
    behavior_tree_msgs__msg__Object__fini(msg);
    return false;
  }
  // pixel_center
  if (!behavior_tree_msgs__msg__Pixel__init(&msg->pixel_center)) {
    behavior_tree_msgs__msg__Object__fini(msg);
    return false;
  }
  // stand
  // probability
  return true;
}

void
behavior_tree_msgs__msg__Object__fini(behavior_tree_msgs__msg__Object * msg)
{
  if (!msg) {
    return;
  }
  // from_camera
  geometry_msgs__msg__Pose__fini(&msg->from_camera);
  // from_base
  geometry_msgs__msg__Pose__fini(&msg->from_base);
  // from_odom
  geometry_msgs__msg__Pose__fini(&msg->from_odom);
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // pixel_bottom_right
  behavior_tree_msgs__msg__Pixel__fini(&msg->pixel_bottom_right);
  // pixel_top_left
  behavior_tree_msgs__msg__Pixel__fini(&msg->pixel_top_left);
  // pixel_center
  behavior_tree_msgs__msg__Pixel__fini(&msg->pixel_center);
  // stand
  // probability
}

bool
behavior_tree_msgs__msg__Object__are_equal(const behavior_tree_msgs__msg__Object * lhs, const behavior_tree_msgs__msg__Object * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // from_camera
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->from_camera), &(rhs->from_camera)))
  {
    return false;
  }
  // from_base
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->from_base), &(rhs->from_base)))
  {
    return false;
  }
  // from_odom
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->from_odom), &(rhs->from_odom)))
  {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // pixel_bottom_right
  if (!behavior_tree_msgs__msg__Pixel__are_equal(
      &(lhs->pixel_bottom_right), &(rhs->pixel_bottom_right)))
  {
    return false;
  }
  // pixel_top_left
  if (!behavior_tree_msgs__msg__Pixel__are_equal(
      &(lhs->pixel_top_left), &(rhs->pixel_top_left)))
  {
    return false;
  }
  // pixel_center
  if (!behavior_tree_msgs__msg__Pixel__are_equal(
      &(lhs->pixel_center), &(rhs->pixel_center)))
  {
    return false;
  }
  // stand
  if (lhs->stand != rhs->stand) {
    return false;
  }
  // probability
  if (lhs->probability != rhs->probability) {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__msg__Object__copy(
  const behavior_tree_msgs__msg__Object * input,
  behavior_tree_msgs__msg__Object * output)
{
  if (!input || !output) {
    return false;
  }
  // from_camera
  if (!geometry_msgs__msg__Pose__copy(
      &(input->from_camera), &(output->from_camera)))
  {
    return false;
  }
  // from_base
  if (!geometry_msgs__msg__Pose__copy(
      &(input->from_base), &(output->from_base)))
  {
    return false;
  }
  // from_odom
  if (!geometry_msgs__msg__Pose__copy(
      &(input->from_odom), &(output->from_odom)))
  {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // pixel_bottom_right
  if (!behavior_tree_msgs__msg__Pixel__copy(
      &(input->pixel_bottom_right), &(output->pixel_bottom_right)))
  {
    return false;
  }
  // pixel_top_left
  if (!behavior_tree_msgs__msg__Pixel__copy(
      &(input->pixel_top_left), &(output->pixel_top_left)))
  {
    return false;
  }
  // pixel_center
  if (!behavior_tree_msgs__msg__Pixel__copy(
      &(input->pixel_center), &(output->pixel_center)))
  {
    return false;
  }
  // stand
  output->stand = input->stand;
  // probability
  output->probability = input->probability;
  return true;
}

behavior_tree_msgs__msg__Object *
behavior_tree_msgs__msg__Object__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__Object * msg = (behavior_tree_msgs__msg__Object *)allocator.allocate(sizeof(behavior_tree_msgs__msg__Object), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__msg__Object));
  bool success = behavior_tree_msgs__msg__Object__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__msg__Object__destroy(behavior_tree_msgs__msg__Object * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__msg__Object__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__msg__Object__Sequence__init(behavior_tree_msgs__msg__Object__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__Object * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__msg__Object *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__msg__Object), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__msg__Object__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__msg__Object__fini(&data[i - 1]);
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
behavior_tree_msgs__msg__Object__Sequence__fini(behavior_tree_msgs__msg__Object__Sequence * array)
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
      behavior_tree_msgs__msg__Object__fini(&array->data[i]);
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

behavior_tree_msgs__msg__Object__Sequence *
behavior_tree_msgs__msg__Object__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__msg__Object__Sequence * array = (behavior_tree_msgs__msg__Object__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__msg__Object__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__msg__Object__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__msg__Object__Sequence__destroy(behavior_tree_msgs__msg__Object__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__msg__Object__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__msg__Object__Sequence__are_equal(const behavior_tree_msgs__msg__Object__Sequence * lhs, const behavior_tree_msgs__msg__Object__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__msg__Object__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__msg__Object__Sequence__copy(
  const behavior_tree_msgs__msg__Object__Sequence * input,
  behavior_tree_msgs__msg__Object__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__msg__Object);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__msg__Object * data =
      (behavior_tree_msgs__msg__Object *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__msg__Object__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__msg__Object__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__msg__Object__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
