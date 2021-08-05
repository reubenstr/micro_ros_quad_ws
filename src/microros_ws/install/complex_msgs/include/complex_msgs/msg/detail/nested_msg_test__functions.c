// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from complex_msgs:msg/NestedMsgTest.idl
// generated code does not contain a copyright notice
#include "complex_msgs/msg/detail/nested_msg_test__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `data14`
#include "complex_msgs/msg/detail/multi_string_test__functions.h"

bool
complex_msgs__msg__NestedMsgTest__init(complex_msgs__msg__NestedMsgTest * msg)
{
  if (!msg) {
    return false;
  }
  // data1
  // data2
  // data3
  // data4
  // data5
  // data6
  // data7
  // data8
  // data9
  // data10
  // data11
  // data12
  // data13
  // data14
  if (!complex_msgs__msg__MultiStringTest__init(&msg->data14)) {
    complex_msgs__msg__NestedMsgTest__fini(msg);
    return false;
  }
  return true;
}

void
complex_msgs__msg__NestedMsgTest__fini(complex_msgs__msg__NestedMsgTest * msg)
{
  if (!msg) {
    return;
  }
  // data1
  // data2
  // data3
  // data4
  // data5
  // data6
  // data7
  // data8
  // data9
  // data10
  // data11
  // data12
  // data13
  // data14
  complex_msgs__msg__MultiStringTest__fini(&msg->data14);
}

complex_msgs__msg__NestedMsgTest *
complex_msgs__msg__NestedMsgTest__create()
{
  complex_msgs__msg__NestedMsgTest * msg = (complex_msgs__msg__NestedMsgTest *)malloc(sizeof(complex_msgs__msg__NestedMsgTest));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(complex_msgs__msg__NestedMsgTest));
  bool success = complex_msgs__msg__NestedMsgTest__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
complex_msgs__msg__NestedMsgTest__destroy(complex_msgs__msg__NestedMsgTest * msg)
{
  if (msg) {
    complex_msgs__msg__NestedMsgTest__fini(msg);
  }
  free(msg);
}


bool
complex_msgs__msg__NestedMsgTest__Sequence__init(complex_msgs__msg__NestedMsgTest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  complex_msgs__msg__NestedMsgTest * data = NULL;
  if (size) {
    data = (complex_msgs__msg__NestedMsgTest *)calloc(size, sizeof(complex_msgs__msg__NestedMsgTest));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = complex_msgs__msg__NestedMsgTest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        complex_msgs__msg__NestedMsgTest__fini(&data[i - 1]);
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
complex_msgs__msg__NestedMsgTest__Sequence__fini(complex_msgs__msg__NestedMsgTest__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      complex_msgs__msg__NestedMsgTest__fini(&array->data[i]);
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

complex_msgs__msg__NestedMsgTest__Sequence *
complex_msgs__msg__NestedMsgTest__Sequence__create(size_t size)
{
  complex_msgs__msg__NestedMsgTest__Sequence * array = (complex_msgs__msg__NestedMsgTest__Sequence *)malloc(sizeof(complex_msgs__msg__NestedMsgTest__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = complex_msgs__msg__NestedMsgTest__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
complex_msgs__msg__NestedMsgTest__Sequence__destroy(complex_msgs__msg__NestedMsgTest__Sequence * array)
{
  if (array) {
    complex_msgs__msg__NestedMsgTest__Sequence__fini(array);
  }
  free(array);
}
