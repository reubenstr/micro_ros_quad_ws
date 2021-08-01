// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from quad_interfaces:msg/AuxServosCalibration.idl
// generated code does not contain a copyright notice

#ifndef QUAD_INTERFACES__MSG__DETAIL__AUX_SERVOS_CALIBRATION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define QUAD_INTERFACES__MSG__DETAIL__AUX_SERVOS_CALIBRATION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "quad_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "quad_interfaces/msg/detail/aux_servos_calibration__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace quad_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quad_interfaces
cdr_serialize(
  const quad_interfaces::msg::AuxServosCalibration & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quad_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  quad_interfaces::msg::AuxServosCalibration & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quad_interfaces
get_serialized_size(
  const quad_interfaces::msg::AuxServosCalibration & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quad_interfaces
max_serialized_size_AuxServosCalibration(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace quad_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quad_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, quad_interfaces, msg, AuxServosCalibration)();

#ifdef __cplusplus
}
#endif

#endif  // QUAD_INTERFACES__MSG__DETAIL__AUX_SERVOS_CALIBRATION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
