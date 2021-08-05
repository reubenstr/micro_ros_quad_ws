// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Primitive.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosidl_typesupport_microxrcedds_test_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Primitive_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosidl_typesupport_microxrcedds_test_msg::msg::Primitive(_init);
}

void Primitive_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosidl_typesupport_microxrcedds_test_msg::msg::Primitive *>(message_memory);
  typed_message->~Primitive();
}

size_t size_function__Primitive__bool_array_test(const void * untyped_member)
{
  (void)untyped_member;
  return 11;
}

const void * get_const_function__Primitive__bool_array_test(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 11> *>(untyped_member);
  return &member[index];
}

void * get_function__Primitive__bool_array_test(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 11> *>(untyped_member);
  return &member[index];
}

size_t size_function__Primitive__byte_array_test(const void * untyped_member)
{
  (void)untyped_member;
  return 11;
}

const void * get_const_function__Primitive__byte_array_test(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<unsigned char, 11> *>(untyped_member);
  return &member[index];
}

void * get_function__Primitive__byte_array_test(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<unsigned char, 11> *>(untyped_member);
  return &member[index];
}

size_t size_function__Primitive__char_array_test(const void * untyped_member)
{
  (void)untyped_member;
  return 11;
}

const void * get_const_function__Primitive__char_array_test(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 11> *>(untyped_member);
  return &member[index];
}

void * get_function__Primitive__char_array_test(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 11> *>(untyped_member);
  return &member[index];
}

size_t size_function__Primitive__float32_array_test(const void * untyped_member)
{
  (void)untyped_member;
  return 11;
}

const void * get_const_function__Primitive__float32_array_test(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 11> *>(untyped_member);
  return &member[index];
}

void * get_function__Primitive__float32_array_test(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 11> *>(untyped_member);
  return &member[index];
}

size_t size_function__Primitive__float64_array_test(const void * untyped_member)
{
  (void)untyped_member;
  return 11;
}

const void * get_const_function__Primitive__float64_array_test(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 11> *>(untyped_member);
  return &member[index];
}

void * get_function__Primitive__float64_array_test(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 11> *>(untyped_member);
  return &member[index];
}

size_t size_function__Primitive__int8_array_test(const void * untyped_member)
{
  (void)untyped_member;
  return 11;
}

const void * get_const_function__Primitive__int8_array_test(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 11> *>(untyped_member);
  return &member[index];
}

void * get_function__Primitive__int8_array_test(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 11> *>(untyped_member);
  return &member[index];
}

size_t size_function__Primitive__uint8_array_test(const void * untyped_member)
{
  (void)untyped_member;
  return 11;
}

const void * get_const_function__Primitive__uint8_array_test(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 11> *>(untyped_member);
  return &member[index];
}

void * get_function__Primitive__uint8_array_test(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 11> *>(untyped_member);
  return &member[index];
}

size_t size_function__Primitive__int16_array_test(const void * untyped_member)
{
  (void)untyped_member;
  return 11;
}

const void * get_const_function__Primitive__int16_array_test(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 11> *>(untyped_member);
  return &member[index];
}

void * get_function__Primitive__int16_array_test(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 11> *>(untyped_member);
  return &member[index];
}

size_t size_function__Primitive__uint16_array_test(const void * untyped_member)
{
  (void)untyped_member;
  return 11;
}

const void * get_const_function__Primitive__uint16_array_test(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 11> *>(untyped_member);
  return &member[index];
}

void * get_function__Primitive__uint16_array_test(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 11> *>(untyped_member);
  return &member[index];
}

size_t size_function__Primitive__int32_array_test(const void * untyped_member)
{
  (void)untyped_member;
  return 11;
}

const void * get_const_function__Primitive__int32_array_test(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 11> *>(untyped_member);
  return &member[index];
}

void * get_function__Primitive__int32_array_test(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 11> *>(untyped_member);
  return &member[index];
}

size_t size_function__Primitive__uint32_array_test(const void * untyped_member)
{
  (void)untyped_member;
  return 11;
}

const void * get_const_function__Primitive__uint32_array_test(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 11> *>(untyped_member);
  return &member[index];
}

void * get_function__Primitive__uint32_array_test(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 11> *>(untyped_member);
  return &member[index];
}

size_t size_function__Primitive__int64_array_test(const void * untyped_member)
{
  (void)untyped_member;
  return 11;
}

const void * get_const_function__Primitive__int64_array_test(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int64_t, 11> *>(untyped_member);
  return &member[index];
}

void * get_function__Primitive__int64_array_test(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int64_t, 11> *>(untyped_member);
  return &member[index];
}

size_t size_function__Primitive__uint64_array_test(const void * untyped_member)
{
  (void)untyped_member;
  return 11;
}

const void * get_const_function__Primitive__uint64_array_test(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint64_t, 11> *>(untyped_member);
  return &member[index];
}

