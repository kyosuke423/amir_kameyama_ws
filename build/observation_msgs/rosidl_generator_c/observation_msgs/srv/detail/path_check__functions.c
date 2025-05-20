// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from observation_msgs:srv/PathCheck.idl
// generated code does not contain a copyright notice
#include "observation_msgs/srv/detail/path_check__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `path`
#include "nav_msgs/msg/detail/path__functions.h"

bool
observation_msgs__srv__PathCheck_Request__init(observation_msgs__srv__PathCheck_Request * msg)
{
  if (!msg) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__init(&msg->path)) {
    observation_msgs__srv__PathCheck_Request__fini(msg);
    return false;
  }
  return true;
}

void
observation_msgs__srv__PathCheck_Request__fini(observation_msgs__srv__PathCheck_Request * msg)
{
  if (!msg) {
    return;
  }
  // path
  nav_msgs__msg__Path__fini(&msg->path);
}

bool
observation_msgs__srv__PathCheck_Request__are_equal(const observation_msgs__srv__PathCheck_Request * lhs, const observation_msgs__srv__PathCheck_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  return true;
}

bool
observation_msgs__srv__PathCheck_Request__copy(
  const observation_msgs__srv__PathCheck_Request * input,
  observation_msgs__srv__PathCheck_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  return true;
}

