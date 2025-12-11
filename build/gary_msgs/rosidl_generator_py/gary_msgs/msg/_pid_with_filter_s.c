// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gary_msgs:msg/PIDWithFilter.idl
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
#include "gary_msgs/msg/detail/pid_with_filter__struct.h"
#include "gary_msgs/msg/detail/pid_with_filter__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool gary_msgs__msg__pid_with_filter__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("gary_msgs.msg._pid_with_filter.PIDWithFilter", full_classname_dest, 44) == 0);
  }
  gary_msgs__msg__PIDWithFilter * ros_message = _ros_message;
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
  {  // kp
    PyObject * field = PyObject_GetAttrString(_pymsg, "kp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ki
    PyObject * field = PyObject_GetAttrString(_pymsg, "ki");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ki = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kd
    PyObject * field = PyObject_GetAttrString(_pymsg, "kd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_filter_coefficient
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_filter_coefficient");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_filter_coefficient = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // d_filter_coefficient
    PyObject * field = PyObject_GetAttrString(_pymsg, "d_filter_coefficient");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->d_filter_coefficient = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_out");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_out = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_iout
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_iout");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_iout = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // set
    PyObject * field = PyObject_GetAttrString(_pymsg, "set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "feedback");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->feedback = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // error
    PyObject * field = PyObject_GetAttrString(_pymsg, "error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // error_sum
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_sum");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->error_sum = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // last_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->last_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pout
    PyObject * field = PyObject_GetAttrString(_pymsg, "pout");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pout = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // iout
    PyObject * field = PyObject_GetAttrString(_pymsg, "iout");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->iout = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dout
    PyObject * field = PyObject_GetAttrString(_pymsg, "dout");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dout = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // out
    PyObject * field = PyObject_GetAttrString(_pymsg, "out");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->out = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gary_msgs__msg__pid_with_filter__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PIDWithFilter */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gary_msgs.msg._pid_with_filter");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PIDWithFilter");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gary_msgs__msg__PIDWithFilter * ros_message = (gary_msgs__msg__PIDWithFilter *)raw_ros_message;
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
  {  // kp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ki
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ki);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ki", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_filter_coefficient
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_filter_coefficient);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_filter_coefficient", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d_filter_coefficient
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->d_filter_coefficient);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d_filter_coefficient", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_out
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_iout
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_iout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_iout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feedback
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->feedback);
    {
      int rc = PyObject_SetAttrString(_pymessage, "feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_sum
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->error_sum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_sum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->last_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pout
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iout
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->iout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "iout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dout
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // out
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
