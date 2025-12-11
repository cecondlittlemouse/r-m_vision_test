// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gary_msgs:msg/SupplyProjectileAction.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__STRUCT_H_
#define GARY_MSGS__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SUPPLY_ROBOT_NONE'.
enum
{
  gary_msgs__msg__SupplyProjectileAction__SUPPLY_ROBOT_NONE = 0
};

/// Constant 'SUPPLY_ROBOT_RED1'.
enum
{
  gary_msgs__msg__SupplyProjectileAction__SUPPLY_ROBOT_RED1 = 1
};

/// Constant 'SUPPLY_ROBOT_RED2'.
enum
{
  gary_msgs__msg__SupplyProjectileAction__SUPPLY_ROBOT_RED2 = 2
};

/// Constant 'SUPPLY_ROBOT_RED3'.
enum
{
  gary_msgs__msg__SupplyProjectileAction__SUPPLY_ROBOT_RED3 = 3
};

/// Constant 'SUPPLY_ROBOT_RED4'.
enum
{
  gary_msgs__msg__SupplyProjectileAction__SUPPLY_ROBOT_RED4 = 4
};

/// Constant 'SUPPLY_ROBOT_RED5'.
enum
{
  gary_msgs__msg__SupplyProjectileAction__SUPPLY_ROBOT_RED5 = 5
};

/// Constant 'SUPPLY_ROBOT_BLUE1'.
enum
{
  gary_msgs__msg__SupplyProjectileAction__SUPPLY_ROBOT_BLUE1 = 101
};

/// Constant 'SUPPLY_ROBOT_BLUE2'.
enum
{
  gary_msgs__msg__SupplyProjectileAction__SUPPLY_ROBOT_BLUE2 = 102
};

/// Constant 'SUPPLY_ROBOT_BLUE3'.
enum
{
  gary_msgs__msg__SupplyProjectileAction__SUPPLY_ROBOT_BLUE3 = 103
};

/// Constant 'SUPPLY_ROBOT_BLUE4'.
enum
{
  gary_msgs__msg__SupplyProjectileAction__SUPPLY_ROBOT_BLUE4 = 104
};

/// Constant 'SUPPLY_ROBOT_BLUE5'.
enum
{
  gary_msgs__msg__SupplyProjectileAction__SUPPLY_ROBOT_BLUE5 = 105
};

/// Constant 'SUPPLY_PROJECTILE_STEP_CLOSE'.
enum
{
  gary_msgs__msg__SupplyProjectileAction__SUPPLY_PROJECTILE_STEP_CLOSE = 0
};

/// Constant 'SUPPLY_PROJECTILE_STEP_PREPARE'.
enum
{
  gary_msgs__msg__SupplyProjectileAction__SUPPLY_PROJECTILE_STEP_PREPARE = 1
};

/// Constant 'SUPPLY_PROJECTILE_STEP_FALLING'.
enum
{
  gary_msgs__msg__SupplyProjectileAction__SUPPLY_PROJECTILE_STEP_FALLING = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/SupplyProjectileAction in the package gary_msgs.
/**
  * This message contains supply projectile action data received from the referee system
 */
typedef struct gary_msgs__msg__SupplyProjectileAction
{
  std_msgs__msg__Header header;
  /// supply projectile id
  uint8_t supply_projectile_id;
  /// supply robot id, see enum below
  uint8_t supply_robot_id;
  /// supply projectile step, see enum below
  uint8_t supply_projectile_step;
  /// supply bullet number
  uint8_t supply_bullet_num;
} gary_msgs__msg__SupplyProjectileAction;

// Struct for a sequence of gary_msgs__msg__SupplyProjectileAction.
typedef struct gary_msgs__msg__SupplyProjectileAction__Sequence
{
  gary_msgs__msg__SupplyProjectileAction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gary_msgs__msg__SupplyProjectileAction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__SUPPLY_PROJECTILE_ACTION__STRUCT_H_
