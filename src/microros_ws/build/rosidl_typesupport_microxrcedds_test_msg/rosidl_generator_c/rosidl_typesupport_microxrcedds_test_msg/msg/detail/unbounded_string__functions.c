// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/UnboundedString.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `unbounded_string1`
// Member `unbounded_string2`
// Member `unbounded_string3`
// Member `unbounded_string4`
#include "rosidl_runtime_c/string_functions.h"

bool
rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__init(rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString * msg)
{
  if (!msg) {
    return false;
  }
  // unbounded_string1
  if (!rosidl_runtime_c__String__init(&msg->unbounded_string1)) {
    rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__fini(msg);
    return false;
  }
  // unbounded_string2
  if (!rosidl_runtime_c__String__init(&msg->unbounded_string2)) {
    rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__fini(msg);
    return false;
  }
  // unbounded_string3
  if (!rosidl_runtime_c__String__init(&msg->unbounded_string3)) {
    rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__fini(msg);
    return false;
  }
  // unbounded_string4
  if (!rosidl_runtime_c__String__init(&msg->unbounded_string4)) {
    rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__fini(msg);
    return false;
  }
  return true;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__fini(rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString * msg)
{
  if (!msg) {
    return;
  }
  // unbounded_string1
  rosidl_runtime_c__String__fini(&msg->unbounded_string1);
  // unbounded_string2
  rosidl_runtime_c__String__fini(&msg->unbounded_string2);
  // unbounded_string3
  rosidl_runtime_c__String__fini(&msg->unbounded_string3);
  // unbounded_string4
  rosidl_runtime_c__String__fini(&msg->unbounded_string4);
}

rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString *
rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__create()
{
  rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString * msg = (rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString *)malloc(sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString));
  bool success = rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__destroy(rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString * msg)
{
  if (msg) {
    rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__fini(msg);
  }
  free(msg);
}


bool
rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__Sequence__init(rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString * data = NULL;
  if (size) {
    data = (rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString *)calloc(size, sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__Sequence__fini(rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__Sequence *
rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__Sequence__create(size_t size)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__Sequence * array = (rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__Sequence *)malloc(sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__Sequence__destroy(rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__Sequence * array)
{
  if (array) {
    rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__Sequence__fini(array);
  }
  free(array);
}
