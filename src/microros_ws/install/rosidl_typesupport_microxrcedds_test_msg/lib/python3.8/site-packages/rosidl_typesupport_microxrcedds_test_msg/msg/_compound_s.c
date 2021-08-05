// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Compound.idl
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
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__functions.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__functions.h"
// end nested array functions include
bool rosidl_typesupport_microxrcedds_test_msg__msg__primitive__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rosidl_typesupport_microxrcedds_test_msg__msg__primitive__convert_to_py(void * raw_ros_message);
bool rosidl_typesupport_microxrcedds_test_msg__msg__basic_primitive__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rosidl_typesupport_microxrcedds_test_msg__msg__basic_primitive__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rosidl_typesupport_microxrcedds_test_msg__msg__compound__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("rosidl_typesupport_microxrcedds_test_msg.msg._compound.Compound", full_classname_dest, 63) == 0);
  }
  rosidl_typesupport_microxrcedds_test_msg__msg__Compound * ros_message = _ros_message;
  {  // string_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "string_data");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->string_data, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // sequence_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "sequence_data");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'sequence_data'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence__init(&(ros_message->sequence_data), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rosidl_typesupport_microxrcedds_test_msg__msg__Primitive * dest = ros_message->sequence_data.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rosidl_typesupport_microxrcedds_test_msg__msg__primitive__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // array_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "array_data");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'array_data'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 3;
    rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive * dest = ros_message->array_data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!rosidl_typesupport_microxrcedds_test_msg__msg__basic_primitive__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rosidl_typesupport_microxrcedds_test_msg__msg__compound__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Compound */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rosidl_typesupport_microxrcedds_test_msg.msg._compound");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Compound");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rosidl_typesupport_microxrcedds_test_msg__msg__Compound * ros_message = (rosidl_typesupport_microxrcedds_test_msg__msg__Compound *)raw_ros_message;
  {  // string_data
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->string_data.data,
      strlen(ros_message->string_data.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "string_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sequence_data
    PyObject * field = NULL;
    size_t size = ros_message->sequence_data.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rosidl_typesupport_microxrcedds_test_msg__msg__Primitive * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->sequence_data.data[i]);
      PyObject * pyitem = rosidl_typesupport_microxrcedds_test_msg__msg__primitive__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "sequence_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // array_data
    PyObject * field = NULL;
    size_t size = 3;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->array_data[i]);
      PyObject * pyitem = rosidl_typesupport_microxrcedds_test_msg__msg__basic_primitive__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "array_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
