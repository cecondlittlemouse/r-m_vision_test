// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/ICRABuffDebuffZoneAndLurkStatus.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_AND_LURK_STATUS__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_AND_LURK_STATUS__STRUCT_H_

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

/// Struct defined in msg/ICRABuffDebuffZoneAndLurkStatus in the package gary_msgs.
/**
  * This message contains ICRA buff debuff zone and lurk status data received from the referee system
 */
typedef struct gary_msgs__msg__ICRABuffDebuffZoneAndLurkStatus
{
  std_msgs__msg__Header header;
  bool f1_zone_status;
  uint8_t f1_zone_buff_debuff_status;
  bool f2_zone_status;
  uint8_t f2_zone_buff_debuff_status;
  bool f3_zone_status;
  uint8_t f3_zone_buff_debuff_status;
  bool f4_zone_status;
  uint8_t f4_zone_buff_debuff_status;
  bool f5_zone_status;
  uint8_t f5_zone_buff_debuff_status;
  bool f6_zone_status;
  uint8_t f6_zone_buff_debuff_status;
  uint16_t red1_bullet_left;
  uint16_t red2_bullet_left;
  uint16_t blue1_bullet_left;
  uint16_t blue2_bullet_left;
  uint8_t lurk_mode;
} gary_msgs__msg__ICRABuffDebuffZoneAndLurkStatus;

// Struct for a sequence of gary_msgs__msg__ICRABuffDebuffZoneAndLurkStatus.
typedef struct gary_msgs__msg__ICRABuffDebuffZoneAndLurkStatus__Sequence
{
  gary_msgs__msg__ICRABuffDebuffZoneAndLurkStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__ICRABuffDebuffZoneAndLurkStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__ICRA_BUFF_DEBUFF_ZONE_AND_LURK_STATUS__STRUCT_H_
