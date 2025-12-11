// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gary_msgs:msg/ClientReceive.idl
// generated code does not contain a copyright notice
#include "gary_msgs/msg/detail/client_receive__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
gary_msgs__msg__ClientReceive__init(gary_msgs__msg__ClientReceive * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    gary_msgs__msg__ClientReceive__fini(msg);
    return false;
  }
  // target_position_x
  // target_position_y
  // target_robot_id
  return true;
}

void
gary_msgs__msg__ClientReceive__fini(gary_msgs__msg__ClientReceive * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // target_position_x
  // target_position_y
  // target_robot_id
}

bool
gary_msgs__msg__ClientReceive__are_equal(const gary_msgs__msg__ClientReceive * lhs, const gary_msgs__msg__ClientReceive * rhs)
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
  // target_position_x
  if (lhs->target_position_x != rhs->target_position_x) {
    return false;
  }
  // target_position_y
  if (lhs->target_position_y != rhs->target_position_y) {
    return false;
  }
  // target_robot_id
  if (lhs->target_robot_id != rhs->target_robot_id) {
    return false;
  }
  return true;
}

bool
gary_msgs__msg__ClientReceive__copy(
  const gary_msgs__msg__ClientReceive * input,
  gary_msgs__msg__ClientReceive * output)
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
  // target_position_x
  output->target_position_x = input->target_position_x;
  // target_position_y
  output->target_position_y = input->target_position_y;
  // target_robot_id
  output->target_robot_id = input->target_robot_id;
  return true;
}

gary_msgs__msg__ClientReceive *
gary_msgs__msg__ClientReceive__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__ClientReceive * msg = (gary_msgs__msg__ClientReceive *)allocator.allocate(sizeof(gary_msgs__msg__ClientReceive), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gary_msgs__msg__ClientReceive));
  bool success = gary_msgs__msg__ClientReceive__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gary_msgs__msg__ClientReceive__destroy(gary_msgs__msg__ClientReceive * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gary_msgs__msg__ClientReceive__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gary_msgs__msg__ClientReceive__Sequence__init(gary_msgs__msg__ClientReceive__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__ClientReceive * data = NULL;

  if (size) {
    data = (gary_msgs__msg__ClientReceive *)allocator.zero_allocate(size, sizeof(gary_msgs__msg__ClientReceive), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gary_msgs__msg__ClientReceive__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gary_msgs__msg__ClientReceive__fini(&data[i - 1]);
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
gary_msgs__msg__ClientReceive__Sequence__fini(gary_msgs__msg__ClientReceive__Sequence * array)
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
      gary_msgs__msg__ClientReceive__fini(&array->data[i]);
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

gary_msgs__msg__ClientReceive__Sequence *
gary_msgs__msg__ClientReceive__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__ClientReceive__Sequence * array = (gary_msgs__msg__ClientReceive__Sequence *)allocator.allocate(sizeof(gary_msgs__msg__ClientReceive__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gary_msgs__msg__ClientReceive__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gary_msgs__msg__ClientReceive__Sequence__destroy(gary_msgs__msg__ClientReceive__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gary_msgs__msg__ClientReceive__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gary_msgs__msg__ClientReceive__Sequence__are_equal(const gary_msgs__msg__ClientReceive__Sequence * lhs, const gary_msgs__msg__ClientReceive__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gary_msgs__msg__ClientReceive__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gary_msgs__msg__ClientReceive__Sequence__copy(
  const gary_msgs__msg__ClientReceive__Sequence * input,
  gary_msgs__msg__ClientReceive__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gary_msgs__msg__ClientReceive);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gary_msgs__msg__ClientReceive * data =
      (gary_msgs__msg__ClientReceive *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gary_msgs__msg__ClientReceive__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gary_msgs__msg__ClientReceive__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gary_msgs__msg__ClientReceive__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
