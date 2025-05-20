// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bebop_msgs:msg/BoxCorner.idl
// generated code does not contain a copyright notice
#include "bebop_msgs/msg/detail/box_corner__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `posi`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
bebop_msgs__msg__BoxCorner__init(bebop_msgs__msg__BoxCorner * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // corner_num
  // posi
  if (!geometry_msgs__msg__Pose__init(&msg->posi)) {
    bebop_msgs__msg__BoxCorner__fini(msg);
    return false;
  }
  return true;
}

void
bebop_msgs__msg__BoxCorner__fini(bebop_msgs__msg__BoxCorner * msg)
{
  if (!msg) {
    return;
  }
  // id
  // corner_num
  // posi
  geometry_msgs__msg__Pose__fini(&msg->posi);
}

bool
bebop_msgs__msg__BoxCorner__are_equal(const bebop_msgs__msg__BoxCorner * lhs, const bebop_msgs__msg__BoxCorner * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // corner_num
  if (lhs->corner_num != rhs->corner_num) {
    return false;
  }
  // posi
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->posi), &(rhs->posi)))
  {
    return false;
  }
  return true;
}

bool
bebop_msgs__msg__BoxCorner__copy(
  const bebop_msgs__msg__BoxCorner * input,
  bebop_msgs__msg__BoxCorner * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // corner_num
  output->corner_num = input->corner_num;
  // posi
  if (!geometry_msgs__msg__Pose__copy(
      &(input->posi), &(output->posi)))
  {
    return false;
  }
  return true;
}

bebop_msgs__msg__BoxCorner *
bebop_msgs__msg__BoxCorner__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bebop_msgs__msg__BoxCorner * msg = (bebop_msgs__msg__BoxCorner *)allocator.allocate(sizeof(bebop_msgs__msg__BoxCorner), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bebop_msgs__msg__BoxCorner));
  bool success = bebop_msgs__msg__BoxCorner__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bebop_msgs__msg__BoxCorner__destroy(bebop_msgs__msg__BoxCorner * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bebop_msgs__msg__BoxCorner__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bebop_msgs__msg__BoxCorner__Sequence__init(bebop_msgs__msg__BoxCorner__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bebop_msgs__msg__BoxCorner * data = NULL;

  if (size) {
    data = (bebop_msgs__msg__BoxCorner *)allocator.zero_allocate(size, sizeof(bebop_msgs__msg__BoxCorner), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bebop_msgs__msg__BoxCorner__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bebop_msgs__msg__BoxCorner__fini(&data[i - 1]);
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
bebop_msgs__msg__BoxCorner__Sequence__fini(bebop_msgs__msg__BoxCorner__Sequence * array)
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
      bebop_msgs__msg__BoxCorner__fini(&array->data[i]);
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

bebop_msgs__msg__BoxCorner__Sequence *
bebop_msgs__msg__BoxCorner__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bebop_msgs__msg__BoxCorner__Sequence * array = (bebop_msgs__msg__BoxCorner__Sequence *)allocator.allocate(sizeof(bebop_msgs__msg__BoxCorner__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bebop_msgs__msg__BoxCorner__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bebop_msgs__msg__BoxCorner__Sequence__destroy(bebop_msgs__msg__BoxCorner__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bebop_msgs__msg__BoxCorner__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bebop_msgs__msg__BoxCorner__Sequence__are_equal(const bebop_msgs__msg__BoxCorner__Sequence * lhs, const bebop_msgs__msg__BoxCorner__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bebop_msgs__msg__BoxCorner__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bebop_msgs__msg__BoxCorner__Sequence__copy(
  const bebop_msgs__msg__BoxCorner__Sequence * input,
  bebop_msgs__msg__BoxCorner__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bebop_msgs__msg__BoxCorner);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bebop_msgs__msg__BoxCorner * data =
      (bebop_msgs__msg__BoxCorner *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bebop_msgs__msg__BoxCorner__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bebop_msgs__msg__BoxCorner__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bebop_msgs__msg__BoxCorner__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
