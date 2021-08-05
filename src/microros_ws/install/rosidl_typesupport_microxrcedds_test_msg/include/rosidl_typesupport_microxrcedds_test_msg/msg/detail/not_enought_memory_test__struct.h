// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/NotEnoughtMemoryTest.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__NOT_ENOUGHT_MEMORY_TEST__STRUCT_H_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__NOT_ENOUGHT_MEMORY_TEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'string'
#include "rosidl_runtime_c/string.h"
// Member 'int64_sequence'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/NotEnoughtMemoryTest in the package rosidl_typesupport_microxrcedds_test_msg.
typedef struct rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest
{
  int8_t initial_byte;
  rosidl_runtime_c__String string;
  rosidl_runtime_c__int64__Sequence int64_sequence;
  int16_t int16_array[10];
  int8_t end_byte;
} rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest;

// Struct for a sequence of rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest.
typedef struct rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__Sequence
{
  rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__NOT_ENOUGHT_MEMORY_TEST__STRUCT_H_
