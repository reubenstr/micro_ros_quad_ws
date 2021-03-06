// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drive_base_msgs:msg/BaseInfo.idl
// generated code does not contain a copyright notice
#include "drive_base_msgs/msg/detail/base_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
drive_base_msgs__msg__BaseInfo__init(drive_base_msgs__msg__BaseInfo * msg)
{
  if (!msg) {
    return false;
  }
  // hw_id
  // hw_timestamp
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    drive_base_msgs__msg__BaseInfo__fini(msg);
    return false;
  }
  // x
  // y
  // orientation
  // forward_velocity
  // rotational_velocity
  // battery_voltage_pct
  // power_supply
  // overcurrent
  // blocked
  // in_collision
  // at_cliff
  // safety_state
  return true;
}

void
drive_base_msgs__msg__BaseInfo__fini(drive_base_msgs__msg__BaseInfo * msg)
{
  if (!msg) {
    return;
  }
  // hw_id
  // hw_timestamp
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // x
  // y
  // orientation
  // forward_velocity
  // rotational_velocity
  // battery_voltage_pct
  // power_supply
  // overcurrent
  // blocked
  // in_collision
  // at_cliff
  // safety_state
}

drive_base_msgs__msg__BaseInfo *
drive_base_msgs__msg__BaseInfo__create()
{
  drive_base_msgs__msg__BaseInfo * msg = (drive_base_msgs__msg__BaseInfo *)malloc(sizeof(drive_base_msgs__msg__BaseInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drive_base_msgs__msg__BaseInfo));
  bool success = drive_base_msgs__msg__BaseInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
drive_base_msgs__msg__BaseInfo__destroy(drive_base_msgs__msg__BaseInfo * msg)
{
  if (msg) {
    drive_base_msgs__msg__BaseInfo__fini(msg);
  }
  free(msg);
}


bool
drive_base_msgs__msg__BaseInfo__Sequence__init(drive_base_msgs__msg__BaseInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  drive_base_msgs__msg__BaseInfo * data = NULL;
  if (size) {
    data = (drive_base_msgs__msg__BaseInfo *)calloc(size, sizeof(drive_base_msgs__msg__BaseInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drive_base_msgs__msg__BaseInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drive_base_msgs__msg__BaseInfo__fini(&data[i - 1]);
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
drive_base_msgs__msg__BaseInfo__Sequence__fini(drive_base_msgs__msg__BaseInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      drive_base_msgs__msg__BaseInfo__fini(&array->data[i]);
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

drive_base_msgs__msg__BaseInfo__Sequence *
drive_base_msgs__msg__BaseInfo__Sequence__create(size_t size)
{
  drive_base_msgs__msg__BaseInfo__Sequence * array = (drive_base_msgs__msg__BaseInfo__Sequence *)malloc(sizeof(drive_base_msgs__msg__BaseInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = drive_base_msgs__msg__BaseInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
drive_base_msgs__msg__BaseInfo__Sequence__destroy(drive_base_msgs__msg__BaseInfo__Sequence * array)
{
  if (array) {
    drive_base_msgs__msg__BaseInfo__Sequence__fini(array);
  }
  free(array);
}
