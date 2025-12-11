// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/PowerHeat.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__POWER_HEAT__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__POWER_HEAT__STRUCT_H_

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

/// Struct defined in msg/PowerHeat in the package gary_msgs.
/**
  * This message contains power and heat data received from the referee system
 */
typedef struct gary_msgs__msg__PowerHeat
{
  std_msgs__msg__Header header;
  /// chassis output voltage, in volt
  float chassis_volt;
  /// chassis output current, in amp
  float chassis_current;
  /// chassis current power consumption, in watt
  float chassis_power;
  /// chassis power buffer, in joule
  uint16_t chassis_power_buffer;
  /// shooter heat
  uint16_t shooter_17mm_id1_heat;
  uint16_t shooter_17mm_id2_heat;
  uint16_t shooter_42mm_id1_heat;
} gary_msgs__msg__PowerHeat;

// Struct for a sequence of gary_msgs__msg__PowerHeat.
typedef struct gary_msgs__msg__PowerHeat__Sequence
{
  gary_msgs__msg__PowerHeat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__PowerHeat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__POWER_HEAT__STRUCT_H_
