// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/BasicPrimitive.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__init(rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  // c
  return true;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__fini(rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
  // c
}

rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive *
rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__create()
{
  rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive * msg = (rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive *)malloc(sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive));
  bool success = rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__destroy(rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive * msg)
{
  if (msg) {
    rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__fini(msg);
  }
  free(msg);
}


bool
rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__Sequence__init(rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive * data = NULL;
  if (size) {
    data = (rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive *)calloc(size, sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__fini(&data[i - 1]);
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
rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__Sequence__fini(rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__fini(&array->data[i]);
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

rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__Sequence *
rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__Sequence__create(size_t size)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__Sequence * array = (rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__Sequence *)malloc(sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__Sequence__destroy(rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__Sequence * array)
{
  if (array) {
    rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__Sequence__fini(array);
  }
  free(array);
}
