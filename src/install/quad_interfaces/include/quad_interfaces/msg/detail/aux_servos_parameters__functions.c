// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quad_interfaces:msg/AuxServosParameters.idl
// generated code does not contain a copyright notice
#include "quad_interfaces/msg/detail/aux_servos_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
quad_interfaces__msg__AuxServosParameters__init(quad_interfaces__msg__AuxServosParameters * msg)
{
  if (!msg) {
    return false;
  }
  // pin
  // min_angle
  // max_angle
  // calibration_angle_offset
  // ms_per_degree
  return true;
}

void
quad_interfaces__msg__AuxServosParameters__fini(quad_interfaces__msg__AuxServosParameters * msg)
{
  if (!msg) {
    return;
  }
  // pin
  // min_angle
  // max_angle
  // calibration_angle_offset
  // ms_per_degree
}

quad_interfaces__msg__AuxServosParameters *
quad_interfaces__msg__AuxServosParameters__create()
{
  quad_interfaces__msg__AuxServosParameters * msg = (quad_interfaces__msg__AuxServosParameters *)malloc(sizeof(quad_interfaces__msg__AuxServosParameters));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quad_interfaces__msg__AuxServosParameters));
  bool success = quad_interfaces__msg__AuxServosParameters__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
quad_interfaces__msg__AuxServosParameters__destroy(quad_interfaces__msg__AuxServosParameters * msg)
{
  if (msg) {
    quad_interfaces__msg__AuxServosParameters__fini(msg);
  }
  free(msg);
}


bool
quad_interfaces__msg__AuxServosParameters__Sequence__init(quad_interfaces__msg__AuxServosParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  quad_interfaces__msg__AuxServosParameters * data = NULL;
  if (size) {
    data = (quad_interfaces__msg__AuxServosParameters *)calloc(size, sizeof(quad_interfaces__msg__AuxServosParameters));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quad_interfaces__msg__AuxServosParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quad_interfaces__msg__AuxServosParameters__fini(&data[i - 1]);
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
quad_interfaces__msg__AuxServosParameters__Sequence__fini(quad_interfaces__msg__AuxServosParameters__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      quad_interfaces__msg__AuxServosParameters__fini(&array->data[i]);
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

quad_interfaces__msg__AuxServosParameters__Sequence *
quad_interfaces__msg__AuxServosParameters__Sequence__create(size_t size)
{
  quad_interfaces__msg__AuxServosParameters__Sequence * array = (quad_interfaces__msg__AuxServosParameters__Sequence *)malloc(sizeof(quad_interfaces__msg__AuxServosParameters__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = quad_interfaces__msg__AuxServosParameters__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
quad_interfaces__msg__AuxServosParameters__Sequence__destroy(quad_interfaces__msg__AuxServosParameters__Sequence * array)
{
  if (array) {
    quad_interfaces__msg__AuxServosParameters__Sequence__fini(array);
  }
  free(array);
}