// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from quad_interfaces:msg/MotionServos.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "quad_interfaces/msg/detail/motion_servos__rosidl_typesupport_introspection_c.h"
#include "quad_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "quad_interfaces/msg/detail/motion_servos__functions.h"
#include "quad_interfaces/msg/detail/motion_servos__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MotionServos__rosidl_typesupport_introspection_c__MotionServos_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  quad_interfaces__msg__MotionServos__init(message_memory);
}

void MotionServos__rosidl_typesupport_introspection_c__MotionServos_fini_function(void * message_memory)
{
  quad_interfaces__msg__MotionServos__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MotionServos__rosidl_typesupport_introspection_c__MotionServos_message_member_array[2] = {
  {
    "enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces__msg__MotionServos, enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces__msg__MotionServos, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotionServos__rosidl_typesupport_introspection_c__MotionServos_message_members = {
  "quad_interfaces__msg",  // message namespace
  "MotionServos",  // message name
  2,  // number of fields
  sizeof(quad_interfaces__msg__MotionServos),
  MotionServos__rosidl_typesupport_introspection_c__MotionServos_message_member_array,  // message members
  MotionServos__rosidl_typesupport_introspection_c__MotionServos_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionServos__rosidl_typesupport_introspection_c__MotionServos_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotionServos__rosidl_typesupport_introspection_c__MotionServos_message_type_support_handle = {
  0,
  &MotionServos__rosidl_typesupport_introspection_c__MotionServos_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_quad_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, quad_interfaces, msg, MotionServos)() {
  if (!MotionServos__rosidl_typesupport_introspection_c__MotionServos_message_type_support_handle.typesupport_identifier) {
    MotionServos__rosidl_typesupport_introspection_c__MotionServos_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotionServos__rosidl_typesupport_introspection_c__MotionServos_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
