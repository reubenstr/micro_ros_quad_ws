// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Primitive.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `nested_test`
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__functions.h"

bool
rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__init(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive * msg)
{
  if (!msg) {
    return false;
  }
  // bool_test
  // bool_array_test
  // byte_test
  // byte_array_test
  // char_test
  // char_array_test
  // float32_test
  // float32_array_test
  // double_test
  // float64_array_test
  // int8_test
  // int8_array_test
  // uint8_test
  // uint8_array_test
  // int16_test
  // int16_array_test
  // uint16_test
  // uint16_array_test
  // int32_test
  // int32_array_test
  // uint32_test
  // uint32_array_test
  // int64_test
  // int64_array_test
  // uint64_test
  // uint64_array_test
  // nested_test
  if (!rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__init(&msg->nested_test)) {
    rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__fini(msg);
    return false;
  }
  return true;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__fini(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive * msg)
{
  if (!msg) {
    return;
  }
  // bool_test
  // bool_array_test
  // byte_test
  // byte_array_test
  // char_test
  // char_array_test
  // float32_test
  // float32_array_test
  // double_test
  // float64_array_test
  // int8_test
  // int8_array_test
  // uint8_test
  // uint8_array_test
  // int16_test
  // int16_array_test
  // uint16_test
  // uint16_array_test
  // int32_test
  // int32_array_test
  // uint32_test
  // uint32_array_test
  // int64_test
  // int64_array_test
  // uint64_test
  // uint64_array_test
  // nested_test
  rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__fini(&msg->nested_test);
}

rosidl_typesupport_microxrcedds_test_msg__msg__Primitive *
rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__create()
{
  rosidl_typesupport_microxrcedds_test_msg__msg__Primitive * msg = (rosidl_typesupport_microxrcedds_test_msg__msg__Primitive *)malloc(sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive));
  bool success = rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__destroy(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive * msg)
{
  if (msg) {
    rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__fini(msg);
  }
  free(msg);
}


bool
rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence__init(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosidl_typesupport_microxrcedds_test_msg__msg__Primitive * data = NULL;
  if (size) {
    data = (rosidl_typesupport_microxrcedds_test_msg__msg__Primitive *)calloc(size, sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__fini(&data[i - 1]);
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
rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence__fini(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__fini(&array->data[i]);
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

rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence *
rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence__create(size_t size)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence * array = (rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence *)malloc(sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence__destroy(rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence * array)
{
  if (array) {
    rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence__fini(array);
  }
  free(array);
}
