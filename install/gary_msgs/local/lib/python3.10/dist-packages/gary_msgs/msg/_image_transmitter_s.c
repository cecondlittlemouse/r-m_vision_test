// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gary_msgs:msg/ImageTransmitter.idl
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
#include "gary_msgs/msg/detail/image_transmitter__struct.h"
#include "gary_msgs/msg/detail/image_transmitter__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool gary_msgs__msg__image_transmitter__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("gary_msgs.msg._image_transmitter.ImageTransmitter", full_classname_dest, 49) == 0);
  }
  gary_msgs__msg__ImageTransmitter * ros_message = _ros_message;
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
  {  // mouse_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "mouse_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mouse_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mouse_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "mouse_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mouse_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mouse_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "mouse_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mouse_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mouse_press_l
    PyObject * field = PyObject_GetAttrString(_pymsg, "mouse_press_l");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mouse_press_l = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mouse_press_r
    PyObject * field = PyObject_GetAttrString(_pymsg, "mouse_press_r");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mouse_press_r = (Py_True == field);
    Py_DECREF(field);
  }
  {  // key_w
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_w");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->key_w = (Py_True == field);
    Py_DECREF(field);
  }
  {  // key_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_s");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->key_s = (Py_True == field);
    Py_DECREF(field);
  }
  {  // key_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_a");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->key_a = (Py_True == field);
    Py_DECREF(field);
  }
  {  // key_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_d");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->key_d = (Py_True == field);
    Py_DECREF(field);
  }
  {  // key_shift
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_shift");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->key_shift = (Py_True == field);
    Py_DECREF(field);
  }
  {  // key_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_ctrl");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->key_ctrl = (Py_True == field);
    Py_DECREF(field);
  }
  {  // key_q
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_q");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->key_q = (Py_True == field);
    Py_DECREF(field);
  }
  {  // key_e
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_e");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->key_e = (Py_True == field);
    Py_DECREF(field);
  }
  {  // key_r
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_r");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->key_r = (Py_True == field);
    Py_DECREF(field);
  }
  {  // key_f
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_f");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->key_f = (Py_True == field);
    Py_DECREF(field);
  }
  {  // key_g
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_g");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->key_g = (Py_True == field);
    Py_DECREF(field);
  }
  {  // key_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_z");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->key_z = (Py_True == field);
    Py_DECREF(field);
  }
  {  // key_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_x");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->key_x = (Py_True == field);
    Py_DECREF(field);
  }
  {  // key_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_c");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->key_c = (Py_True == field);
    Py_DECREF(field);
  }
  {  // key_v
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_v");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->key_v = (Py_True == field);
    Py_DECREF(field);
  }
  {  // key_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_b");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->key_b = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gary_msgs__msg__image_transmitter__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ImageTransmitter */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gary_msgs.msg._image_transmitter");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ImageTransmitter");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gary_msgs__msg__ImageTransmitter * ros_message = (gary_msgs__msg__ImageTransmitter *)raw_ros_message;
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
  {  // mouse_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mouse_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mouse_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mouse_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mouse_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mouse_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mouse_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mouse_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mouse_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mouse_press_l
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mouse_press_l ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mouse_press_l", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mouse_press_r
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mouse_press_r ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mouse_press_r", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_w
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->key_w ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_w", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_s
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->key_s ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_a
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->key_a ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_d
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->key_d ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_shift
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->key_shift ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_shift", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_ctrl
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->key_ctrl ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_q
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->key_q ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_q", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_e
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->key_e ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_r
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->key_r ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_r", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_f
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->key_f ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_f", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_g
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->key_g ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_g", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_z
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->key_z ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_x
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->key_x ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_c
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->key_c ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_v
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->key_v ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_b
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->key_b ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
