// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__rosidl_typesupport_microxrcedds_cpp.hpp.em
// with input from quad_interfaces:msg/MotionServos.idl
// generated code does not contain a copyright notice

#ifndef QUAD_INTERFACES__MSG__MOTION_SERVOS__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
#define QUAD_INTERFACES__MSG__MOTION_SERVOS__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "quad_interfaces/msg/rosidl_typesupport_microxrcedds_cpp__visibility_control.h"
#include "quad_interfaces/msg/detail/motion_servos__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "ucdr/microcdr.h"

namespace quad_interfaces
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_quad_interfaces
cdr_serialize(
  const quad_interfaces::msg::MotionServos & ros_message,
  ucdrBuffer * cdr);

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_quad_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  quad_interfaces::msg::MotionServos & ros_message);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_quad_interfaces
get_serialized_size(
  const quad_interfaces::msg::MotionServos & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_quad_interfaces
max_serialized_size_MotionServos(
  bool * full_bounded,
  size_t current_alignment);

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace quad_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_quad_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, quad_interfaces, msg, MotionServos)();

#ifdef __cplusplus
}
#endif

#endif  // QUAD_INTERFACES__MSG__MOTION_SERVOS__ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_HPP_
