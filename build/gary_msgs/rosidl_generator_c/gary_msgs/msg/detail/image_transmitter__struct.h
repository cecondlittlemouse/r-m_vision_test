// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/ImageTransmitter.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__IMAGE_TRANSMITTER__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__IMAGE_TRANSMITTER__STRUCT_H_

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

/// Struct defined in msg/ImageTransmitter in the package gary_msgs.
/**
  * This message contains data received from the image transmitter
 */
typedef struct gary_msgs__msg__ImageTransmitter
{
  std_msgs__msg__Header header;
  /// mouse
  float mouse_x;
  float mouse_y;
  float mouse_z;
  bool mouse_press_l;
  bool mouse_press_r;
  /// key board
  bool key_w;
  bool key_s;
  bool key_a;
  bool key_d;
  bool key_shift;
  bool key_ctrl;
  bool key_q;
  bool key_e;
  bool key_r;
  bool key_f;
  bool key_g;
  bool key_z;
  bool key_x;
  bool key_c;
  bool key_v;
  bool key_b;
} gary_msgs__msg__ImageTransmitter;

// Struct for a sequence of gary_msgs__msg__ImageTransmitter.
typedef struct gary_msgs__msg__ImageTransmitter__Sequence
{
  gary_msgs__msg__ImageTransmitter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__ImageTransmitter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__IMAGE_TRANSMITTER__STRUCT_H_
