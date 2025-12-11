// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gary_msgs:msg/DartClientCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gary_msgs/msg/detail/dart_client_cmd__rosidl_typesupport_introspection_c.h"
#include "gary_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gary_msgs/msg/detail/dart_client_cmd__functions.h"
#include "gary_msgs/msg/detail/dart_client_cmd__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gary_msgs__msg__DartClientCmd__rosidl_typesupport_introspection_c__DartClientCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gary_msgs__msg__DartClientCmd__init(message_memory);
}

void gary_msgs__msg__DartClientCmd__rosidl_typesupport_introspection_c__DartClientCmd_fini_function(void * message_memory)
{
  gary_msgs__msg__DartClientCmd__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gary_msgs__msg__DartClientCmd__rosidl_typesupport_introspection_c__DartClientCmd_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gary_msgs__msg__DartClientCmd, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "launch_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gary_msgs__msg__DartClientCmd, launch_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attack_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gary_msgs__msg__DartClientCmd, attack_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_change_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gary_msgs__msg__DartClientCmd, target_change_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "operate_launch_cmd_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gary_msgs__msg__DartClientCmd, operate_launch_cmd_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gary_msgs__msg__DartClientCmd__rosidl_typesupport_introspection_c__DartClientCmd_message_members = {
  "gary_msgs__msg",  // message namespace
  "DartClientCmd",  // message name
  5,  // number of fields
  sizeof(gary_msgs__msg__DartClientCmd),
  gary_msgs__msg__DartClientCmd__rosidl_typesupport_introspection_c__DartClientCmd_message_member_array,  // message members
  gary_msgs__msg__DartClientCmd__rosidl_typesupport_introspection_c__DartClientCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  gary_msgs__msg__DartClientCmd__rosidl_typesupport_introspection_c__DartClientCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gary_msgs__msg__DartClientCmd__rosidl_typesupport_introspection_c__DartClientCmd_message_type_support_handle = {
  0,
  &gary_msgs__msg__DartClientCmd__rosidl_typesupport_introspection_c__DartClientCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gary_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gary_msgs, msg, DartClientCmd)() {
  gary_msgs__msg__DartClientCmd__rosidl_typesupport_introspection_c__DartClientCmd_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!gary_msgs__msg__DartClientCmd__rosidl_typesupport_introspection_c__DartClientCmd_message_type_support_handle.typesupport_identifier) {
    gary_msgs__msg__DartClientCmd__rosidl_typesupport_introspection_c__DartClientCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gary_msgs__msg__DartClientCmd__rosidl_typesupport_introspection_c__DartClientCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
