// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Sequence.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/sequence__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `sequence_string_test`
#include "rosidl_runtime_c/string_functions.h"

bool
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__init(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence * msg)
{
  if (!msg) {
    return false;
  }
  // sequence_string_test
  if (!rosidl_runtime_c__String__Sequence__init(&msg->sequence_string_test, 0)) {
    rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__fini(msg);
    return false;
  }
  return true;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__fini(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence * msg)
{
  if (!msg) {
    return;
  }
  // sequence_string_test
  rosidl_runtime_c__String__Sequence__fini(&msg->sequence_string_test);
}

rosidl_typesupport_microxrcedds_test_msg__msg__Sequence *
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__create()
{
  rosidl_typesupport_microxrcedds_test_msg__msg__Sequence * msg = (rosidl_typesupport_microxrcedds_test_msg__msg__Sequence *)malloc(sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence));
  bool success = rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__destroy(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence * msg)
{
  if (msg) {
    rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__fini(msg);
  }
  free(msg);
}


bool
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence__init(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosidl_typesupport_microxrcedds_test_msg__msg__Sequence * data = NULL;
  if (size) {
    data = (rosidl_typesupport_microxrcedds_test_msg__msg__Sequence *)calloc(size, sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__fini(&data[i - 1]);
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
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence__fini(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__fini(&array->data[i]);
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

rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence *
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence__create(size_t size)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence * array = (rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence *)malloc(sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence__destroy(rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence * array)
{
  if (array) {
    rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence__fini(array);
  }
  free(array);
}
