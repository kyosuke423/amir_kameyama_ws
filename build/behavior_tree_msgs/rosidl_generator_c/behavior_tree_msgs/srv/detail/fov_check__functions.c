// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from behavior_tree_msgs:srv/FovCheck.idl
// generated code does not contain a copyright notice
#include "behavior_tree_msgs/srv/detail/fov_check__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `target_position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `object_id`
#include "rosidl_runtime_c/string_functions.h"

bool
behavior_tree_msgs__srv__FovCheck_Request__init(behavior_tree_msgs__srv__FovCheck_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target_position
  if (!geometry_msgs__msg__Point__init(&msg->target_position)) {
    behavior_tree_msgs__srv__FovCheck_Request__fini(msg);
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__init(&msg->object_id)) {
    behavior_tree_msgs__srv__FovCheck_Request__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__srv__FovCheck_Request__fini(behavior_tree_msgs__srv__FovCheck_Request * msg)
{
  if (!msg) {
    return;
  }
  // target_position
  geometry_msgs__msg__Point__fini(&msg->target_position);
  // object_id
  rosidl_runtime_c__String__fini(&msg->object_id);
}

bool
behavior_tree_msgs__srv__FovCheck_Request__are_equal(const behavior_tree_msgs__srv__FovCheck_Request * lhs, const behavior_tree_msgs__srv__FovCheck_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->target_position), &(rhs->target_position)))
  {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->object_id), &(rhs->object_id)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__srv__FovCheck_Request__copy(
  const behavior_tree_msgs__srv__FovCheck_Request * input,
  behavior_tree_msgs__srv__FovCheck_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->target_position), &(output->target_position)))
  {
    return false;
  }
  // object_id
  if (!rosidl_runtime_c__String__copy(
      &(input->object_id), &(output->object_id)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__srv__FovCheck_Request *
behavior_tree_msgs__srv__FovCheck_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__srv__FovCheck_Request * msg = (behavior_tree_msgs__srv__FovCheck_Request *)allocator.allocate(sizeof(behavior_tree_msgs__srv__FovCheck_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__srv__FovCheck_Request));
  bool success = behavior_tree_msgs__srv__FovCheck_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__srv__FovCheck_Request__destroy(behavior_tree_msgs__srv__FovCheck_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__srv__FovCheck_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__srv__FovCheck_Request__Sequence__init(behavior_tree_msgs__srv__FovCheck_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__srv__FovCheck_Request * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__srv__FovCheck_Request *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__srv__FovCheck_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__srv__FovCheck_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__srv__FovCheck_Request__fini(&data[i - 1]);
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
behavior_tree_msgs__srv__FovCheck_Request__Sequence__fini(behavior_tree_msgs__srv__FovCheck_Request__Sequence * array)
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
      behavior_tree_msgs__srv__FovCheck_Request__fini(&array->data[i]);
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

behavior_tree_msgs__srv__FovCheck_Request__Sequence *
behavior_tree_msgs__srv__FovCheck_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__srv__FovCheck_Request__Sequence * array = (behavior_tree_msgs__srv__FovCheck_Request__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__srv__FovCheck_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__srv__FovCheck_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__srv__FovCheck_Request__Sequence__destroy(behavior_tree_msgs__srv__FovCheck_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__srv__FovCheck_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__srv__FovCheck_Request__Sequence__are_equal(const behavior_tree_msgs__srv__FovCheck_Request__Sequence * lhs, const behavior_tree_msgs__srv__FovCheck_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__srv__FovCheck_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__srv__FovCheck_Request__Sequence__copy(
  const behavior_tree_msgs__srv__FovCheck_Request__Sequence * input,
  behavior_tree_msgs__srv__FovCheck_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__srv__FovCheck_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__srv__FovCheck_Request * data =
      (behavior_tree_msgs__srv__FovCheck_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__srv__FovCheck_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__srv__FovCheck_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__srv__FovCheck_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
behavior_tree_msgs__srv__FovCheck_Response__init(behavior_tree_msgs__srv__FovCheck_Response * msg)
{
  if (!msg) {
    return false;
  }
  // in_fov
  return true;
}

void
behavior_tree_msgs__srv__FovCheck_Response__fini(behavior_tree_msgs__srv__FovCheck_Response * msg)
{
  if (!msg) {
    return;
  }
  // in_fov
}

bool
behavior_tree_msgs__srv__FovCheck_Response__are_equal(const behavior_tree_msgs__srv__FovCheck_Response * lhs, const behavior_tree_msgs__srv__FovCheck_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // in_fov
  if (lhs->in_fov != rhs->in_fov) {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__srv__FovCheck_Response__copy(
  const behavior_tree_msgs__srv__FovCheck_Response * input,
  behavior_tree_msgs__srv__FovCheck_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // in_fov
  output->in_fov = input->in_fov;
  return true;
}

behavior_tree_msgs__srv__FovCheck_Response *
behavior_tree_msgs__srv__FovCheck_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__srv__FovCheck_Response * msg = (behavior_tree_msgs__srv__FovCheck_Response *)allocator.allocate(sizeof(behavior_tree_msgs__srv__FovCheck_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__srv__FovCheck_Response));
  bool success = behavior_tree_msgs__srv__FovCheck_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__srv__FovCheck_Response__destroy(behavior_tree_msgs__srv__FovCheck_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__srv__FovCheck_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__srv__FovCheck_Response__Sequence__init(behavior_tree_msgs__srv__FovCheck_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__srv__FovCheck_Response * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__srv__FovCheck_Response *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__srv__FovCheck_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__srv__FovCheck_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__srv__FovCheck_Response__fini(&data[i - 1]);
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
behavior_tree_msgs__srv__FovCheck_Response__Sequence__fini(behavior_tree_msgs__srv__FovCheck_Response__Sequence * array)
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
      behavior_tree_msgs__srv__FovCheck_Response__fini(&array->data[i]);
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

behavior_tree_msgs__srv__FovCheck_Response__Sequence *
behavior_tree_msgs__srv__FovCheck_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__srv__FovCheck_Response__Sequence * array = (behavior_tree_msgs__srv__FovCheck_Response__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__srv__FovCheck_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__srv__FovCheck_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__srv__FovCheck_Response__Sequence__destroy(behavior_tree_msgs__srv__FovCheck_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__srv__FovCheck_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__srv__FovCheck_Response__Sequence__are_equal(const behavior_tree_msgs__srv__FovCheck_Response__Sequence * lhs, const behavior_tree_msgs__srv__FovCheck_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__srv__FovCheck_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__srv__FovCheck_Response__Sequence__copy(
  const behavior_tree_msgs__srv__FovCheck_Response__Sequence * input,
  behavior_tree_msgs__srv__FovCheck_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__srv__FovCheck_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__srv__FovCheck_Response * data =
      (behavior_tree_msgs__srv__FovCheck_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__srv__FovCheck_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__srv__FovCheck_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__srv__FovCheck_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
