// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from quad_interfaces:msg/MotionServosParameters.idl
// generated code does not contain a copyright notice

#ifndef QUAD_INTERFACES__MSG__DETAIL__MOTION_SERVOS_PARAMETERS__STRUCT_H_
#define QUAD_INTERFACES__MSG__DETAIL__MOTION_SERVOS_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotionServosParameters in the package quad_interfaces.
typedef struct quad_interfaces__msg__MotionServosParameters
{
  int32_t pin[12];
  float min_angle[12];
  float max_angle[12];
  float calibration_angle_offset[12];
  float ms_per_degree[12];
} quad_interfaces__msg__MotionServosParameters;

// Struct for a sequence of quad_interfaces__msg__MotionServosParameters.
typedef struct quad_interfaces__msg__MotionServosParameters__Sequence
{
  quad_interfaces__msg__MotionServosParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} quad_interfaces__msg__MotionServosParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // QUAD_INTERFACES__MSG__DETAIL__MOTION_SERVOS_PARAMETERS__STRUCT_H_