void * get_function__Primitive__uint64_array_test(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint64_t, 11> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Primitive_message_member_array[27] = {
  {
    "bool_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, bool_test),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bool_array_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, bool_array_test),  // bytes offset in struct
    nullptr,  // default value
    size_function__Primitive__bool_array_test,  // size() function pointer
    get_const_function__Primitive__bool_array_test,  // get_const(index) function pointer
    get_function__Primitive__bool_array_test,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "byte_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, byte_test),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "byte_array_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, byte_array_test),  // bytes offset in struct
    nullptr,  // default value
    size_function__Primitive__byte_array_test,  // size() function pointer
    get_const_function__Primitive__byte_array_test,  // get_const(index) function pointer
    get_function__Primitive__byte_array_test,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "char_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, char_test),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "char_array_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, char_array_test),  // bytes offset in struct
    nullptr,  // default value
    size_function__Primitive__char_array_test,  // size() function pointer
    get_const_function__Primitive__char_array_test,  // get_const(index) function pointer
    get_function__Primitive__char_array_test,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float32_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, float32_test),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float32_array_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, float32_array_test),  // bytes offset in struct
    nullptr,  // default value
    size_function__Primitive__float32_array_test,  // size() function pointer
    get_const_function__Primitive__float32_array_test,  // get_const(index) function pointer
    get_function__Primitive__float32_array_test,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "double_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, double_test),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float64_array_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, float64_array_test),  // bytes offset in struct
    nullptr,  // default value
    size_function__Primitive__float64_array_test,  // size() function pointer
    get_const_function__Primitive__float64_array_test,  // get_const(index) function pointer
    get_function__Primitive__float64_array_test,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int8_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, int8_test),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int8_array_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, int8_array_test),  // bytes offset in struct
    nullptr,  // default value
    size_function__Primitive__int8_array_test,  // size() function pointer
    get_const_function__Primitive__int8_array_test,  // get_const(index) function pointer
    get_function__Primitive__int8_array_test,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint8_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, uint8_test),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint8_array_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, uint8_array_test),  // bytes offset in struct
    nullptr,  // default value
    size_function__Primitive__uint8_array_test,  // size() function pointer
    get_const_function__Primitive__uint8_array_test,  // get_const(index) function pointer
    get_function__Primitive__uint8_array_test,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int16_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, int16_test),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int16_array_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, int16_array_test),  // bytes offset in struct
    nullptr,  // default value
    size_function__Primitive__int16_array_test,  // size() function pointer
    get_const_function__Primitive__int16_array_test,  // get_const(index) function pointer
    get_function__Primitive__int16_array_test,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint16_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, uint16_test),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint16_array_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, uint16_array_test),  // bytes offset in struct
    nullptr,  // default value
    size_function__Primitive__uint16_array_test,  // size() function pointer
    get_const_function__Primitive__uint16_array_test,  // get_const(index) function pointer
    get_function__Primitive__uint16_array_test,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int32_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, int32_test),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int32_array_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, int32_array_test),  // bytes offset in struct
    nullptr,  // default value
    size_function__Primitive__int32_array_test,  // size() function pointer
    get_const_function__Primitive__int32_array_test,  // get_const(index) function pointer
    get_function__Primitive__int32_array_test,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint32_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, uint32_test),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint32_array_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, uint32_array_test),  // bytes offset in struct
    nullptr,  // default value
    size_function__Primitive__uint32_array_test,  // size() function pointer
    get_const_function__Primitive__uint32_array_test,  // get_const(index) function pointer
    get_function__Primitive__uint32_array_test,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int64_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, int64_test),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int64_array_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, int64_array_test),  // bytes offset in struct
    nullptr,  // default value
    size_function__Primitive__int64_array_test,  // size() function pointer
    get_const_function__Primitive__int64_array_test,  // get_const(index) function pointer
    get_function__Primitive__int64_array_test,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint64_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, uint64_test),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint64_array_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    11,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, uint64_array_test),  // bytes offset in struct
    nullptr,  // default value
    size_function__Primitive__uint64_array_test,  // size() function pointer
    get_const_function__Primitive__uint64_array_test,  // get_const(index) function pointer
    get_function__Primitive__uint64_array_test,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nested_test",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rosidl_typesupport_microxrcedds_test_msg::msg::UnboundedString>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive, nested_test),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Primitive_message_members = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",  // message namespace
  "Primitive",  // message name
  27,  // number of fields
  sizeof(rosidl_typesupport_microxrcedds_test_msg::msg::Primitive),
  Primitive_message_member_array,  // message members
  Primitive_init_function,  // function to initialize message memory (memory has to be allocated)
  Primitive_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Primitive_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Primitive_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rosidl_typesupport_microxrcedds_test_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosidl_typesupport_microxrcedds_test_msg::msg::Primitive>()
{
  return &::rosidl_typesupport_microxrcedds_test_msg::msg::rosidl_typesupport_introspection_cpp::Primitive_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosidl_typesupport_microxrcedds_test_msg, msg, Primitive)() {
  return &::rosidl_typesupport_microxrcedds_test_msg::msg::rosidl_typesupport_introspection_cpp::Primitive_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
