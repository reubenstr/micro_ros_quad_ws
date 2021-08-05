// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Primitive.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__PRIMITIVE__STRUCT_H_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__PRIMITIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'nested_test'
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/unbounded_string__struct.h"

// Struct defined in msg/Primitive in the package rosidl_typesupport_microxrcedds_test_msg.
typedef struct rosidl_typesupport_microxrcedds_test_msg__msg__Primitive
{
  bool bool_test;
  bool bool_array_test[11];
  uint8_t byte_test;
  uint8_t byte_array_test[11];
  uint8_t char_test;
  uint8_t char_array_test[11];
  float float32_test;
  float float32_array_test[11];
  double double_test;
  double float64_array_test[11];
  int8_t int8_test;
  int8_t int8_array_test[11];
  uint8_t uint8_test;
  uint8_t uint8_array_test[11];
  int16_t int16_test;
  int16_t int16_array_test[11];
  uint16_t uint16_test;
  uint16_t uint16_array_test[11];
  int32_t int32_test;
  int32_t int32_array_test[11];
  uint32_t uint32_test;
  uint32_t uint32_array_test[11];
  int64_t int64_test;
  int64_t int64_array_test[11];
  uint64_t uint64_test;
  uint64_t uint64_array_test[11];
  rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString nested_test;
} rosidl_typesupport_microxrcedds_test_msg__msg__Primitive;

// Struct for a sequence of rosidl_typesupport_microxrcedds_test_msg__msg__Primitive.
typedef struct rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence
{
  rosidl_typesupport_microxrcedds_test_msg__msg__Primitive * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__PRIMITIVE__STRUCT_H_
