// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/UnboundedString.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__UNBOUNDED_STRING__STRUCT_H_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__UNBOUNDED_STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'unbounded_string1'
// Member 'unbounded_string2'
// Member 'unbounded_string3'
// Member 'unbounded_string4'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/UnboundedString in the package rosidl_typesupport_microxrcedds_test_msg.
typedef struct rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString
{
  rosidl_runtime_c__String unbounded_string1;
  rosidl_runtime_c__String unbounded_string2;
  rosidl_runtime_c__String unbounded_string3;
  rosidl_runtime_c__String unbounded_string4;
} rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString;

// Struct for a sequence of rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString.
typedef struct rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__Sequence
{
  rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_typesupport_microxrcedds_test_msg__msg__UnboundedString__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__UNBOUNDED_STRING__STRUCT_H_
