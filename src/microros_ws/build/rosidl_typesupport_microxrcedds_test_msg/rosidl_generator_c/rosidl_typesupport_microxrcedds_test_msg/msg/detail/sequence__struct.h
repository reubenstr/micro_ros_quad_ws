// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Sequence.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__SEQUENCE__STRUCT_H_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__SEQUENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sequence_string_test'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Sequence in the package rosidl_typesupport_microxrcedds_test_msg.
typedef struct rosidl_typesupport_microxrcedds_test_msg__msg__Sequence
{
  rosidl_runtime_c__String__Sequence sequence_string_test;
} rosidl_typesupport_microxrcedds_test_msg__msg__Sequence;

// Struct for a sequence of rosidl_typesupport_microxrcedds_test_msg__msg__Sequence.
typedef struct rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence
{
  rosidl_typesupport_microxrcedds_test_msg__msg__Sequence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_typesupport_microxrcedds_test_msg__msg__Sequence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__SEQUENCE__STRUCT_H_
