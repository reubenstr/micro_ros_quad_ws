// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Compound.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `string_data`
#include "rosidl_runtime_c/string_functions.h"
// Member `sequence_data`
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__functions.h"
// Member `array_data`
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__functions.h"

bool
rosidl_typesupport_microxrcedds_test_msg__msg__Compound__init(rosidl_typesupport_microxrcedds_test_msg__msg__Compound * msg)
{
  if (!msg) {
    return false;
  }
  // string_data
  if (!rosidl_runtime_c__String__init(&msg->string_data)) {
    rosidl_typesupport_microxrcedds_test_msg__msg__Compound__fini(msg);
    return false;
  }
  // sequence_data
  if (!rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence__init(&msg->sequence_data, 0)) {
    rosidl_typesupport_microxrcedds_test_msg__msg__Compound__fini(msg);
    return false;
  }
  // array_data
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__init(&msg->array_data[i])) {
      rosidl_typesupport_microxrcedds_test_msg__msg__Compound__fini(msg);
      return false;
    }
  }
  return true;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__Compound__fini(rosidl_typesupport_microxrcedds_test_msg__msg__Compound * msg)
{
  if (!msg) {
    return;
  }
  // string_data
  rosidl_runtime_c__String__fini(&msg->string_data);
  // sequence_data
  rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence__fini(&msg->sequence_data);
  // array_data
  for (size_t i = 0; i < 3; ++i) {
    rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__fini(&msg->array_data[i]);
  }
}

rosidl_typesupport_microxrcedds_test_msg__msg__Compound *
rosidl_typesupport_microxrcedds_test_msg__msg__Compound__create()
{
  rosidl_typesupport_microxrcedds_test_msg__msg__Compound * msg = (rosidl_typesupport_microxrcedds_test_msg__msg__Compound *)malloc(sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__Compound));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__Compound));
  bool success = rosidl_typesupport_microxrcedds_test_msg__msg__Compound__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__Compound__destroy(rosidl_typesupport_microxrcedds_test_msg__msg__Compound * msg)
{
  if (msg) {
    rosidl_typesupport_microxrcedds_test_msg__msg__Compound__fini(msg);
  }
  free(msg);
}


bool
rosidl_typesupport_microxrcedds_test_msg__msg__Compound__Sequence__init(rosidl_typesupport_microxrcedds_test_msg__msg__Compound__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosidl_typesupport_microxrcedds_test_msg__msg__Compound * data = NULL;
  if (size) {
    data = (rosidl_typesupport_microxrcedds_test_msg__msg__Compound *)calloc(size, sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__Compound));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_typesupport_microxrcedds_test_msg__msg__Compound__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_typesupport_microxrcedds_test_msg__msg__Compound__fini(&data[i - 1]);
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
rosidl_typesupport_microxrcedds_test_msg__msg__Compound__Sequence__fini(rosidl_typesupport_microxrcedds_test_msg__msg__Compound__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosidl_typesupport_microxrcedds_test_msg__msg__Compound__fini(&array->data[i]);
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

rosidl_typesupport_microxrcedds_test_msg__msg__Compound__Sequence *
rosidl_typesupport_microxrcedds_test_msg__msg__Compound__Sequence__create(size_t size)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__Compound__Sequence * array = (rosidl_typesupport_microxrcedds_test_msg__msg__Compound__Sequence *)malloc(sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__Compound__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosidl_typesupport_microxrcedds_test_msg__msg__Compound__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__Compound__Sequence__destroy(rosidl_typesupport_microxrcedds_test_msg__msg__Compound__Sequence * array)
{
  if (array) {
    rosidl_typesupport_microxrcedds_test_msg__msg__Compound__Sequence__fini(array);
  }
  free(array);
}