observation_msgs__srv__PathCheck_Request *
observation_msgs__srv__PathCheck_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  observation_msgs__srv__PathCheck_Request * msg = (observation_msgs__srv__PathCheck_Request *)allocator.allocate(sizeof(observation_msgs__srv__PathCheck_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(observation_msgs__srv__PathCheck_Request));
  bool success = observation_msgs__srv__PathCheck_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
observation_msgs__srv__PathCheck_Request__destroy(observation_msgs__srv__PathCheck_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    observation_msgs__srv__PathCheck_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
observation_msgs__srv__PathCheck_Request__Sequence__init(observation_msgs__srv__PathCheck_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  observation_msgs__srv__PathCheck_Request * data = NULL;

  if (size) {
    data = (observation_msgs__srv__PathCheck_Request *)allocator.zero_allocate(size, sizeof(observation_msgs__srv__PathCheck_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = observation_msgs__srv__PathCheck_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        observation_msgs__srv__PathCheck_Request__fini(&data[i - 1]);
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
observation_msgs__srv__PathCheck_Request__Sequence__fini(observation_msgs__srv__PathCheck_Request__Sequence * array)
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
      observation_msgs__srv__PathCheck_Request__fini(&array->data[i]);
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

observation_msgs__srv__PathCheck_Request__Sequence *
observation_msgs__srv__PathCheck_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  observation_msgs__srv__PathCheck_Request__Sequence * array = (observation_msgs__srv__PathCheck_Request__Sequence *)allocator.allocate(sizeof(observation_msgs__srv__PathCheck_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = observation_msgs__srv__PathCheck_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
observation_msgs__srv__PathCheck_Request__Sequence__destroy(observation_msgs__srv__PathCheck_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    observation_msgs__srv__PathCheck_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
observation_msgs__srv__PathCheck_Request__Sequence__are_equal(const observation_msgs__srv__PathCheck_Request__Sequence * lhs, const observation_msgs__srv__PathCheck_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!observation_msgs__srv__PathCheck_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
observation_msgs__srv__PathCheck_Request__Sequence__copy(
  const observation_msgs__srv__PathCheck_Request__Sequence * input,
  observation_msgs__srv__PathCheck_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(observation_msgs__srv__PathCheck_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    observation_msgs__srv__PathCheck_Request * data =
      (observation_msgs__srv__PathCheck_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!observation_msgs__srv__PathCheck_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          observation_msgs__srv__PathCheck_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!observation_msgs__srv__PathCheck_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error_string`
#include "rosidl_runtime_c/string_functions.h"

bool
observation_msgs__srv__PathCheck_Response__init(observation_msgs__srv__PathCheck_Response * msg)
{
  if (!msg) {
    return false;
  }
  // error_string
  if (!rosidl_runtime_c__String__init(&msg->error_string)) {
    observation_msgs__srv__PathCheck_Response__fini(msg);
    return false;
  }
  // anomaly_score
  return true;
}

void
observation_msgs__srv__PathCheck_Response__fini(observation_msgs__srv__PathCheck_Response * msg)
{
  if (!msg) {
    return;
  }
  // error_string
  rosidl_runtime_c__String__fini(&msg->error_string);
  // anomaly_score
}

bool
observation_msgs__srv__PathCheck_Response__are_equal(const observation_msgs__srv__PathCheck_Response * lhs, const observation_msgs__srv__PathCheck_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_string), &(rhs->error_string)))
  {
    return false;
  }
  // anomaly_score
  if (lhs->anomaly_score != rhs->anomaly_score) {
    return false;
  }
  return true;
}

bool
observation_msgs__srv__PathCheck_Response__copy(
  const observation_msgs__srv__PathCheck_Response * input,
  observation_msgs__srv__PathCheck_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // error_string
  if (!rosidl_runtime_c__String__copy(
      &(input->error_string), &(output->error_string)))
  {
    return false;
  }
  // anomaly_score
  output->anomaly_score = input->anomaly_score;
  return true;
}

observation_msgs__srv__PathCheck_Response *
observation_msgs__srv__PathCheck_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  observation_msgs__srv__PathCheck_Response * msg = (observation_msgs__srv__PathCheck_Response *)allocator.allocate(sizeof(observation_msgs__srv__PathCheck_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(observation_msgs__srv__PathCheck_Response));
  bool success = observation_msgs__srv__PathCheck_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
observation_msgs__srv__PathCheck_Response__destroy(observation_msgs__srv__PathCheck_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    observation_msgs__srv__PathCheck_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
observation_msgs__srv__PathCheck_Response__Sequence__init(observation_msgs__srv__PathCheck_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  observation_msgs__srv__PathCheck_Response * data = NULL;

  if (size) {
    data = (observation_msgs__srv__PathCheck_Response *)allocator.zero_allocate(size, sizeof(observation_msgs__srv__PathCheck_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = observation_msgs__srv__PathCheck_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        observation_msgs__srv__PathCheck_Response__fini(&data[i - 1]);
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
observation_msgs__srv__PathCheck_Response__Sequence__fini(observation_msgs__srv__PathCheck_Response__Sequence * array)
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
      observation_msgs__srv__PathCheck_Response__fini(&array->data[i]);
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

observation_msgs__srv__PathCheck_Response__Sequence *
observation_msgs__srv__PathCheck_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  observation_msgs__srv__PathCheck_Response__Sequence * array = (observation_msgs__srv__PathCheck_Response__Sequence *)allocator.allocate(sizeof(observation_msgs__srv__PathCheck_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = observation_msgs__srv__PathCheck_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
observation_msgs__srv__PathCheck_Response__Sequence__destroy(observation_msgs__srv__PathCheck_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    observation_msgs__srv__PathCheck_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
observation_msgs__srv__PathCheck_Response__Sequence__are_equal(const observation_msgs__srv__PathCheck_Response__Sequence * lhs, const observation_msgs__srv__PathCheck_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!observation_msgs__srv__PathCheck_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
observation_msgs__srv__PathCheck_Response__Sequence__copy(
  const observation_msgs__srv__PathCheck_Response__Sequence * input,
  observation_msgs__srv__PathCheck_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(observation_msgs__srv__PathCheck_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    observation_msgs__srv__PathCheck_Response * data =
      (observation_msgs__srv__PathCheck_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!observation_msgs__srv__PathCheck_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          observation_msgs__srv__PathCheck_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!observation_msgs__srv__PathCheck_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
