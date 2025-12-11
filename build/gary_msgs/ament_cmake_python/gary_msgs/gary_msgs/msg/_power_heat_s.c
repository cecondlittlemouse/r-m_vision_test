// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gary_msgs:msg/PowerHeat.idl
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
#include "gary_msgs/msg/detail/power_heat__struct.h"
#include "gary_msgs/msg/detail/power_heat__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool gary_msgs__msg__power_heat__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
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
    assert(strncmp("gary_msgs.msg._power_heat.PowerHeat", full_classname_dest, 35) == 0);
  }
  gary_msgs__msg__PowerHeat * ros_message = _ros_message;
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
  {  // chassis_volt
    PyObject * field = PyObject_GetAttrString(_pymsg, "chassis_volt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->chassis_volt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // chassis_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "chassis_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->chassis_current = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // chassis_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "chassis_power");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->chassis_power = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // chassis_power_buffer
    PyObject * field = PyObject_GetAttrString(_pymsg, "chassis_power_buffer");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chassis_power_buffer = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_17mm_id1_heat
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_17mm_id1_heat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_17mm_id1_heat = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_17mm_id2_heat
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_17mm_id2_heat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_17mm_id2_heat = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shooter_42mm_id1_heat
    PyObject * field = PyObject_GetAttrString(_pymsg, "shooter_42mm_id1_heat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shooter_42mm_id1_heat = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gary_msgs__msg__power_heat__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PowerHeat */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gary_msgs.msg._power_heat");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PowerHeat");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gary_msgs__msg__PowerHeat * ros_message = (gary_msgs__msg__PowerHeat *)raw_ros_message;
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
  {  // chassis_volt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->chassis_volt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chassis_volt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chassis_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->chassis_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chassis_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chassis_power
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->chassis_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chassis_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chassis_power_buffer
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->chassis_power_buffer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chassis_power_buffer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_17mm_id1_heat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_17mm_id1_heat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_17mm_id1_heat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_17mm_id2_heat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_17mm_id2_heat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_17mm_id2_heat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shooter_42mm_id1_heat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shooter_42mm_id1_heat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shooter_42mm_id1_heat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
