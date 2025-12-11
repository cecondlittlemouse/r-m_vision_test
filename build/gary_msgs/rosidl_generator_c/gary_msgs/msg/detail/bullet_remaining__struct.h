// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__BULLET_REMAINING__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__BULLET_REMAINING__STRUCT_H_

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

/// Struct defined in msg/BulletRemaining in the package gary_msgs.
/**
  * This message contains bullet remaining data received from the referee system
 */
typedef struct gary_msgs__msg__BulletRemaining
{
  std_msgs__msg__Header header;
  uint16_t remaining_17mm_num;
  uint16_t remaining_42mm_num;
  uint16_t remaining_coin_num;
} gary_msgs__msg__BulletRemaining;

// Struct for a sequence of gary_msgs__msg__BulletRemaining.
typedef struct gary_msgs__msg__BulletRemaining__Sequence
{
  gary_msgs__msg__BulletRemaining * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__BulletRemaining__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__BULLET_REMAINING__STRUCT_H_
