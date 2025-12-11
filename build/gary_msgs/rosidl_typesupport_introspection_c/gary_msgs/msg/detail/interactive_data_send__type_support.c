// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gary_msgs:msg/InteractiveDataSend.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gary_msgs/msg/detail/interactive_data_send__rosidl_typesupport_introspection_c.h"
#include "gary_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gary_msgs/msg/detail/interactive_data_send__functions.h"
#include "gary_msgs/msg/detail/interactive_data_send__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__InteractiveDataSend_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gary_msgs__msg__InteractiveDataSend__init(message_memory);
}

void gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__InteractiveDataSend_fini_function(void * message_memory)
{
  gary_msgs__msg__InteractiveDataSend__fini(message_memory);
}

size_t gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__size_function__InteractiveDataSend__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__get_const_function__InteractiveDataSend__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__get_function__InteractiveDataSend__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__fetch_function__InteractiveDataSend__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__get_const_function__InteractiveDataSend__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__assign_function__InteractiveDataSend__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__get_function__InteractiveDataSend__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__resize_function__InteractiveDataSend__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__InteractiveDataSend_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gary_msgs__msg__InteractiveDataSend, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gary_msgs__msg__InteractiveDataSend, priority),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "valid_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gary_msgs__msg__InteractiveDataSend, valid_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_cmd_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gary_msgs__msg__InteractiveDataSend, data_cmd_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sender_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gary_msgs__msg__InteractiveDataSend, sender_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "receiver_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gary_msgs__msg__InteractiveDataSend, receiver_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gary_msgs__msg__InteractiveDataSend, data_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gary_msgs__msg__InteractiveDataSend, data),  // bytes offset in struct
    NULL,  // default value
    gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__size_function__InteractiveDataSend__data,  // size() function pointer
    gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__get_const_function__InteractiveDataSend__data,  // get_const(index) function pointer
    gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__get_function__InteractiveDataSend__data,  // get(index) function pointer
    gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__fetch_function__InteractiveDataSend__data,  // fetch(index, &value) function pointer
    gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__assign_function__InteractiveDataSend__data,  // assign(index, value) function pointer
    gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__resize_function__InteractiveDataSend__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__InteractiveDataSend_message_members = {
  "gary_msgs__msg",  // message namespace
  "InteractiveDataSend",  // message name
  8,  // number of fields
  sizeof(gary_msgs__msg__InteractiveDataSend),
  gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__InteractiveDataSend_message_member_array,  // message members
  gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__InteractiveDataSend_init_function,  // function to initialize message memory (memory has to be allocated)
  gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__InteractiveDataSend_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__InteractiveDataSend_message_type_support_handle = {
  0,
  &gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__InteractiveDataSend_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gary_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gary_msgs, msg, InteractiveDataSend)() {
  gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__InteractiveDataSend_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__InteractiveDataSend_message_type_support_handle.typesupport_identifier) {
    gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__InteractiveDataSend_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gary_msgs__msg__InteractiveDataSend__rosidl_typesupport_introspection_c__InteractiveDataSend_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
