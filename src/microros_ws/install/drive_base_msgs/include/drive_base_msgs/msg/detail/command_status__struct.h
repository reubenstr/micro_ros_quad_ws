// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drive_base_msgs:msg/CommandStatus.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_BASE_MSGS__MSG__DETAIL__COMMAND_STATUS__STRUCT_H_
#define DRIVE_BASE_MSGS__MSG__DETAIL__COMMAND_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OK'.
enum
{
  drive_base_msgs__msg__CommandStatus__OK = 0
};

/// Constant 'CAPABILITIES_EXCEEDED'.
enum
{
  drive_base_msgs__msg__CommandStatus__CAPABILITIES_EXCEEDED = 1
};

/// Constant 'INVALID'.
enum
{
  drive_base_msgs__msg__CommandStatus__INVALID = 2
};

/// Constant 'POWER_INSUFFICIENT'.
enum
{
  drive_base_msgs__msg__CommandStatus__POWER_INSUFFICIENT = 3
};

/// Constant 'TEMPORARY_FAILURE'.
enum
{
  drive_base_msgs__msg__CommandStatus__TEMPORARY_FAILURE = 4
};

/// Constant 'SYSTEM_FAILURE'.
enum
{
  drive_base_msgs__msg__CommandStatus__SYSTEM_FAILURE = 5
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'cmd_header'
#include "drive_base_msgs/msg/detail/command_header__struct.h"

// Struct defined in msg/CommandStatus in the package drive_base_msgs.
typedef struct drive_base_msgs__msg__CommandStatus
{
  builtin_interfaces__msg__Time stamp;
  drive_base_msgs__msg__CommandHeader cmd_header;
  uint8_t status;
} drive_base_msgs__msg__CommandStatus;

// Struct for a sequence of drive_base_msgs__msg__CommandStatus.
typedef struct drive_base_msgs__msg__CommandStatus__Sequence
{
  drive_base_msgs__msg__CommandStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drive_base_msgs__msg__CommandStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_BASE_MSGS__MSG__DETAIL__COMMAND_STATUS__STRUCT_H_
