// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Primitive.idl
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
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool rosidl_typesupport_microxrcedds_test_msg__msg__unbounded_string__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * rosidl_typesupport_microxrcedds_test_msg__msg__unbounded_string__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rosidl_typesupport_microxrcedds_test_msg__msg__primitive__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
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
    assert(strncmp("rosidl_typesupport_microxrcedds_test_msg.msg._primitive.Primitive", full_classname_dest, 65) == 0);
  }
  rosidl_typesupport_microxrcedds_test_msg__msg__Primitive * ros_message = _ros_message;
  {  // bool_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "bool_test");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->bool_test = (Py_True == field);
    Py_DECREF(field);
  }
  {  // bool_array_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "bool_array_test");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bool_array_test'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 11;
    bool * dest = ros_message->bool_array_test;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyBool_Check(item));
      bool tmp = (item == Py_True);
      memcpy(&dest[i], &tmp, sizeof(bool));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // byte_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "byte_test");
    if (!field) {
      return false;
    }
    assert(PyBytes_Check(field));
    ros_message->byte_test = PyBytes_AS_STRING(field)[0];
    Py_DECREF(field);
  }
  {  // byte_array_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "byte_array_test");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'byte_array_test'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 11;
    uint8_t * dest = ros_message->byte_array_test;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyBytes_Check(item));
      uint8_t tmp = PyBytes_AS_STRING(item)[0];
      memcpy(&dest[i], &tmp, sizeof(uint8_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // char_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "char_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->char_test = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // char_array_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "char_array_test");
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
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    Py_ssize_t size = 11;
    uint8_t * dest = ros_message->char_array_test;
    for (Py_ssize_t i = 0; i < size; ++i) {
      uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(uint8_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // float32_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "float32_test");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->float32_test = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // float32_array_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "float32_array_test");
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
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    Py_ssize_t size = 11;
    float * dest = ros_message->float32_array_test;
    for (Py_ssize_t i = 0; i < size; ++i) {
      float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(float));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // double_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "double_test");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->double_test = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // float64_array_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "float64_array_test");
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
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    Py_ssize_t size = 11;
    double * dest = ros_message->float64_array_test;
    for (Py_ssize_t i = 0; i < size; ++i) {
      double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(double));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // int8_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "int8_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int8_test = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // int8_array_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "int8_array_test");
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
    assert(PyArray_TYPE(seq_field) == NPY_INT8);
    Py_ssize_t size = 11;
    int8_t * dest = ros_message->int8_array_test;
    for (Py_ssize_t i = 0; i < size; ++i) {
      int8_t tmp = *(npy_int8 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(int8_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // uint8_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint8_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint8_test = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // uint8_array_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint8_array_test");
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
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    Py_ssize_t size = 11;
    uint8_t * dest = ros_message->uint8_array_test;
    for (Py_ssize_t i = 0; i < size; ++i) {
      uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(uint8_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // int16_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "int16_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int16_test = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // int16_array_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "int16_array_test");
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
    Py_ssize_t size = 11;
    int16_t * dest = ros_message->int16_array_test;
    for (Py_ssize_t i = 0; i < size; ++i) {
      int16_t tmp = *(npy_int16 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(int16_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // uint16_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint16_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint16_test = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // uint16_array_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint16_array_test");
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
    assert(PyArray_TYPE(seq_field) == NPY_UINT16);
    Py_ssize_t size = 11;
    uint16_t * dest = ros_message->uint16_array_test;
    for (Py_ssize_t i = 0; i < size; ++i) {
      uint16_t tmp = *(npy_uint16 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(uint16_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // int32_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "int32_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int32_test = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // int32_array_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "int32_array_test");
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
    assert(PyArray_TYPE(seq_field) == NPY_INT32);
    Py_ssize_t size = 11;
    int32_t * dest = ros_message->int32_array_test;
    for (Py_ssize_t i = 0; i < size; ++i) {
      int32_t tmp = *(npy_int32 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(int32_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // uint32_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint32_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint32_test = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // uint32_array_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint32_array_test");
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
    assert(PyArray_TYPE(seq_field) == NPY_UINT32);
    Py_ssize_t size = 11;
    uint32_t * dest = ros_message->uint32_array_test;
    for (Py_ssize_t i = 0; i < size; ++i) {
      uint32_t tmp = *(npy_uint32 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(uint32_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // int64_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "int64_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->int64_test = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // int64_array_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "int64_array_test");
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
    assert(PyArray_TYPE(seq_field) == NPY_INT64);
    Py_ssize_t size = 11;
    int64_t * dest = ros_message->int64_array_test;
    for (Py_ssize_t i = 0; i < size; ++i) {
      int64_t tmp = *(npy_int64 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(int64_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // uint64_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint64_test");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uint64_test = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // uint64_array_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "uint64_array_test");
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
    assert(PyArray_TYPE(seq_field) == NPY_UINT64);
    Py_ssize_t size = 11;
    uint64_t * dest = ros_message->uint64_array_test;
    for (Py_ssize_t i = 0; i < size; ++i) {
      uint64_t tmp = *(npy_uint64 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(uint64_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // nested_test
    PyObject * field = PyObject_GetAttrString(_pymsg, "nested_test");
    if (!field) {
      return false;
    }
    if (!rosidl_typesupport_microxrcedds_test_msg__msg__unbounded_string__convert_from_py(field, &ros_message->nested_test)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rosidl_typesupport_microxrcedds_test_msg__msg__primitive__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Primitive */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rosidl_typesupport_microxrcedds_test_msg.msg._primitive");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Primitive");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rosidl_typesupport_microxrcedds_test_msg__msg__Primitive * ros_message = (rosidl_typesupport_microxrcedds_test_msg__msg__Primitive *)raw_ros_message;
  {  // bool_test
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->bool_test ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bool_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bool_array_test
    PyObject * field = NULL;
    size_t size = 11;
    bool * src = ros_message->bool_array_test;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bool_array_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // byte_test
    PyObject * field = NULL;
    field = PyBytes_FromStringAndSize((const char *)&ros_message->byte_test, 1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "byte_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // byte_array_test
    PyObject * field = NULL;
    size_t size = 11;
    uint8_t * src = ros_message->byte_array_test;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBytes_FromStringAndSize((const char *)&src[i], 1));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "byte_array_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // char_test
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->char_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "char_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // char_array_test
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "char_array_test");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->char_array_test[0]);
    memcpy(dst, src, 11 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // float32_test
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->float32_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "float32_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // float32_array_test
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "float32_array_test");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->float32_array_test[0]);
    memcpy(dst, src, 11 * sizeof(float));
    Py_DECREF(field);
  }
  {  // double_test
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->double_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "double_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // float64_array_test
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "float64_array_test");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->float64_array_test[0]);
    memcpy(dst, src, 11 * sizeof(double));
    Py_DECREF(field);
  }
  {  // int8_test
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->int8_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int8_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int8_array_test
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "int8_array_test");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT8);
    assert(sizeof(npy_int8) == sizeof(int8_t));
    npy_int8 * dst = (npy_int8 *)PyArray_GETPTR1(seq_field, 0);
    int8_t * src = &(ros_message->int8_array_test[0]);
    memcpy(dst, src, 11 * sizeof(int8_t));
    Py_DECREF(field);
  }
  {  // uint8_test
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->uint8_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint8_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint8_array_test
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "uint8_array_test");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->uint8_array_test[0]);
    memcpy(dst, src, 11 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // int16_test
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->int16_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int16_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int16_array_test
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "int16_array_test");
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
    int16_t * src = &(ros_message->int16_array_test[0]);
    memcpy(dst, src, 11 * sizeof(int16_t));
    Py_DECREF(field);
  }
  {  // uint16_test
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->uint16_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint16_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint16_array_test
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "uint16_array_test");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT16);
    assert(sizeof(npy_uint16) == sizeof(uint16_t));
    npy_uint16 * dst = (npy_uint16 *)PyArray_GETPTR1(seq_field, 0);
    uint16_t * src = &(ros_message->uint16_array_test[0]);
    memcpy(dst, src, 11 * sizeof(uint16_t));
    Py_DECREF(field);
  }
  {  // int32_test
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->int32_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int32_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int32_array_test
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "int32_array_test");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT32);
    assert(sizeof(npy_int32) == sizeof(int32_t));
    npy_int32 * dst = (npy_int32 *)PyArray_GETPTR1(seq_field, 0);
    int32_t * src = &(ros_message->int32_array_test[0]);
    memcpy(dst, src, 11 * sizeof(int32_t));
    Py_DECREF(field);
  }
  {  // uint32_test
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->uint32_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint32_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint32_array_test
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "uint32_array_test");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT32);
    assert(sizeof(npy_uint32) == sizeof(uint32_t));
    npy_uint32 * dst = (npy_uint32 *)PyArray_GETPTR1(seq_field, 0);
    uint32_t * src = &(ros_message->uint32_array_test[0]);
    memcpy(dst, src, 11 * sizeof(uint32_t));
    Py_DECREF(field);
  }
  {  // int64_test
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->int64_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "int64_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // int64_array_test
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "int64_array_test");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT64);
    assert(sizeof(npy_int64) == sizeof(int64_t));
    npy_int64 * dst = (npy_int64 *)PyArray_GETPTR1(seq_field, 0);
    int64_t * src = &(ros_message->int64_array_test[0]);
    memcpy(dst, src, 11 * sizeof(int64_t));
    Py_DECREF(field);
  }
  {  // uint64_test
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->uint64_test);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uint64_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uint64_array_test
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "uint64_array_test");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT64);
    assert(sizeof(npy_uint64) == sizeof(uint64_t));
    npy_uint64 * dst = (npy_uint64 *)PyArray_GETPTR1(seq_field, 0);
    uint64_t * src = &(ros_message->uint64_array_test[0]);
    memcpy(dst, src, 11 * sizeof(uint64_t));
    Py_DECREF(field);
  }
  {  // nested_test
    PyObject * field = NULL;
    field = rosidl_typesupport_microxrcedds_test_msg__msg__unbounded_string__convert_to_py(&ros_message->nested_test);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nested_test", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
