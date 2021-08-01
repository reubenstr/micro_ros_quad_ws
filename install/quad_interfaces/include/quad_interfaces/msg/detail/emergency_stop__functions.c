// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from quad_interfaces:msg/EmergencyStop.idl
// generated code does not contain a copyright notice
#include "quad_interfaces/msg/detail/emergency_stop__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
quad_interfaces__msg__EmergencyStop__init(quad_interfaces__msg__EmergencyStop * msg)
{
  if (!msg) {
    return false;
  }
  // emergency_stop
  return true;
}

void
quad_interfaces__msg__EmergencyStop__fini(quad_interfaces__msg__EmergencyStop * msg)
{
  if (!msg) {
    return;
  }
  // emergency_stop
}

quad_interfaces__msg__EmergencyStop *
quad_interfaces__msg__EmergencyStop__create()
{
  quad_interfaces__msg__EmergencyStop * msg = (quad_interfaces__msg__EmergencyStop *)malloc(sizeof(quad_interfaces__msg__EmergencyStop));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(quad_interfaces__msg__EmergencyStop));
  bool success = quad_interfaces__msg__EmergencyStop__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
quad_interfaces__msg__EmergencyStop__destroy(quad_interfaces__msg__EmergencyStop * msg)
{
  if (msg) {
    quad_interfaces__msg__EmergencyStop__fini(msg);
  }
  free(msg);
}


bool
quad_interfaces__msg__EmergencyStop__Sequence__init(quad_interfaces__msg__EmergencyStop__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  quad_interfaces__msg__EmergencyStop * data = NULL;
  if (size) {
    data = (quad_interfaces__msg__EmergencyStop *)calloc(size, sizeof(quad_interfaces__msg__EmergencyStop));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = quad_interfaces__msg__EmergencyStop__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        quad_interfaces__msg__EmergencyStop__fini(&data[i - 1]);
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
quad_interfaces__msg__EmergencyStop__Sequence__fini(quad_interfaces__msg__EmergencyStop__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      quad_interfaces__msg__EmergencyStop__fini(&array->data[i]);
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

quad_interfaces__msg__EmergencyStop__Sequence *
quad_interfaces__msg__EmergencyStop__Sequence__create(size_t size)
{
  quad_interfaces__msg__EmergencyStop__Sequence * array = (quad_interfaces__msg__EmergencyStop__Sequence *)malloc(sizeof(quad_interfaces__msg__EmergencyStop__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = quad_interfaces__msg__EmergencyStop__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
quad_interfaces__msg__EmergencyStop__Sequence__destroy(quad_interfaces__msg__EmergencyStop__Sequence * array)
{
  if (array) {
    quad_interfaces__msg__EmergencyStop__Sequence__fini(array);
  }
  free(array);
}
