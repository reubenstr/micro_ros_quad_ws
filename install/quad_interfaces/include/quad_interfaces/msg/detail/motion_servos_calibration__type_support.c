// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from quad_interfaces:msg/MotionServosCalibration.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "quad_interfaces/msg/detail/motion_servos_calibration__rosidl_typesupport_introspection_c.h"
#include "quad_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "quad_interfaces/msg/detail/motion_servos_calibration__functions.h"
#include "quad_interfaces/msg/detail/motion_servos_calibration__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MotionServosCalibration__rosidl_typesupport_introspection_c__MotionServosCalibration_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quad_interfaces__msg__MotionServosCalibration__init(message_memory);
}

void MotionServosCalibration__rosidl_typesupport_introspection_c__MotionServosCalibration_fini_function(void * message_memory)
{
  quad_interfaces__msg__MotionServosCalibration__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotionServosCalibration__rosidl_typesupport_introspection_c__MotionServosCalibration_message_member_array[5] = {
  {
    "pin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces__msg__MotionServosCalibration, pin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces__msg__MotionServosCalibration, min_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces__msg__MotionServosCalibration, max_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "calibration_angle_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces__msg__MotionServosCalibration, calibration_angle_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ms_per_degree",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces__msg__MotionServosCalibration, ms_per_degree),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotionServosCalibration__rosidl_typesupport_introspection_c__MotionServosCalibration_message_members = {
  "quad_interfaces__msg",  // message namespace
  "MotionServosCalibration",  // message name
  5,  // number of fields
  sizeof(quad_interfaces__msg__MotionServosCalibration),
  MotionServosCalibration__rosidl_typesupport_introspection_c__MotionServosCalibration_message_member_array,  // message members
  MotionServosCalibration__rosidl_typesupport_introspection_c__MotionServosCalibration_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionServosCalibration__rosidl_typesupport_introspection_c__MotionServosCalibration_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotionServosCalibration__rosidl_typesupport_introspection_c__MotionServosCalibration_message_type_support_handle = {
  0,
  &MotionServosCalibration__rosidl_typesupport_introspection_c__MotionServosCalibration_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quad_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quad_interfaces, msg, MotionServosCalibration)() {
  if (!MotionServosCalibration__rosidl_typesupport_introspection_c__MotionServosCalibration_message_type_support_handle.typesupport_identifier) {
    MotionServosCalibration__rosidl_typesupport_introspection_c__MotionServosCalibration_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotionServosCalibration__rosidl_typesupport_introspection_c__MotionServosCalibration_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
