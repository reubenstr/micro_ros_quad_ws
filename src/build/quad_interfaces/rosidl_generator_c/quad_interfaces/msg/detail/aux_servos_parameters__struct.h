// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quad_interfaces:msg/AuxServosParameters.idl
// generated code does not contain a copyright notice

#ifndef QUAD_INTERFACES__MSG__DETAIL__AUX_SERVOS_PARAMETERS__STRUCT_H_
#define QUAD_INTERFACES__MSG__DETAIL__AUX_SERVOS_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/AuxServosParameters in the package quad_interfaces.
typedef struct quad_interfaces__msg__AuxServosParameters
{
  int32_t pin[4];
  float min_angle[4];
  float max_angle[4];
  float calibration_angle_offset[4];
  float ms_per_degree[4];
} quad_interfaces__msg__AuxServosParameters;

// Struct for a sequence of quad_interfaces__msg__AuxServosParameters.
typedef struct quad_interfaces__msg__AuxServosParameters__Sequence
{
  quad_interfaces__msg__AuxServosParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quad_interfaces__msg__AuxServosParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUAD_INTERFACES__MSG__DETAIL__AUX_SERVOS_PARAMETERS__STRUCT_H_
