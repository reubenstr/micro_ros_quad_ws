// generated from rosidl_generator_py/resource/_idl_pkg_typesupport_entry_point.c.em
// generated code does not contain a copyright notice
#include <Python.h>

static PyMethodDef rosidl_typesupport_microxrcedds_test_msg__methods[] = {
  {NULL, NULL, 0, NULL}  /* sentinel */
};

static struct PyModuleDef rosidl_typesupport_microxrcedds_test_msg__module = {
  PyModuleDef_HEAD_INIT,
  "_rosidl_typesupport_microxrcedds_test_msg_support",
  "_rosidl_typesupport_microxrcedds_test_msg_doc",
  -1,  /* -1 means that the module keeps state in global variables */
  rosidl_typesupport_microxrcedds_test_msg__methods,
  NULL,
  NULL,
  NULL,
  NULL,
};

#include <stdbool.h>
#include <stdint.h>
#include "rosidl_runtime_c/visibility_control.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__type_support.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__functions.h"

static void * rosidl_typesupport_microxrcedds_test_msg__msg__unbounded_string__create_ros_message(void)
{
  return rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__create();
}

static void rosidl_typesupport_microxrcedds_test_msg__msg__unbounded_string__destroy_ros_message(void * raw_ros_message)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString * ros_message = (rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString *)raw_ros_message;
  rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool rosidl_typesupport_microxrcedds_test_msg__msg__unbounded_string__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * rosidl_typesupport_microxrcedds_test_msg__msg__unbounded_string__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(rosidl_typesupport_microxrcedds_test_msg, msg, UnboundedString);

int8_t
_register_msg_type__msg__unbounded_string(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__unbounded_string__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__unbounded_string",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__unbounded_string__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__unbounded_string",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__unbounded_string__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__unbounded_string",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__unbounded_string__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__unbounded_string",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(rosidl_typesupport_microxrcedds_test_msg, msg, UnboundedString),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__unbounded_string",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__type_support.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__functions.h"

static void * rosidl_typesupport_microxrcedds_test_msg__msg__primitive__create_ros_message(void)
{
  return rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__create();
}

static void rosidl_typesupport_microxrcedds_test_msg__msg__primitive__destroy_ros_message(void * raw_ros_message)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__Primitive * ros_message = (rosidl_typesupport_microxrcedds_test_msg__msg__Primitive *)raw_ros_message;
  rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool rosidl_typesupport_microxrcedds_test_msg__msg__primitive__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * rosidl_typesupport_microxrcedds_test_msg__msg__primitive__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(rosidl_typesupport_microxrcedds_test_msg, msg, Primitive);

int8_t
_register_msg_type__msg__primitive(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__primitive__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__primitive",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__primitive__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__primitive",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__primitive__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__primitive",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__primitive__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__primitive",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(rosidl_typesupport_microxrcedds_test_msg, msg, Primitive),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__primitive",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__type_support.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__functions.h"

static void * rosidl_typesupport_microxrcedds_test_msg__msg__not_enought_memory_test__create_ros_message(void)
{
  return rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__create();
}

static void rosidl_typesupport_microxrcedds_test_msg__msg__not_enought_memory_test__destroy_ros_message(void * raw_ros_message)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest * ros_message = (rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest *)raw_ros_message;
  rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool rosidl_typesupport_microxrcedds_test_msg__msg__not_enought_memory_test__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * rosidl_typesupport_microxrcedds_test_msg__msg__not_enought_memory_test__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(rosidl_typesupport_microxrcedds_test_msg, msg, NotEnoughtMemoryTest);

int8_t
_register_msg_type__msg__not_enought_memory_test(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__not_enought_memory_test__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__not_enought_memory_test",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__not_enought_memory_test__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__not_enought_memory_test",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__not_enought_memory_test__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__not_enought_memory_test",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__not_enought_memory_test__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__not_enought_memory_test",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(rosidl_typesupport_microxrcedds_test_msg, msg, NotEnoughtMemoryTest),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__not_enought_memory_test",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/sequence__type_support.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/sequence__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/sequence__functions.h"

static void * rosidl_typesupport_microxrcedds_test_msg__msg__sequence__create_ros_message(void)
{
  return rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__create();
}

static void rosidl_typesupport_microxrcedds_test_msg__msg__sequence__destroy_ros_message(void * raw_ros_message)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__Sequence * ros_message = (rosidl_typesupport_microxrcedds_test_msg__msg__Sequence *)raw_ros_message;
  rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool rosidl_typesupport_microxrcedds_test_msg__msg__sequence__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * rosidl_typesupport_microxrcedds_test_msg__msg__sequence__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(rosidl_typesupport_microxrcedds_test_msg, msg, Sequence);

int8_t
_register_msg_type__msg__sequence(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__sequence__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__sequence",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__sequence__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__sequence",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__sequence__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__sequence",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__sequence__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__sequence",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(rosidl_typesupport_microxrcedds_test_msg, msg, Sequence),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__sequence",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__type_support.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__functions.h"

static void * rosidl_typesupport_microxrcedds_test_msg__msg__compound__create_ros_message(void)
{
  return rosidl_typesupport_microxrcedds_test_msg__msg__Compound__create();
}

static void rosidl_typesupport_microxrcedds_test_msg__msg__compound__destroy_ros_message(void * raw_ros_message)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__Compound * ros_message = (rosidl_typesupport_microxrcedds_test_msg__msg__Compound *)raw_ros_message;
  rosidl_typesupport_microxrcedds_test_msg__msg__Compound__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool rosidl_typesupport_microxrcedds_test_msg__msg__compound__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * rosidl_typesupport_microxrcedds_test_msg__msg__compound__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(rosidl_typesupport_microxrcedds_test_msg, msg, Compound);

int8_t
_register_msg_type__msg__compound(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__compound__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__compound",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__compound__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__compound",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__compound__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__compound",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__compound__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__compound",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(rosidl_typesupport_microxrcedds_test_msg, msg, Compound),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__compound",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__type_support.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__functions.h"

static void * rosidl_typesupport_microxrcedds_test_msg__msg__basic_primitive__create_ros_message(void)
{
  return rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__create();
}

static void rosidl_typesupport_microxrcedds_test_msg__msg__basic_primitive__destroy_ros_message(void * raw_ros_message)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive * ros_message = (rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive *)raw_ros_message;
  rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool rosidl_typesupport_microxrcedds_test_msg__msg__basic_primitive__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * rosidl_typesupport_microxrcedds_test_msg__msg__basic_primitive__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(rosidl_typesupport_microxrcedds_test_msg, msg, BasicPrimitive);

int8_t
_register_msg_type__msg__basic_primitive(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__basic_primitive__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__basic_primitive",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__basic_primitive__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__basic_primitive",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__basic_primitive__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__basic_primitive",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&rosidl_typesupport_microxrcedds_test_msg__msg__basic_primitive__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__basic_primitive",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(rosidl_typesupport_microxrcedds_test_msg, msg, BasicPrimitive),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__basic_primitive",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

PyMODINIT_FUNC
PyInit_rosidl_typesupport_microxrcedds_test_msg_s__rosidl_typesupport_c(void)
{
  PyObject * pymodule = NULL;
  pymodule = PyModule_Create(&rosidl_typesupport_microxrcedds_test_msg__module);
  if (!pymodule) {
    return NULL;
  }
  int8_t err;

  err = _register_msg_type__msg__unbounded_string(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__primitive(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__not_enought_memory_test(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__sequence(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__compound(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__basic_primitive(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  return pymodule;
}
