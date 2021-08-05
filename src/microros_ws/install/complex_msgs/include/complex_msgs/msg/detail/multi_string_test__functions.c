// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from complex_msgs:msg/MultiStringTest.idl
// generated code does not contain a copyright notice
#include "complex_msgs/msg/detail/multi_string_test__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `data1`
// Member `data2`
// Member `data3`
// Member `data4`
#include "rosidl_runtime_c/string_functions.h"

bool
complex_msgs__msg__MultiStringTest__init(complex_msgs__msg__MultiStringTest * msg)
{
  if (!msg) {
    return false;
  }
  // data1
  if (!rosidl_runtime_c__String__init(&msg->data1)) {
    complex_msgs__msg__MultiStringTest__fini(msg);
    return false;
  }
  // data2
  if (!rosidl_runtime_c__String__init(&msg->data2)) {
    complex_msgs__msg__MultiStringTest__fini(msg);
    return false;
  }
  // data3
  if (!rosidl_runtime_c__String__init(&msg->data3)) {
    complex_msgs__msg__MultiStringTest__fini(msg);
    return false;
  }
  // data4
  if (!rosidl_runtime_c__String__init(&msg->data4)) {
    complex_msgs__msg__MultiStringTest__fini(msg);
    return false;
  }
  return true;
}

void
complex_msgs__msg__MultiStringTest__fini(complex_msgs__msg__MultiStringTest * msg)
{
  if (!msg) {
    return;
  }
  // data1
  rosidl_runtime_c__String__fini(&msg->data1);
  // data2
  rosidl_runtime_c__String__fini(&msg->data2);
  // data3
  rosidl_runtime_c__String__fini(&msg->data3);
  // data4
  rosidl_runtime_c__String__fini(&msg->data4);
}

complex_msgs__msg__MultiStringTest *
complex_msgs__msg__MultiStringTest__create()
{
  complex_msgs__msg__MultiStringTest * msg = (complex_msgs__msg__MultiStringTest *)malloc(sizeof(complex_msgs__msg__MultiStringTest));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(complex_msgs__msg__MultiStringTest));
  bool success = complex_msgs__msg__MultiStringTest__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
complex_msgs__msg__MultiStringTest__destroy(complex_msgs__msg__MultiStringTest * msg)
{
  if (msg) {
    complex_msgs__msg__MultiStringTest__fini(msg);
  }
  free(msg);
}


bool
complex_msgs__msg__MultiStringTest__Sequence__init(complex_msgs__msg__MultiStringTest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  complex_msgs__msg__MultiStringTest * data = NULL;
  if (size) {
    data = (complex_msgs__msg__MultiStringTest *)calloc(size, sizeof(complex_msgs__msg__MultiStringTest));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = complex_msgs__msg__MultiStringTest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        complex_msgs__msg__MultiStringTest__fini(&data[i - 1]);
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
complex_msgs__msg__MultiStringTest__Sequence__fini(complex_msgs__msg__MultiStringTest__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      complex_msgs__msg__MultiStringTest__fini(&array->data[i]);
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

complex_msgs__msg__MultiStringTest__Sequence *
complex_msgs__msg__MultiStringTest__Sequence__create(size_t size)
{
  complex_msgs__msg__MultiStringTest__Sequence * array = (complex_msgs__msg__MultiStringTest__Sequence *)malloc(sizeof(complex_msgs__msg__MultiStringTest__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = complex_msgs__msg__MultiStringTest__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
complex_msgs__msg__MultiStringTest__Sequence__destroy(complex_msgs__msg__MultiStringTest__Sequence * array)
{
  if (array) {
    complex_msgs__msg__MultiStringTest__Sequence__fini(array);
  }
  free(array);
}
