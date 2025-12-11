// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/SupplyProjectileRequest.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__SUPPLY_PROJECTILE_REQUEST__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__SUPPLY_PROJECTILE_REQUEST__STRUCT_H_

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

/// Struct defined in msg/SupplyProjectileRequest in the package gary_msgs.
/**
  * This message contains supply projectile request data sent to the referee system
 */
typedef struct gary_msgs__msg__SupplyProjectileRequest
{
  std_msgs__msg__Header header;
  /// supply projectile id
  uint8_t supply_projectile_id;
  /// supply robot id
  uint8_t supply_robot_id;
  /// supply bullet number
  uint8_t supply_bullet_num;
} gary_msgs__msg__SupplyProjectileRequest;

// Struct for a sequence of gary_msgs__msg__SupplyProjectileRequest.
typedef struct gary_msgs__msg__SupplyProjectileRequest__Sequence
{
  gary_msgs__msg__SupplyProjectileRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__SupplyProjectileRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__SUPPLY_PROJECTILE_REQUEST__STRUCT_H_
