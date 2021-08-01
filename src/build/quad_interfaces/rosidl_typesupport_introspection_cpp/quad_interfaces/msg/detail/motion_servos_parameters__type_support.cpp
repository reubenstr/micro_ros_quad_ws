// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from quad_interfaces:msg/MotionServosParameters.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "quad_interfaces/msg/detail/motion_servos_parameters__struct.hpp"
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

void MotionServosParameters_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) quad_interfaces::msg::MotionServosParameters(_init);
}

void MotionServosParameters_fini_function(void * message_memory)
{
  auto typed_message = static_cast<quad_interfaces::msg::MotionServosParameters *>(message_memory);
  typed_message->~MotionServosParameters();
}

size_t size_function__MotionServosParameters__pin(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotionServosParameters__pin(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionServosParameters__pin(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 12> *>(untyped_member);
  return &member[index];
}

size_t size_function__MotionServosParameters__min_angle(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotionServosParameters__min_angle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionServosParameters__min_angle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

size_t size_function__MotionServosParameters__max_angle(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotionServosParameters__max_angle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionServosParameters__max_angle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

size_t size_function__MotionServosParameters__calibration_angle_offset(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotionServosParameters__calibration_angle_offset(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionServosParameters__calibration_angle_offset(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

size_t size_function__MotionServosParameters__ms_per_degree(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__MotionServosParameters__ms_per_degree(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__MotionServosParameters__ms_per_degree(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotionServosParameters_message_member_array[5] = {
  {
    "pin",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces::msg::MotionServosParameters, pin),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionServosParameters__pin,  // size() function pointer
    get_const_function__MotionServosParameters__pin,  // get_const(index) function pointer
    get_function__MotionServosParameters__pin,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "min_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces::msg::MotionServosParameters, min_angle),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionServosParameters__min_angle,  // size() function pointer
    get_const_function__MotionServosParameters__min_angle,  // get_const(index) function pointer
    get_function__MotionServosParameters__min_angle,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces::msg::MotionServosParameters, max_angle),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionServosParameters__max_angle,  // size() function pointer
    get_const_function__MotionServosParameters__max_angle,  // get_const(index) function pointer
    get_function__MotionServosParameters__max_angle,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "calibration_angle_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces::msg::MotionServosParameters, calibration_angle_offset),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionServosParameters__calibration_angle_offset,  // size() function pointer
    get_const_function__MotionServosParameters__calibration_angle_offset,  // get_const(index) function pointer
    get_function__MotionServosParameters__calibration_angle_offset,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ms_per_degree",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces::msg::MotionServosParameters, ms_per_degree),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotionServosParameters__ms_per_degree,  // size() function pointer
    get_const_function__MotionServosParameters__ms_per_degree,  // get_const(index) function pointer
    get_function__MotionServosParameters__ms_per_degree,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotionServosParameters_message_members = {
  "quad_interfaces::msg",  // message namespace
  "MotionServosParameters",  // message name
  5,  // number of fields
  sizeof(quad_interfaces::msg::MotionServosParameters),
  MotionServosParameters_message_member_array,  // message members
  MotionServosParameters_init_function,  // function to initialize message memory (memory has to be allocated)
  MotionServosParameters_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotionServosParameters_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotionServosParameters_message_members,
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
get_message_type_support_handle<quad_interfaces::msg::MotionServosParameters>()
{
  return &::quad_interfaces::msg::rosidl_typesupport_introspection_cpp::MotionServosParameters_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, quad_interfaces, msg, MotionServosParameters)() {
  return &::quad_interfaces::msg::rosidl_typesupport_introspection_cpp::MotionServosParameters_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
