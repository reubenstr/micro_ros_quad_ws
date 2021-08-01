// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from quad_interfaces:msg/AuxServosCalibration.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "quad_interfaces/msg/detail/aux_servos_calibration__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace quad_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AuxServosCalibration_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) quad_interfaces::msg::AuxServosCalibration(_init);
}

void AuxServosCalibration_fini_function(void * message_memory)
{
  auto typed_message = static_cast<quad_interfaces::msg::AuxServosCalibration *>(message_memory);
  typed_message->~AuxServosCalibration();
}

size_t size_function__AuxServosCalibration__pin(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__AuxServosCalibration__pin(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__AuxServosCalibration__pin(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__AuxServosCalibration__min_angle(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__AuxServosCalibration__min_angle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__AuxServosCalibration__min_angle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__AuxServosCalibration__max_angle(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__AuxServosCalibration__max_angle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__AuxServosCalibration__max_angle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__AuxServosCalibration__calibration_angle_offset(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__AuxServosCalibration__calibration_angle_offset(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__AuxServosCalibration__calibration_angle_offset(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__AuxServosCalibration__ms_per_degree(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__AuxServosCalibration__ms_per_degree(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__AuxServosCalibration__ms_per_degree(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AuxServosCalibration_message_member_array[5] = {
  {
    "pin",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces::msg::AuxServosCalibration, pin),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuxServosCalibration__pin,  // size() function pointer
    get_const_function__AuxServosCalibration__pin,  // get_const(index) function pointer
    get_function__AuxServosCalibration__pin,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "min_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces::msg::AuxServosCalibration, min_angle),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuxServosCalibration__min_angle,  // size() function pointer
    get_const_function__AuxServosCalibration__min_angle,  // get_const(index) function pointer
    get_function__AuxServosCalibration__min_angle,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces::msg::AuxServosCalibration, max_angle),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuxServosCalibration__max_angle,  // size() function pointer
    get_const_function__AuxServosCalibration__max_angle,  // get_const(index) function pointer
    get_function__AuxServosCalibration__max_angle,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "calibration_angle_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces::msg::AuxServosCalibration, calibration_angle_offset),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuxServosCalibration__calibration_angle_offset,  // size() function pointer
    get_const_function__AuxServosCalibration__calibration_angle_offset,  // get_const(index) function pointer
    get_function__AuxServosCalibration__calibration_angle_offset,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ms_per_degree",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces::msg::AuxServosCalibration, ms_per_degree),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuxServosCalibration__ms_per_degree,  // size() function pointer
    get_const_function__AuxServosCalibration__ms_per_degree,  // get_const(index) function pointer
    get_function__AuxServosCalibration__ms_per_degree,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AuxServosCalibration_message_members = {
  "quad_interfaces::msg",  // message namespace
  "AuxServosCalibration",  // message name
  5,  // number of fields
  sizeof(quad_interfaces::msg::AuxServosCalibration),
  AuxServosCalibration_message_member_array,  // message members
  AuxServosCalibration_init_function,  // function to initialize message memory (memory has to be allocated)
  AuxServosCalibration_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AuxServosCalibration_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AuxServosCalibration_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace quad_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<quad_interfaces::msg::AuxServosCalibration>()
{
  return &::quad_interfaces::msg::rosidl_typesupport_introspection_cpp::AuxServosCalibration_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, quad_interfaces, msg, AuxServosCalibration)() {
  return &::quad_interfaces::msg::rosidl_typesupport_introspection_cpp::AuxServosCalibration_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
