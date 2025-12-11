// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gary_msgs:srv/VisionModeSwitch.idl
// generated code does not contain a copyright notice
#include "gary_msgs/srv/detail/vision_mode_switch__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
gary_msgs__srv__VisionModeSwitch_Request__init(gary_msgs__srv__VisionModeSwitch_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  return true;
}

void
gary_msgs__srv__VisionModeSwitch_Request__fini(gary_msgs__srv__VisionModeSwitch_Request * msg)
{
  if (!msg) {
    return;
  }
  // mode
}

bool
gary_msgs__srv__VisionModeSwitch_Request__are_equal(const gary_msgs__srv__VisionModeSwitch_Request * lhs, const gary_msgs__srv__VisionModeSwitch_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
gary_msgs__srv__VisionModeSwitch_Request__copy(
  const gary_msgs__srv__VisionModeSwitch_Request * input,
  gary_msgs__srv__VisionModeSwitch_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  return true;
}

gary_msgs__srv__VisionModeSwitch_Request *
gary_msgs__srv__VisionModeSwitch_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__srv__VisionModeSwitch_Request * msg = (gary_msgs__srv__VisionModeSwitch_Request *)allocator.allocate(sizeof(gary_msgs__srv__VisionModeSwitch_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gary_msgs__srv__VisionModeSwitch_Request));
  bool success = gary_msgs__srv__VisionModeSwitch_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gary_msgs__srv__VisionModeSwitch_Request__destroy(gary_msgs__srv__VisionModeSwitch_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gary_msgs__srv__VisionModeSwitch_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gary_msgs__srv__VisionModeSwitch_Request__Sequence__init(gary_msgs__srv__VisionModeSwitch_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__srv__VisionModeSwitch_Request * data = NULL;

  if (size) {
    data = (gary_msgs__srv__VisionModeSwitch_Request *)allocator.zero_allocate(size, sizeof(gary_msgs__srv__VisionModeSwitch_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gary_msgs__srv__VisionModeSwitch_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gary_msgs__srv__VisionModeSwitch_Request__fini(&data[i - 1]);
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
gary_msgs__srv__VisionModeSwitch_Request__Sequence__fini(gary_msgs__srv__VisionModeSwitch_Request__Sequence * array)
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
      gary_msgs__srv__VisionModeSwitch_Request__fini(&array->data[i]);
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

gary_msgs__srv__VisionModeSwitch_Request__Sequence *
gary_msgs__srv__VisionModeSwitch_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__srv__VisionModeSwitch_Request__Sequence * array = (gary_msgs__srv__VisionModeSwitch_Request__Sequence *)allocator.allocate(sizeof(gary_msgs__srv__VisionModeSwitch_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gary_msgs__srv__VisionModeSwitch_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gary_msgs__srv__VisionModeSwitch_Request__Sequence__destroy(gary_msgs__srv__VisionModeSwitch_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gary_msgs__srv__VisionModeSwitch_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gary_msgs__srv__VisionModeSwitch_Request__Sequence__are_equal(const gary_msgs__srv__VisionModeSwitch_Request__Sequence * lhs, const gary_msgs__srv__VisionModeSwitch_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gary_msgs__srv__VisionModeSwitch_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gary_msgs__srv__VisionModeSwitch_Request__Sequence__copy(
  const gary_msgs__srv__VisionModeSwitch_Request__Sequence * input,
  gary_msgs__srv__VisionModeSwitch_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gary_msgs__srv__VisionModeSwitch_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gary_msgs__srv__VisionModeSwitch_Request * data =
      (gary_msgs__srv__VisionModeSwitch_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gary_msgs__srv__VisionModeSwitch_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gary_msgs__srv__VisionModeSwitch_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gary_msgs__srv__VisionModeSwitch_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
gary_msgs__srv__VisionModeSwitch_Response__init(gary_msgs__srv__VisionModeSwitch_Response * msg)
{
  if (!msg) {
    return false;
  }
  // succ
  return true;
}

void
gary_msgs__srv__VisionModeSwitch_Response__fini(gary_msgs__srv__VisionModeSwitch_Response * msg)
{
  if (!msg) {
    return;
  }
  // succ
}

bool
gary_msgs__srv__VisionModeSwitch_Response__are_equal(const gary_msgs__srv__VisionModeSwitch_Response * lhs, const gary_msgs__srv__VisionModeSwitch_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // succ
  if (lhs->succ != rhs->succ) {
    return false;
  }
  return true;
}

bool
gary_msgs__srv__VisionModeSwitch_Response__copy(
  const gary_msgs__srv__VisionModeSwitch_Response * input,
  gary_msgs__srv__VisionModeSwitch_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // succ
  output->succ = input->succ;
  return true;
}

gary_msgs__srv__VisionModeSwitch_Response *
gary_msgs__srv__VisionModeSwitch_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__srv__VisionModeSwitch_Response * msg = (gary_msgs__srv__VisionModeSwitch_Response *)allocator.allocate(sizeof(gary_msgs__srv__VisionModeSwitch_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gary_msgs__srv__VisionModeSwitch_Response));
  bool success = gary_msgs__srv__VisionModeSwitch_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gary_msgs__srv__VisionModeSwitch_Response__destroy(gary_msgs__srv__VisionModeSwitch_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gary_msgs__srv__VisionModeSwitch_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gary_msgs__srv__VisionModeSwitch_Response__Sequence__init(gary_msgs__srv__VisionModeSwitch_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__srv__VisionModeSwitch_Response * data = NULL;

  if (size) {
    data = (gary_msgs__srv__VisionModeSwitch_Response *)allocator.zero_allocate(size, sizeof(gary_msgs__srv__VisionModeSwitch_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gary_msgs__srv__VisionModeSwitch_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gary_msgs__srv__VisionModeSwitch_Response__fini(&data[i - 1]);
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
gary_msgs__srv__VisionModeSwitch_Response__Sequence__fini(gary_msgs__srv__VisionModeSwitch_Response__Sequence * array)
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
      gary_msgs__srv__VisionModeSwitch_Response__fini(&array->data[i]);
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

gary_msgs__srv__VisionModeSwitch_Response__Sequence *
gary_msgs__srv__VisionModeSwitch_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gary_msgs__srv__VisionModeSwitch_Response__Sequence * array = (gary_msgs__srv__VisionModeSwitch_Response__Sequence *)allocator.allocate(sizeof(gary_msgs__srv__VisionModeSwitch_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gary_msgs__srv__VisionModeSwitch_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gary_msgs__srv__VisionModeSwitch_Response__Sequence__destroy(gary_msgs__srv__VisionModeSwitch_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gary_msgs__srv__VisionModeSwitch_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gary_msgs__srv__VisionModeSwitch_Response__Sequence__are_equal(const gary_msgs__srv__VisionModeSwitch_Response__Sequence * lhs, const gary_msgs__srv__VisionModeSwitch_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gary_msgs__srv__VisionModeSwitch_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gary_msgs__srv__VisionModeSwitch_Response__Sequence__copy(
  const gary_msgs__srv__VisionModeSwitch_Response__Sequence * input,
  gary_msgs__srv__VisionModeSwitch_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gary_msgs__srv__VisionModeSwitch_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gary_msgs__srv__VisionModeSwitch_Response * data =
      (gary_msgs__srv__VisionModeSwitch_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gary_msgs__srv__VisionModeSwitch_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gary_msgs__srv__VisionModeSwitch_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gary_msgs__srv__VisionModeSwitch_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
