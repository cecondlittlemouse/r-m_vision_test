// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gary_msgs:msg/AutoAimDebug.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "gary_msgs/msg/detail/auto_aim_debug__struct.h"
#include "gary_msgs/msg/detail/auto_aim_debug__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool gary_msgs__msg__auto_aim_debug__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("gary_msgs.msg._auto_aim_debug.AutoAimDebug", full_classname_dest, 42) == 0);
  }
  gary_msgs__msg__AutoAimDebug * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // plan_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "plan_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->plan_yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // plan_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "plan_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->plan_pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_diff
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_diff");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_diff = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_limit_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_limit_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_limit_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_limit_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_limit_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_limit_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gary_msgs__msg__auto_aim_debug__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AutoAimDebug */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gary_msgs.msg._auto_aim_debug");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AutoAimDebug");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gary_msgs__msg__AutoAimDebug * ros_message = (gary_msgs__msg__AutoAimDebug *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plan_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->plan_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plan_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plan_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->plan_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plan_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_diff
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_diff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_diff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_limit_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_limit_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_limit_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_limit_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_limit_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_limit_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
