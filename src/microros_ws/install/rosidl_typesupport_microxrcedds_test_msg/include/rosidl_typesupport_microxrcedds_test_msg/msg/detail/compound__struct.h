// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Compound.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__COMPOUND__STRUCT_H_
#define ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__COMPOUND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'string_data'
#include "rosidl_runtime_c/string.h"
// Member 'sequence_data'
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__struct.h"
// Member 'array_data'
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__struct.h"

// Struct defined in msg/Compound in the package rosidl_typesupport_microxrcedds_test_msg.
typedef struct rosidl_typesupport_microxrcedds_test_msg__msg__Compound
{
  rosidl_runtime_c__String string_data;
  rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence sequence_data;
  rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive array_data[3];
} rosidl_typesupport_microxrcedds_test_msg__msg__Compound;

// Struct for a sequence of rosidl_typesupport_microxrcedds_test_msg__msg__Compound.
typedef struct rosidl_typesupport_microxrcedds_test_msg__msg__Compound__Sequence
{
  rosidl_typesupport_microxrcedds_test_msg__msg__Compound * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_typesupport_microxrcedds_test_msg__msg__Compound__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_TYPESUPPORT_MICROXRCEDDS_TEST_MSG__MSG__DETAIL__COMPOUND__STRUCT_H_
