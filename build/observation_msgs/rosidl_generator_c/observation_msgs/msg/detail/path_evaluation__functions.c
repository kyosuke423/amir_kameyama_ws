// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from observation_msgs:msg/PathEvaluation.idl
// generated code does not contain a copyright notice
#include "observation_msgs/msg/detail/path_evaluation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
observation_msgs__msg__PathEvaluation__init(observation_msgs__msg__PathEvaluation * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    observation_msgs__msg__PathEvaluation__fini(msg);
    return false;
  }
  // max_cost
  // ave_cost
  // unknown_area
  return true;
}

void
observation_msgs__msg__PathEvaluation__fini(observation_msgs__msg__PathEvaluation * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // max_cost
  // ave_cost
  // unknown_area
}

bool
observation_msgs__msg__PathEvaluation__are_equal(const observation_msgs__msg__PathEvaluation * lhs, const observation_msgs__msg__PathEvaluation * rhs)
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
  // max_cost
  if (lhs->max_cost != rhs->max_cost) {
    return false;
  }
  // ave_cost
  if (lhs->ave_cost != rhs->ave_cost) {
    return false;
  }
  // unknown_area
  if (lhs->unknown_area != rhs->unknown_area) {
    return false;
  }
  return true;
}

bool
observation_msgs__msg__PathEvaluation__copy(
  const observation_msgs__msg__PathEvaluation * input,
  observation_msgs__msg__PathEvaluation * output)
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
  // max_cost
  output->max_cost = input->max_cost;
  // ave_cost
  output->ave_cost = input->ave_cost;
  // unknown_area
  output->unknown_area = input->unknown_area;
  return true;
}

observation_msgs__msg__PathEvaluation *
observation_msgs__msg__PathEvaluation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  observation_msgs__msg__PathEvaluation * msg = (observation_msgs__msg__PathEvaluation *)allocator.allocate(sizeof(observation_msgs__msg__PathEvaluation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(observation_msgs__msg__PathEvaluation));
  bool success = observation_msgs__msg__PathEvaluation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
observation_msgs__msg__PathEvaluation__destroy(observation_msgs__msg__PathEvaluation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    observation_msgs__msg__PathEvaluation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
observation_msgs__msg__PathEvaluation__Sequence__init(observation_msgs__msg__PathEvaluation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  observation_msgs__msg__PathEvaluation * data = NULL;

  if (size) {
    data = (observation_msgs__msg__PathEvaluation *)allocator.zero_allocate(size, sizeof(observation_msgs__msg__PathEvaluation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = observation_msgs__msg__PathEvaluation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        observation_msgs__msg__PathEvaluation__fini(&data[i - 1]);
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
observation_msgs__msg__PathEvaluation__Sequence__fini(observation_msgs__msg__PathEvaluation__Sequence * array)
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
      observation_msgs__msg__PathEvaluation__fini(&array->data[i]);
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

observation_msgs__msg__PathEvaluation__Sequence *
observation_msgs__msg__PathEvaluation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  observation_msgs__msg__PathEvaluation__Sequence * array = (observation_msgs__msg__PathEvaluation__Sequence *)allocator.allocate(sizeof(observation_msgs__msg__PathEvaluation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = observation_msgs__msg__PathEvaluation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
observation_msgs__msg__PathEvaluation__Sequence__destroy(observation_msgs__msg__PathEvaluation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    observation_msgs__msg__PathEvaluation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
observation_msgs__msg__PathEvaluation__Sequence__are_equal(const observation_msgs__msg__PathEvaluation__Sequence * lhs, const observation_msgs__msg__PathEvaluation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!observation_msgs__msg__PathEvaluation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
observation_msgs__msg__PathEvaluation__Sequence__copy(
  const observation_msgs__msg__PathEvaluation__Sequence * input,
  observation_msgs__msg__PathEvaluation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(observation_msgs__msg__PathEvaluation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    observation_msgs__msg__PathEvaluation * data =
      (observation_msgs__msg__PathEvaluation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!observation_msgs__msg__PathEvaluation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          observation_msgs__msg__PathEvaluation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!observation_msgs__msg__PathEvaluation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
