// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quad_interfaces:msg/MotionServos.idl
// generated code does not contain a copyright notice
#include "quad_interfaces/msg/detail/motion_servos__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
quad_interfaces__msg__MotionServos__init(quad_interfaces__msg__MotionServos * msg)
{
  if (!msg) {
    return false;
  }
  // enable
  // angle
  return true;
}

void
quad_interfaces__msg__MotionServos__fini(quad_interfaces__msg__MotionServos * msg)
{
  if (!msg) {
    return;
  }
  // enable
  // angle
}

quad_interfaces__msg__MotionServos *
quad_interfaces__msg__MotionServos__create()
{
  quad_interfaces__msg__MotionServos * msg = (quad_interfaces__msg__MotionServos *)malloc(sizeof(quad_interfaces__msg__MotionServos));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quad_interfaces__msg__MotionServos));
  bool success = quad_interfaces__msg__MotionServos__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
quad_interfaces__msg__MotionServos__destroy(quad_interfaces__msg__MotionServos * msg)
{
  if (msg) {
    quad_interfaces__msg__MotionServos__fini(msg);
  }
  free(msg);
}


bool
quad_interfaces__msg__MotionServos__Sequence__init(quad_interfaces__msg__MotionServos__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  quad_interfaces__msg__MotionServos * data = NULL;
  if (size) {
    data = (quad_interfaces__msg__MotionServos *)calloc(size, sizeof(quad_interfaces__msg__MotionServos));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quad_interfaces__msg__MotionServos__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quad_interfaces__msg__MotionServos__fini(&data[i - 1]);
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
quad_interfaces__msg__MotionServos__Sequence__fini(quad_interfaces__msg__MotionServos__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      quad_interfaces__msg__MotionServos__fini(&array->data[i]);
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

quad_interfaces__msg__MotionServos__Sequence *
quad_interfaces__msg__MotionServos__Sequence__create(size_t size)
{
  quad_interfaces__msg__MotionServos__Sequence * array = (quad_interfaces__msg__MotionServos__Sequence *)malloc(sizeof(quad_interfaces__msg__MotionServos__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = quad_interfaces__msg__MotionServos__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
quad_interfaces__msg__MotionServos__Sequence__destroy(quad_interfaces__msg__MotionServos__Sequence * array)
{
  if (array) {
    quad_interfaces__msg__MotionServos__Sequence__fini(array);
  }
  free(array);
}
