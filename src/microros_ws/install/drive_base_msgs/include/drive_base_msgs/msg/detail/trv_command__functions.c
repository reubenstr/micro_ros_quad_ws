// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drive_base_msgs:msg/TRVCommand.idl
// generated code does not contain a copyright notice
#include "drive_base_msgs/msg/detail/trv_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "drive_base_msgs/msg/detail/command_header__functions.h"

bool
drive_base_msgs__msg__TRVCommand__init(drive_base_msgs__msg__TRVCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!drive_base_msgs__msg__CommandHeader__init(&msg->header)) {
    drive_base_msgs__msg__TRVCommand__fini(msg);
    return false;
  }
  // translational_velocity
  // rotational_velocity
  return true;
}

void
drive_base_msgs__msg__TRVCommand__fini(drive_base_msgs__msg__TRVCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  drive_base_msgs__msg__CommandHeader__fini(&msg->header);
  // translational_velocity
  // rotational_velocity
}

drive_base_msgs__msg__TRVCommand *
drive_base_msgs__msg__TRVCommand__create()
{
  drive_base_msgs__msg__TRVCommand * msg = (drive_base_msgs__msg__TRVCommand *)malloc(sizeof(drive_base_msgs__msg__TRVCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drive_base_msgs__msg__TRVCommand));
  bool success = drive_base_msgs__msg__TRVCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
drive_base_msgs__msg__TRVCommand__destroy(drive_base_msgs__msg__TRVCommand * msg)
{
  if (msg) {
    drive_base_msgs__msg__TRVCommand__fini(msg);
  }
  free(msg);
}


bool
drive_base_msgs__msg__TRVCommand__Sequence__init(drive_base_msgs__msg__TRVCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  drive_base_msgs__msg__TRVCommand * data = NULL;
  if (size) {
    data = (drive_base_msgs__msg__TRVCommand *)calloc(size, sizeof(drive_base_msgs__msg__TRVCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drive_base_msgs__msg__TRVCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drive_base_msgs__msg__TRVCommand__fini(&data[i - 1]);
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
drive_base_msgs__msg__TRVCommand__Sequence__fini(drive_base_msgs__msg__TRVCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      drive_base_msgs__msg__TRVCommand__fini(&array->data[i]);
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

drive_base_msgs__msg__TRVCommand__Sequence *
drive_base_msgs__msg__TRVCommand__Sequence__create(size_t size)
{
  drive_base_msgs__msg__TRVCommand__Sequence * array = (drive_base_msgs__msg__TRVCommand__Sequence *)malloc(sizeof(drive_base_msgs__msg__TRVCommand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = drive_base_msgs__msg__TRVCommand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
drive_base_msgs__msg__TRVCommand__Sequence__destroy(drive_base_msgs__msg__TRVCommand__Sequence * array)
{
  if (array) {
    drive_base_msgs__msg__TRVCommand__Sequence__fini(array);
  }
  free(array);
}
