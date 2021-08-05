// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drive_base_msgs:msg/CommandHeader.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_BASE_MSGS__MSG__DETAIL__COMMAND_HEADER__STRUCT_H_
#define DRIVE_BASE_MSGS__MSG__DETAIL__COMMAND_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/CommandHeader in the package drive_base_msgs.
typedef struct drive_base_msgs__msg__CommandHeader
{
  builtin_interfaces__msg__Time stamp;
  uint32_t command_id;
  uint16_t expected_period;
} drive_base_msgs__msg__CommandHeader;

// Struct for a sequence of drive_base_msgs__msg__CommandHeader.
typedef struct drive_base_msgs__msg__CommandHeader__Sequence
{
  drive_base_msgs__msg__CommandHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drive_base_msgs__msg__CommandHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_BASE_MSGS__MSG__DETAIL__COMMAND_HEADER__STRUCT_H_
