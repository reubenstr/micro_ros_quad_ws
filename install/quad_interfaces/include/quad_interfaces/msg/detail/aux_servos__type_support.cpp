// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from quad_interfaces:msg/AuxServos.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "quad_interfaces/msg/detail/aux_servos__struct.hpp"
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

void AuxServos_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) quad_interfaces::msg::AuxServos(_init);
}

void AuxServos_fini_function(void * message_memory)
{
  auto typed_message = static_cast<quad_interfaces::msg::AuxServos *>(message_memory);
  typed_message->~AuxServos();
}

size_t size_function__AuxServos__enable(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__AuxServos__enable(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__AuxServos__enable(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__AuxServos__angle(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__AuxServos__angle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__AuxServos__angle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AuxServos_message_member_array[2] = {
  {
    "enable",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces::msg::AuxServos, enable),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuxServos__enable,  // size() function pointer
    get_const_function__AuxServos__enable,  // get_const(index) function pointer
    get_function__AuxServos__enable,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(quad_interfaces::msg::AuxServos, angle),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuxServos__angle,  // size() function pointer
    get_const_function__AuxServos__angle,  // get_const(index) function pointer
    get_function__AuxServos__angle,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AuxServos_message_members = {
  "quad_interfaces::msg",  // message namespace
  "AuxServos",  // message name
  2,  // number of fields
  sizeof(quad_interfaces::msg::AuxServos),
  AuxServos_message_member_array,  // message members
  AuxServos_init_function,  // function to initialize message memory (memory has to be allocated)
  AuxServos_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AuxServos_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AuxServos_message_members,
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
get_message_type_support_handle<quad_interfaces::msg::AuxServos>()
{
  return &::quad_interfaces::msg::rosidl_typesupport_introspection_cpp::AuxServos_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, quad_interfaces, msg, AuxServos)() {
  return &::quad_interfaces::msg::rosidl_typesupport_introspection_cpp::AuxServos_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
