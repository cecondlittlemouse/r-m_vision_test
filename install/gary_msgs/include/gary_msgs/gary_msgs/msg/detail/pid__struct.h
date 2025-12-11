// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/PID.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__PID__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__PID__STRUCT_H_

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

/// Struct defined in msg/PID in the package gary_msgs.
/**
  * This message contains PID controller data
 */
typedef struct gary_msgs__msg__PID
{
  std_msgs__msg__Header header;
  /// parameters
  double kp;
  double ki;
  double kd;
  /// limitations
  double max_out;
  double max_iout;
  /// status
  double set;
  double feedback;
  double error;
  double error_sum;
  double last_error;
  /// output
  double pout;
  double iout;
  double dout;
  double out;
} gary_msgs__msg__PID;

// Struct for a sequence of gary_msgs__msg__PID.
typedef struct gary_msgs__msg__PID__Sequence
{
  gary_msgs__msg__PID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__PID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__PID__STRUCT_H_
