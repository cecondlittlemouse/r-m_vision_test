// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/CustomController.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__CUSTOM_CONTROLLER__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__CUSTOM_CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CustomController in the package gary_msgs.
/**
  * This message contains custom controller data sent to or received from the referee system
 */
typedef struct gary_msgs__msg__CustomController
{
  std_msgs__msg__Header header;
  /// data length
  uint8_t data_length;
  /// payload
  rosidl_runtime_c__uint8__Sequence data;
} gary_msgs__msg__CustomController;

// Struct for a sequence of gary_msgs__msg__CustomController.
typedef struct gary_msgs__msg__CustomController__Sequence
{
  gary_msgs__msg__CustomController * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__CustomController__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__CUSTOM_CONTROLLER__STRUCT_H_
