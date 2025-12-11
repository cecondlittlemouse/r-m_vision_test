// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gary_msgs:msg/PowerHeat.idl
// generated code does not contain a copyright notice

#ifndef GARY_MSGS__MSG__DETAIL__POWER_HEAT__FUNCTIONS_H_
#define GARY_MSGS__MSG__DETAIL__POWER_HEAT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gary_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "gary_msgs/msg/detail/power_heat__struct.h"

/// Initialize msg/PowerHeat message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gary_msgs__msg__PowerHeat
 * )) before or use
 * gary_msgs__msg__PowerHeat__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gary_msgs
bool
gary_msgs__msg__PowerHeat__init(gary_msgs__msg__PowerHeat * msg);

/// Finalize msg/PowerHeat message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gary_msgs
void
gary_msgs__msg__PowerHeat__fini(gary_msgs__msg__PowerHeat * msg);

/// Create msg/PowerHeat message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gary_msgs__msg__PowerHeat__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gary_msgs
gary_msgs__msg__PowerHeat *
gary_msgs__msg__PowerHeat__create();

/// Destroy msg/PowerHeat message.
/**
 * It calls
 * gary_msgs__msg__PowerHeat__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gary_msgs
void
gary_msgs__msg__PowerHeat__destroy(gary_msgs__msg__PowerHeat * msg);

/// Check for msg/PowerHeat message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gary_msgs
bool
gary_msgs__msg__PowerHeat__are_equal(const gary_msgs__msg__PowerHeat * lhs, const gary_msgs__msg__PowerHeat * rhs);

/// Copy a msg/PowerHeat message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gary_msgs
bool
gary_msgs__msg__PowerHeat__copy(
  const gary_msgs__msg__PowerHeat * input,
  gary_msgs__msg__PowerHeat * output);

/// Initialize array of msg/PowerHeat messages.
/**
 * It allocates the memory for the number of elements and calls
 * gary_msgs__msg__PowerHeat__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gary_msgs
bool
gary_msgs__msg__PowerHeat__Sequence__init(gary_msgs__msg__PowerHeat__Sequence * array, size_t size);

/// Finalize array of msg/PowerHeat messages.
/**
 * It calls
 * gary_msgs__msg__PowerHeat__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gary_msgs
void
gary_msgs__msg__PowerHeat__Sequence__fini(gary_msgs__msg__PowerHeat__Sequence * array);

/// Create array of msg/PowerHeat messages.
/**
 * It allocates the memory for the array and calls
 * gary_msgs__msg__PowerHeat__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gary_msgs
gary_msgs__msg__PowerHeat__Sequence *
gary_msgs__msg__PowerHeat__Sequence__create(size_t size);

/// Destroy array of msg/PowerHeat messages.
/**
 * It calls
 * gary_msgs__msg__PowerHeat__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gary_msgs
void
gary_msgs__msg__PowerHeat__Sequence__destroy(gary_msgs__msg__PowerHeat__Sequence * array);

/// Check for msg/PowerHeat message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gary_msgs
bool
gary_msgs__msg__PowerHeat__Sequence__are_equal(const gary_msgs__msg__PowerHeat__Sequence * lhs, const gary_msgs__msg__PowerHeat__Sequence * rhs);

/// Copy an array of msg/PowerHeat messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_gary_msgs
bool
gary_msgs__msg__PowerHeat__Sequence__copy(
  const gary_msgs__msg__PowerHeat__Sequence * input,
  gary_msgs__msg__PowerHeat__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GARY_MSGS__MSG__DETAIL__POWER_HEAT__FUNCTIONS_H_
