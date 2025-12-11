// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/RFIDStatus.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__RFID_STATUS__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__RFID_STATUS__STRUCT_H_

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

/// Struct defined in msg/RFIDStatus in the package gary_msgs.
/**
  * This message contains RFID status data received from the referee system
 */
typedef struct gary_msgs__msg__RFIDStatus
{
  std_msgs__msg__Header header;
  bool base_buff_point;
  bool elevated_ground_buff_point;
  bool power_rune_buff_point;
  bool launch_ramp_buff_point;
  bool outpost_buff_point;
  bool hp_recovery_buff_point;
  bool engineer_robot_revival_card;
} gary_msgs__msg__RFIDStatus;

// Struct for a sequence of gary_msgs__msg__RFIDStatus.
typedef struct gary_msgs__msg__RFIDStatus__Sequence
{
  gary_msgs__msg__RFIDStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__RFIDStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__RFID_STATUS__STRUCT_H_
