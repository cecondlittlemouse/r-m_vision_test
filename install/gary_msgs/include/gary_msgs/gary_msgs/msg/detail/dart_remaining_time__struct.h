// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/DartRemainingTime.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__DART_REMAINING_TIME__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__DART_REMAINING_TIME__STRUCT_H_

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

/// Struct defined in msg/DartRemainingTime in the package gary_msgs.
/**
  * This message contains dart remaining time data received from the referee system
 */
typedef struct gary_msgs__msg__DartRemainingTime
{
  std_msgs__msg__Header header;
  /// dart remaining time, in seconds
  uint8_t dart_remaining_time;
} gary_msgs__msg__DartRemainingTime;

// Struct for a sequence of gary_msgs__msg__DartRemainingTime.
typedef struct gary_msgs__msg__DartRemainingTime__Sequence
{
  gary_msgs__msg__DartRemainingTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__DartRemainingTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__DART_REMAINING_TIME__STRUCT_H_
