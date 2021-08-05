// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from drive_base_msgs:msg/BaseInfo.idl
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
#include "drive_base_msgs/msg/detail/base_info__struct.h"
#include "drive_base_msgs/msg/detail/base_info__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool drive_base_msgs__msg__base_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("drive_base_msgs.msg._base_info.BaseInfo", full_classname_dest, 39) == 0);
  }
  drive_base_msgs__msg__BaseInfo * ros_message = _ros_message;
  {  // hw_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hw_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hw_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "hw_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hw_timestamp = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->orientation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // forward_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "forward_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->forward_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rotational_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotational_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rotational_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery_voltage_pct
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_voltage_pct");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery_voltage_pct = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // power_supply
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_supply");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->power_supply = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // overcurrent
    PyObject * field = PyObject_GetAttrString(_pymsg, "overcurrent");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->overcurrent = (Py_True == field);
    Py_DECREF(field);
  }
  {  // blocked
    PyObject * field = PyObject_GetAttrString(_pymsg, "blocked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->blocked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // in_collision
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_collision");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_collision = (Py_True == field);
    Py_DECREF(field);
  }
  {  // at_cliff
    PyObject * field = PyObject_GetAttrString(_pymsg, "at_cliff");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->at_cliff = (Py_True == field);
    Py_DECREF(field);
  }
  {  // safety_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "safety_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->safety_state = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * drive_base_msgs__msg__base_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BaseInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("drive_base_msgs.msg._base_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BaseInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  drive_base_msgs__msg__BaseInfo * ros_message = (drive_base_msgs__msg__BaseInfo *)raw_ros_message;
  {  // hw_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hw_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hw_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hw_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hw_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->orientation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // forward_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->forward_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "forward_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotational_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rotational_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotational_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_voltage_pct
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->battery_voltage_pct);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_voltage_pct", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_supply
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->power_supply);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_supply", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overcurrent
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->overcurrent ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overcurrent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blocked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->blocked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blocked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_collision
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_collision ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_collision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // at_cliff
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->at_cliff ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "at_cliff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safety_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->safety_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safety_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
