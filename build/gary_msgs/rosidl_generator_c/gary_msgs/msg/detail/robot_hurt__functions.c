// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gary_msgs:msg/RobotHurt.idl
// generated code does not contain a copyright notice
#include "gary_msgs/msg/detail/robot_hurt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
gary_msgs__msg__RobotHurt__init(gary_msgs__msg__RobotHurt * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    gary_msgs__msg__RobotHurt__fini(msg);
    return false;
  }
  // hurt_type
  // armor_id
  return true;
}

void
gary_msgs__msg__RobotHurt__fini(gary_msgs__msg__RobotHurt * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // hurt_type
  // armor_id
}

bool
gary_msgs__msg__RobotHurt__are_equal(const gary_msgs__msg__RobotHurt * lhs, const gary_msgs__msg__RobotHurt * rhs)
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
  // hurt_type
  if (lhs->hurt_type != rhs->hurt_type) {
    return false;
  }
  // armor_id
  if (lhs->armor_id != rhs->armor_id) {
    return false;
  }
  return true;
}

bool
gary_msgs__msg__RobotHurt__copy(
  const gary_msgs__msg__RobotHurt * input,
  gary_msgs__msg__RobotHurt * output)
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
  // hurt_type
  output->hurt_type = input->hurt_type;
  // armor_id
  output->armor_id = input->armor_id;
  return true;
}

gary_msgs__msg__RobotHurt *
gary_msgs__msg__RobotHurt__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__RobotHurt * msg = (gary_msgs__msg__RobotHurt *)allocator.allocate(sizeof(gary_msgs__msg__RobotHurt), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gary_msgs__msg__RobotHurt));
  bool success = gary_msgs__msg__RobotHurt__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gary_msgs__msg__RobotHurt__destroy(gary_msgs__msg__RobotHurt * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gary_msgs__msg__RobotHurt__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gary_msgs__msg__RobotHurt__Sequence__init(gary_msgs__msg__RobotHurt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__RobotHurt * data = NULL;

  if (size) {
    data = (gary_msgs__msg__RobotHurt *)allocator.zero_allocate(size, sizeof(gary_msgs__msg__RobotHurt), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gary_msgs__msg__RobotHurt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gary_msgs__msg__RobotHurt__fini(&data[i - 1]);
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
gary_msgs__msg__RobotHurt__Sequence__fini(gary_msgs__msg__RobotHurt__Sequence * array)
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
      gary_msgs__msg__RobotHurt__fini(&array->data[i]);
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

gary_msgs__msg__RobotHurt__Sequence *
gary_msgs__msg__RobotHurt__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__msg__RobotHurt__Sequence * array = (gary_msgs__msg__RobotHurt__Sequence *)allocator.allocate(sizeof(gary_msgs__msg__RobotHurt__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gary_msgs__msg__RobotHurt__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gary_msgs__msg__RobotHurt__Sequence__destroy(gary_msgs__msg__RobotHurt__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gary_msgs__msg__RobotHurt__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gary_msgs__msg__RobotHurt__Sequence__are_equal(const gary_msgs__msg__RobotHurt__Sequence * lhs, const gary_msgs__msg__RobotHurt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gary_msgs__msg__RobotHurt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gary_msgs__msg__RobotHurt__Sequence__copy(
  const gary_msgs__msg__RobotHurt__Sequence * input,
  gary_msgs__msg__RobotHurt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gary_msgs__msg__RobotHurt);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gary_msgs__msg__RobotHurt * data =
      (gary_msgs__msg__RobotHurt *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gary_msgs__msg__RobotHurt__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gary_msgs__msg__RobotHurt__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gary_msgs__msg__RobotHurt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
