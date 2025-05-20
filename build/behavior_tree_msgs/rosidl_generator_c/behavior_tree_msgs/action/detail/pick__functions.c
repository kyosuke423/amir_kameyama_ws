// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from behavior_tree_msgs:action/Pick.idl
// generated code does not contain a copyright notice
#include "behavior_tree_msgs/action/detail/pick__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
behavior_tree_msgs__action__Pick_Goal__init(behavior_tree_msgs__action__Pick_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
behavior_tree_msgs__action__Pick_Goal__fini(behavior_tree_msgs__action__Pick_Goal * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
behavior_tree_msgs__action__Pick_Goal__are_equal(const behavior_tree_msgs__action__Pick_Goal * lhs, const behavior_tree_msgs__action__Pick_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__action__Pick_Goal__copy(
  const behavior_tree_msgs__action__Pick_Goal * input,
  behavior_tree_msgs__action__Pick_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

behavior_tree_msgs__action__Pick_Goal *
behavior_tree_msgs__action__Pick_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_Goal * msg = (behavior_tree_msgs__action__Pick_Goal *)allocator.allocate(sizeof(behavior_tree_msgs__action__Pick_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__action__Pick_Goal));
  bool success = behavior_tree_msgs__action__Pick_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__action__Pick_Goal__destroy(behavior_tree_msgs__action__Pick_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__action__Pick_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__action__Pick_Goal__Sequence__init(behavior_tree_msgs__action__Pick_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_Goal * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__action__Pick_Goal *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__action__Pick_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__action__Pick_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__action__Pick_Goal__fini(&data[i - 1]);
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
behavior_tree_msgs__action__Pick_Goal__Sequence__fini(behavior_tree_msgs__action__Pick_Goal__Sequence * array)
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
      behavior_tree_msgs__action__Pick_Goal__fini(&array->data[i]);
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

behavior_tree_msgs__action__Pick_Goal__Sequence *
behavior_tree_msgs__action__Pick_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_Goal__Sequence * array = (behavior_tree_msgs__action__Pick_Goal__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__action__Pick_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__action__Pick_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__action__Pick_Goal__Sequence__destroy(behavior_tree_msgs__action__Pick_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__action__Pick_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__action__Pick_Goal__Sequence__are_equal(const behavior_tree_msgs__action__Pick_Goal__Sequence * lhs, const behavior_tree_msgs__action__Pick_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__action__Pick_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__action__Pick_Goal__Sequence__copy(
  const behavior_tree_msgs__action__Pick_Goal__Sequence * input,
  behavior_tree_msgs__action__Pick_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__action__Pick_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__action__Pick_Goal * data =
      (behavior_tree_msgs__action__Pick_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__action__Pick_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__action__Pick_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__action__Pick_Goal__copy(
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
behavior_tree_msgs__action__Pick_Result__init(behavior_tree_msgs__action__Pick_Result * msg)
{
  if (!msg) {
    return false;
  }
  // error_string
  if (!rosidl_runtime_c__String__init(&msg->error_string)) {
    behavior_tree_msgs__action__Pick_Result__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__action__Pick_Result__fini(behavior_tree_msgs__action__Pick_Result * msg)
{
  if (!msg) {
    return;
  }
  // error_string
  rosidl_runtime_c__String__fini(&msg->error_string);
}

bool
behavior_tree_msgs__action__Pick_Result__are_equal(const behavior_tree_msgs__action__Pick_Result * lhs, const behavior_tree_msgs__action__Pick_Result * rhs)
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
  return true;
}

bool
behavior_tree_msgs__action__Pick_Result__copy(
  const behavior_tree_msgs__action__Pick_Result * input,
  behavior_tree_msgs__action__Pick_Result * output)
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
  return true;
}

behavior_tree_msgs__action__Pick_Result *
behavior_tree_msgs__action__Pick_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_Result * msg = (behavior_tree_msgs__action__Pick_Result *)allocator.allocate(sizeof(behavior_tree_msgs__action__Pick_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__action__Pick_Result));
  bool success = behavior_tree_msgs__action__Pick_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__action__Pick_Result__destroy(behavior_tree_msgs__action__Pick_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__action__Pick_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__action__Pick_Result__Sequence__init(behavior_tree_msgs__action__Pick_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_Result * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__action__Pick_Result *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__action__Pick_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__action__Pick_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__action__Pick_Result__fini(&data[i - 1]);
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
behavior_tree_msgs__action__Pick_Result__Sequence__fini(behavior_tree_msgs__action__Pick_Result__Sequence * array)
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
      behavior_tree_msgs__action__Pick_Result__fini(&array->data[i]);
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

behavior_tree_msgs__action__Pick_Result__Sequence *
behavior_tree_msgs__action__Pick_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_Result__Sequence * array = (behavior_tree_msgs__action__Pick_Result__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__action__Pick_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__action__Pick_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__action__Pick_Result__Sequence__destroy(behavior_tree_msgs__action__Pick_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__action__Pick_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__action__Pick_Result__Sequence__are_equal(const behavior_tree_msgs__action__Pick_Result__Sequence * lhs, const behavior_tree_msgs__action__Pick_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__action__Pick_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__action__Pick_Result__Sequence__copy(
  const behavior_tree_msgs__action__Pick_Result__Sequence * input,
  behavior_tree_msgs__action__Pick_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__action__Pick_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__action__Pick_Result * data =
      (behavior_tree_msgs__action__Pick_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__action__Pick_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__action__Pick_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__action__Pick_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
behavior_tree_msgs__action__Pick_Feedback__init(behavior_tree_msgs__action__Pick_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__init(&msg->feedback)) {
    behavior_tree_msgs__action__Pick_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__action__Pick_Feedback__fini(behavior_tree_msgs__action__Pick_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
  rosidl_runtime_c__String__fini(&msg->feedback);
}

bool
behavior_tree_msgs__action__Pick_Feedback__are_equal(const behavior_tree_msgs__action__Pick_Feedback * lhs, const behavior_tree_msgs__action__Pick_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__action__Pick_Feedback__copy(
  const behavior_tree_msgs__action__Pick_Feedback * input,
  behavior_tree_msgs__action__Pick_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__action__Pick_Feedback *
behavior_tree_msgs__action__Pick_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_Feedback * msg = (behavior_tree_msgs__action__Pick_Feedback *)allocator.allocate(sizeof(behavior_tree_msgs__action__Pick_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__action__Pick_Feedback));
  bool success = behavior_tree_msgs__action__Pick_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__action__Pick_Feedback__destroy(behavior_tree_msgs__action__Pick_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__action__Pick_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__action__Pick_Feedback__Sequence__init(behavior_tree_msgs__action__Pick_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_Feedback * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__action__Pick_Feedback *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__action__Pick_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__action__Pick_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__action__Pick_Feedback__fini(&data[i - 1]);
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
behavior_tree_msgs__action__Pick_Feedback__Sequence__fini(behavior_tree_msgs__action__Pick_Feedback__Sequence * array)
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
      behavior_tree_msgs__action__Pick_Feedback__fini(&array->data[i]);
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

behavior_tree_msgs__action__Pick_Feedback__Sequence *
behavior_tree_msgs__action__Pick_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_Feedback__Sequence * array = (behavior_tree_msgs__action__Pick_Feedback__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__action__Pick_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__action__Pick_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__action__Pick_Feedback__Sequence__destroy(behavior_tree_msgs__action__Pick_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__action__Pick_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__action__Pick_Feedback__Sequence__are_equal(const behavior_tree_msgs__action__Pick_Feedback__Sequence * lhs, const behavior_tree_msgs__action__Pick_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__action__Pick_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__action__Pick_Feedback__Sequence__copy(
  const behavior_tree_msgs__action__Pick_Feedback__Sequence * input,
  behavior_tree_msgs__action__Pick_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__action__Pick_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__action__Pick_Feedback * data =
      (behavior_tree_msgs__action__Pick_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__action__Pick_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__action__Pick_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__action__Pick_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "behavior_tree_msgs/action/detail/pick__functions.h"

bool
behavior_tree_msgs__action__Pick_SendGoal_Request__init(behavior_tree_msgs__action__Pick_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    behavior_tree_msgs__action__Pick_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!behavior_tree_msgs__action__Pick_Goal__init(&msg->goal)) {
    behavior_tree_msgs__action__Pick_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__action__Pick_SendGoal_Request__fini(behavior_tree_msgs__action__Pick_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  behavior_tree_msgs__action__Pick_Goal__fini(&msg->goal);
}

bool
behavior_tree_msgs__action__Pick_SendGoal_Request__are_equal(const behavior_tree_msgs__action__Pick_SendGoal_Request * lhs, const behavior_tree_msgs__action__Pick_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!behavior_tree_msgs__action__Pick_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__action__Pick_SendGoal_Request__copy(
  const behavior_tree_msgs__action__Pick_SendGoal_Request * input,
  behavior_tree_msgs__action__Pick_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!behavior_tree_msgs__action__Pick_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__action__Pick_SendGoal_Request *
behavior_tree_msgs__action__Pick_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_SendGoal_Request * msg = (behavior_tree_msgs__action__Pick_SendGoal_Request *)allocator.allocate(sizeof(behavior_tree_msgs__action__Pick_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__action__Pick_SendGoal_Request));
  bool success = behavior_tree_msgs__action__Pick_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__action__Pick_SendGoal_Request__destroy(behavior_tree_msgs__action__Pick_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__action__Pick_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence__init(behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_SendGoal_Request * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__action__Pick_SendGoal_Request *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__action__Pick_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__action__Pick_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__action__Pick_SendGoal_Request__fini(&data[i - 1]);
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
behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence__fini(behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence * array)
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
      behavior_tree_msgs__action__Pick_SendGoal_Request__fini(&array->data[i]);
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

behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence *
behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence * array = (behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence__destroy(behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence__are_equal(const behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence * lhs, const behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__action__Pick_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence__copy(
  const behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence * input,
  behavior_tree_msgs__action__Pick_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__action__Pick_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__action__Pick_SendGoal_Request * data =
      (behavior_tree_msgs__action__Pick_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__action__Pick_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__action__Pick_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__action__Pick_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
behavior_tree_msgs__action__Pick_SendGoal_Response__init(behavior_tree_msgs__action__Pick_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    behavior_tree_msgs__action__Pick_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__action__Pick_SendGoal_Response__fini(behavior_tree_msgs__action__Pick_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
behavior_tree_msgs__action__Pick_SendGoal_Response__are_equal(const behavior_tree_msgs__action__Pick_SendGoal_Response * lhs, const behavior_tree_msgs__action__Pick_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__action__Pick_SendGoal_Response__copy(
  const behavior_tree_msgs__action__Pick_SendGoal_Response * input,
  behavior_tree_msgs__action__Pick_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__action__Pick_SendGoal_Response *
behavior_tree_msgs__action__Pick_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_SendGoal_Response * msg = (behavior_tree_msgs__action__Pick_SendGoal_Response *)allocator.allocate(sizeof(behavior_tree_msgs__action__Pick_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__action__Pick_SendGoal_Response));
  bool success = behavior_tree_msgs__action__Pick_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__action__Pick_SendGoal_Response__destroy(behavior_tree_msgs__action__Pick_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__action__Pick_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence__init(behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_SendGoal_Response * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__action__Pick_SendGoal_Response *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__action__Pick_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__action__Pick_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__action__Pick_SendGoal_Response__fini(&data[i - 1]);
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
behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence__fini(behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence * array)
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
      behavior_tree_msgs__action__Pick_SendGoal_Response__fini(&array->data[i]);
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

behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence *
behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence * array = (behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence__destroy(behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence__are_equal(const behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence * lhs, const behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__action__Pick_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence__copy(
  const behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence * input,
  behavior_tree_msgs__action__Pick_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__action__Pick_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__action__Pick_SendGoal_Response * data =
      (behavior_tree_msgs__action__Pick_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__action__Pick_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__action__Pick_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__action__Pick_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
behavior_tree_msgs__action__Pick_GetResult_Request__init(behavior_tree_msgs__action__Pick_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    behavior_tree_msgs__action__Pick_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__action__Pick_GetResult_Request__fini(behavior_tree_msgs__action__Pick_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
behavior_tree_msgs__action__Pick_GetResult_Request__are_equal(const behavior_tree_msgs__action__Pick_GetResult_Request * lhs, const behavior_tree_msgs__action__Pick_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__action__Pick_GetResult_Request__copy(
  const behavior_tree_msgs__action__Pick_GetResult_Request * input,
  behavior_tree_msgs__action__Pick_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__action__Pick_GetResult_Request *
behavior_tree_msgs__action__Pick_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_GetResult_Request * msg = (behavior_tree_msgs__action__Pick_GetResult_Request *)allocator.allocate(sizeof(behavior_tree_msgs__action__Pick_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__action__Pick_GetResult_Request));
  bool success = behavior_tree_msgs__action__Pick_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__action__Pick_GetResult_Request__destroy(behavior_tree_msgs__action__Pick_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__action__Pick_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__action__Pick_GetResult_Request__Sequence__init(behavior_tree_msgs__action__Pick_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_GetResult_Request * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__action__Pick_GetResult_Request *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__action__Pick_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__action__Pick_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__action__Pick_GetResult_Request__fini(&data[i - 1]);
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
behavior_tree_msgs__action__Pick_GetResult_Request__Sequence__fini(behavior_tree_msgs__action__Pick_GetResult_Request__Sequence * array)
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
      behavior_tree_msgs__action__Pick_GetResult_Request__fini(&array->data[i]);
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

behavior_tree_msgs__action__Pick_GetResult_Request__Sequence *
behavior_tree_msgs__action__Pick_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_GetResult_Request__Sequence * array = (behavior_tree_msgs__action__Pick_GetResult_Request__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__action__Pick_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__action__Pick_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__action__Pick_GetResult_Request__Sequence__destroy(behavior_tree_msgs__action__Pick_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__action__Pick_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__action__Pick_GetResult_Request__Sequence__are_equal(const behavior_tree_msgs__action__Pick_GetResult_Request__Sequence * lhs, const behavior_tree_msgs__action__Pick_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__action__Pick_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__action__Pick_GetResult_Request__Sequence__copy(
  const behavior_tree_msgs__action__Pick_GetResult_Request__Sequence * input,
  behavior_tree_msgs__action__Pick_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__action__Pick_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__action__Pick_GetResult_Request * data =
      (behavior_tree_msgs__action__Pick_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__action__Pick_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__action__Pick_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__action__Pick_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "behavior_tree_msgs/action/detail/pick__functions.h"

bool
behavior_tree_msgs__action__Pick_GetResult_Response__init(behavior_tree_msgs__action__Pick_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!behavior_tree_msgs__action__Pick_Result__init(&msg->result)) {
    behavior_tree_msgs__action__Pick_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__action__Pick_GetResult_Response__fini(behavior_tree_msgs__action__Pick_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  behavior_tree_msgs__action__Pick_Result__fini(&msg->result);
}

bool
behavior_tree_msgs__action__Pick_GetResult_Response__are_equal(const behavior_tree_msgs__action__Pick_GetResult_Response * lhs, const behavior_tree_msgs__action__Pick_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!behavior_tree_msgs__action__Pick_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__action__Pick_GetResult_Response__copy(
  const behavior_tree_msgs__action__Pick_GetResult_Response * input,
  behavior_tree_msgs__action__Pick_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!behavior_tree_msgs__action__Pick_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__action__Pick_GetResult_Response *
behavior_tree_msgs__action__Pick_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_GetResult_Response * msg = (behavior_tree_msgs__action__Pick_GetResult_Response *)allocator.allocate(sizeof(behavior_tree_msgs__action__Pick_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__action__Pick_GetResult_Response));
  bool success = behavior_tree_msgs__action__Pick_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__action__Pick_GetResult_Response__destroy(behavior_tree_msgs__action__Pick_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__action__Pick_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__action__Pick_GetResult_Response__Sequence__init(behavior_tree_msgs__action__Pick_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_GetResult_Response * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__action__Pick_GetResult_Response *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__action__Pick_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__action__Pick_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__action__Pick_GetResult_Response__fini(&data[i - 1]);
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
behavior_tree_msgs__action__Pick_GetResult_Response__Sequence__fini(behavior_tree_msgs__action__Pick_GetResult_Response__Sequence * array)
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
      behavior_tree_msgs__action__Pick_GetResult_Response__fini(&array->data[i]);
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

behavior_tree_msgs__action__Pick_GetResult_Response__Sequence *
behavior_tree_msgs__action__Pick_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_GetResult_Response__Sequence * array = (behavior_tree_msgs__action__Pick_GetResult_Response__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__action__Pick_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__action__Pick_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__action__Pick_GetResult_Response__Sequence__destroy(behavior_tree_msgs__action__Pick_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__action__Pick_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__action__Pick_GetResult_Response__Sequence__are_equal(const behavior_tree_msgs__action__Pick_GetResult_Response__Sequence * lhs, const behavior_tree_msgs__action__Pick_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__action__Pick_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__action__Pick_GetResult_Response__Sequence__copy(
  const behavior_tree_msgs__action__Pick_GetResult_Response__Sequence * input,
  behavior_tree_msgs__action__Pick_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__action__Pick_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__action__Pick_GetResult_Response * data =
      (behavior_tree_msgs__action__Pick_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__action__Pick_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__action__Pick_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__action__Pick_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "behavior_tree_msgs/action/detail/pick__functions.h"

bool
behavior_tree_msgs__action__Pick_FeedbackMessage__init(behavior_tree_msgs__action__Pick_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    behavior_tree_msgs__action__Pick_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!behavior_tree_msgs__action__Pick_Feedback__init(&msg->feedback)) {
    behavior_tree_msgs__action__Pick_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
behavior_tree_msgs__action__Pick_FeedbackMessage__fini(behavior_tree_msgs__action__Pick_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  behavior_tree_msgs__action__Pick_Feedback__fini(&msg->feedback);
}

bool
behavior_tree_msgs__action__Pick_FeedbackMessage__are_equal(const behavior_tree_msgs__action__Pick_FeedbackMessage * lhs, const behavior_tree_msgs__action__Pick_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!behavior_tree_msgs__action__Pick_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
behavior_tree_msgs__action__Pick_FeedbackMessage__copy(
  const behavior_tree_msgs__action__Pick_FeedbackMessage * input,
  behavior_tree_msgs__action__Pick_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!behavior_tree_msgs__action__Pick_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

behavior_tree_msgs__action__Pick_FeedbackMessage *
behavior_tree_msgs__action__Pick_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_FeedbackMessage * msg = (behavior_tree_msgs__action__Pick_FeedbackMessage *)allocator.allocate(sizeof(behavior_tree_msgs__action__Pick_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(behavior_tree_msgs__action__Pick_FeedbackMessage));
  bool success = behavior_tree_msgs__action__Pick_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
behavior_tree_msgs__action__Pick_FeedbackMessage__destroy(behavior_tree_msgs__action__Pick_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    behavior_tree_msgs__action__Pick_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence__init(behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_FeedbackMessage * data = NULL;

  if (size) {
    data = (behavior_tree_msgs__action__Pick_FeedbackMessage *)allocator.zero_allocate(size, sizeof(behavior_tree_msgs__action__Pick_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = behavior_tree_msgs__action__Pick_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        behavior_tree_msgs__action__Pick_FeedbackMessage__fini(&data[i - 1]);
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
behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence__fini(behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence * array)
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
      behavior_tree_msgs__action__Pick_FeedbackMessage__fini(&array->data[i]);
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

behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence *
behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence * array = (behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence *)allocator.allocate(sizeof(behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence__destroy(behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence__are_equal(const behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence * lhs, const behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!behavior_tree_msgs__action__Pick_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence__copy(
  const behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence * input,
  behavior_tree_msgs__action__Pick_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(behavior_tree_msgs__action__Pick_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    behavior_tree_msgs__action__Pick_FeedbackMessage * data =
      (behavior_tree_msgs__action__Pick_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!behavior_tree_msgs__action__Pick_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          behavior_tree_msgs__action__Pick_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!behavior_tree_msgs__action__Pick_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
