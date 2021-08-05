// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/NotEnoughtMemoryTest.idl
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
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rosidl_typesupport_microxrcedds_test_msg__msg__not_enought_memory_test__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[91];
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
    assert(strncmp("rosidl_typesupport_microxrcedds_test_msg.msg._not_enought_memory_test.NotEnoughtMemoryTest", full_classname_dest, 90) == 0);
  }
  rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest * ros_message = _ros_message;
  {  // initial_byte
    PyObject * field = PyObject_GetAttrString(_pymsg, "initial_byte");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->initial_byte = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // string
    PyObject * field = PyObject_GetAttrString(_pymsg, "string");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->string, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // int64_sequence
    PyObject * field = PyObject_GetAttrString(_pymsg, "int64_sequence");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'int64_sequence'");
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
    if (!rosidl_runtime_c__int64__Sequence__init(&(ros_message->int64_sequence), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create int64__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    int64_t * dest = ros_message->int64_sequence.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyLong_Check(item));
      int64_t tmp = PyLong_AsLongLong(item);
      memcpy(&dest[i], &tmp, sizeof(int64_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // int16_array
    PyObject * field = PyObject_GetAttrString(_pymsg, "int16_array");
    if (!field) {
      return false;
    }
    // TODO(dirk-thomas) use a better way to check the type before casting
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    Py_INCREF(seq_field);
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT16);
    Py_ssize_t size = 10;
    int16_t * dest = ros_message->int16_array;
    for (Py_ssize_t i = 0; i < size; ++i) {
      int16_t tmp = *(npy_int16 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(int16_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // end_byte
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_byte");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->end_byte = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rosidl_typesupport_microxrcedds_test_msg__msg__not_enought_memory_test__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NotEnoughtMemoryTest */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rosidl_typesupport_microxrcedds_test_msg.msg._not_enought_memory_test");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NotEnoughtMemoryTest");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest * ros_message = (rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest *)raw_ros_message;
  {  // initial_byte
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->initial_byte);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initial_byte", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // string
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->string.data,
      strlen(ros_message->string.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "string", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int64_sequence
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "int64_sequence");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(int64_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->int64_sequence.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int64_t * src = &(ros_message->int64_sequence.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->int64_sequence.size * sizeof(int64_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // int16_array
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "int16_array");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT16);
    assert(sizeof(npy_int16) == sizeof(int16_t));
    npy_int16 * dst = (npy_int16 *)PyArray_GETPTR1(seq_field, 0);
    int16_t * src = &(ros_message->int16_array[0]);
    memcpy(dst, src, 10 * sizeof(int16_t));
    Py_DECREF(field);
  }
  {  // end_byte
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->end_byte);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_byte", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
