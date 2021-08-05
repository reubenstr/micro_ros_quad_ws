// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/NotEnoughtMemoryTest.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `string`
#include "rosidl_runtime_c/string_functions.h"
// Member `int64_sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__init(rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest * msg)
{
  if (!msg) {
    return false;
  }
  // initial_byte
  // string
  if (!rosidl_runtime_c__String__init(&msg->string)) {
    rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__fini(msg);
    return false;
  }
  // int64_sequence
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->int64_sequence, 0)) {
    rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__fini(msg);
    return false;
  }
  // int16_array
  // end_byte
  return true;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__fini(rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest * msg)
{
  if (!msg) {
    return;
  }
  // initial_byte
  // string
  rosidl_runtime_c__String__fini(&msg->string);
  // int64_sequence
  rosidl_runtime_c__int64__Sequence__fini(&msg->int64_sequence);
  // int16_array
  // end_byte
}

rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest *
rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__create()
{
  rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest * msg = (rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest *)malloc(sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest));
  bool success = rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__destroy(rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest * msg)
{
  if (msg) {
    rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__fini(msg);
  }
  free(msg);
}


bool
rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__Sequence__init(rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest * data = NULL;
  if (size) {
    data = (rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest *)calloc(size, sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__fini(&data[i - 1]);
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
rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__Sequence__fini(rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__fini(&array->data[i]);
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

rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__Sequence *
rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__Sequence__create(size_t size)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__Sequence * array = (rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__Sequence *)malloc(sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__Sequence__destroy(rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__Sequence * array)
{
  if (array) {
    rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__Sequence__fini(array);
  }
  free(array);
}
