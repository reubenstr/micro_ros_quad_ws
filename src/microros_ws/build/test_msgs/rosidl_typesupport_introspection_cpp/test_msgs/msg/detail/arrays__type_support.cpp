// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from test_msgs:msg/Arrays.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "test_msgs/msg/detail/arrays__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace test_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Arrays_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) test_msgs::msg::Arrays(_init);
}

void Arrays_fini_function(void * message_memory)
{
  auto typed_message = static_cast<test_msgs::msg::Arrays *>(message_memory);
  typed_message->~Arrays();
}

size_t size_function__Arrays__bool_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__bool_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__bool_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__byte_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__byte_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<unsigned char, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__byte_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<unsigned char, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__char_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__char_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__char_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__float32_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__float32_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__float32_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__float64_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__float64_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__float64_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__int8_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__int8_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__int8_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__uint8_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__uint8_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__uint8_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__int16_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__int16_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__int16_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__uint16_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__uint16_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__uint16_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__int32_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__int32_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__int32_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__uint32_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__uint32_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__uint32_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__int64_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__int64_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int64_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__int64_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int64_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__uint64_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__uint64_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint64_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__uint64_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint64_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__string_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__string_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__string_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__basic_types_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__basic_types_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<test_msgs::msg::BasicTypes, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__basic_types_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<test_msgs::msg::BasicTypes, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__constants_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__constants_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<test_msgs::msg::Constants, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__constants_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<test_msgs::msg::Constants, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__defaults_values(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__defaults_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<test_msgs::msg::Defaults, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__defaults_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<test_msgs::msg::Defaults, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__bool_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__bool_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__bool_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__byte_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__byte_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<unsigned char, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__byte_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<unsigned char, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__char_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__char_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__char_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__float32_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__float32_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__float32_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__float64_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__float64_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__float64_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__int8_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__int8_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__int8_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__uint8_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__uint8_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__uint8_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__int16_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__int16_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__int16_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__uint16_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__uint16_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint16_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__uint16_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint16_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__int32_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__int32_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int32_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__int32_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int32_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__uint32_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__uint32_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__uint32_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__int64_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__int64_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int64_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__int64_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int64_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__uint64_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__uint64_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint64_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__uint64_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint64_t, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__Arrays__string_values_default(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__Arrays__string_values_default(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__Arrays__string_values_default(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Arrays_message_member_array[32] = {
  {
    "bool_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, bool_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__bool_values,  // size() function pointer
    get_const_function__Arrays__bool_values,  // get_const(index) function pointer
    get_function__Arrays__bool_values,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "byte_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, byte_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__byte_values,  // size() function pointer
    get_const_function__Arrays__byte_values,  // get_const(index) function pointer
    get_function__Arrays__byte_values,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "char_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, char_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__char_values,  // size() function pointer
    get_const_function__Arrays__char_values,  // get_const(index) function pointer
    get_function__Arrays__char_values,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float32_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, float32_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__float32_values,  // size() function pointer
    get_const_function__Arrays__float32_values,  // get_const(index) function pointer
    get_function__Arrays__float32_values,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float64_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, float64_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__float64_values,  // size() function pointer
    get_const_function__Arrays__float64_values,  // get_const(index) function pointer
    get_function__Arrays__float64_values,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int8_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, int8_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__int8_values,  // size() function pointer
    get_const_function__Arrays__int8_values,  // get_const(index) function pointer
    get_function__Arrays__int8_values,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint8_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, uint8_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__uint8_values,  // size() function pointer
    get_const_function__Arrays__uint8_values,  // get_const(index) function pointer
    get_function__Arrays__uint8_values,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int16_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, int16_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__int16_values,  // size() function pointer
    get_const_function__Arrays__int16_values,  // get_const(index) function pointer
    get_function__Arrays__int16_values,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint16_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, uint16_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__uint16_values,  // size() function pointer
    get_const_function__Arrays__uint16_values,  // get_const(index) function pointer
    get_function__Arrays__uint16_values,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int32_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, int32_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__int32_values,  // size() function pointer
    get_const_function__Arrays__int32_values,  // get_const(index) function pointer
    get_function__Arrays__int32_values,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint32_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, uint32_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__uint32_values,  // size() function pointer
    get_const_function__Arrays__uint32_values,  // get_const(index) function pointer
    get_function__Arrays__uint32_values,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int64_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, int64_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__int64_values,  // size() function pointer
    get_const_function__Arrays__int64_values,  // get_const(index) function pointer
    get_function__Arrays__int64_values,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint64_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, uint64_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__uint64_values,  // size() function pointer
    get_const_function__Arrays__uint64_values,  // get_const(index) function pointer
    get_function__Arrays__uint64_values,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "string_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, string_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__string_values,  // size() function pointer
    get_const_function__Arrays__string_values,  // get_const(index) function pointer
    get_function__Arrays__string_values,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "basic_types_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::BasicTypes>(),  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, basic_types_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__basic_types_values,  // size() function pointer
    get_const_function__Arrays__basic_types_values,  // get_const(index) function pointer
    get_function__Arrays__basic_types_values,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "constants_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::Constants>(),  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, constants_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__constants_values,  // size() function pointer
    get_const_function__Arrays__constants_values,  // get_const(index) function pointer
    get_function__Arrays__constants_values,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "defaults_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::Defaults>(),  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, defaults_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__defaults_values,  // size() function pointer
    get_const_function__Arrays__defaults_values,  // get_const(index) function pointer
    get_function__Arrays__defaults_values,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bool_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, bool_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__bool_values_default,  // size() function pointer
    get_const_function__Arrays__bool_values_default,  // get_const(index) function pointer
    get_function__Arrays__bool_values_default,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "byte_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, byte_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__byte_values_default,  // size() function pointer
    get_const_function__Arrays__byte_values_default,  // get_const(index) function pointer
    get_function__Arrays__byte_values_default,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "char_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, char_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__char_values_default,  // size() function pointer
    get_const_function__Arrays__char_values_default,  // get_const(index) function pointer
    get_function__Arrays__char_values_default,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float32_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, float32_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__float32_values_default,  // size() function pointer
    get_const_function__Arrays__float32_values_default,  // get_const(index) function pointer
    get_function__Arrays__float32_values_default,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float64_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, float64_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__float64_values_default,  // size() function pointer
    get_const_function__Arrays__float64_values_default,  // get_const(index) function pointer
    get_function__Arrays__float64_values_default,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int8_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, int8_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__int8_values_default,  // size() function pointer
    get_const_function__Arrays__int8_values_default,  // get_const(index) function pointer
    get_function__Arrays__int8_values_default,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint8_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, uint8_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__uint8_values_default,  // size() function pointer
    get_const_function__Arrays__uint8_values_default,  // get_const(index) function pointer
    get_function__Arrays__uint8_values_default,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int16_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, int16_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__int16_values_default,  // size() function pointer
    get_const_function__Arrays__int16_values_default,  // get_const(index) function pointer
    get_function__Arrays__int16_values_default,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint16_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, uint16_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__uint16_values_default,  // size() function pointer
    get_const_function__Arrays__uint16_values_default,  // get_const(index) function pointer
    get_function__Arrays__uint16_values_default,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int32_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, int32_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__int32_values_default,  // size() function pointer
    get_const_function__Arrays__int32_values_default,  // get_const(index) function pointer
    get_function__Arrays__int32_values_default,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint32_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, uint32_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__uint32_values_default,  // size() function pointer
    get_const_function__Arrays__uint32_values_default,  // get_const(index) function pointer
    get_function__Arrays__uint32_values_default,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int64_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, int64_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__int64_values_default,  // size() function pointer
    get_const_function__Arrays__int64_values_default,  // get_const(index) function pointer
    get_function__Arrays__int64_values_default,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "uint64_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, uint64_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__uint64_values_default,  // size() function pointer
    get_const_function__Arrays__uint64_values_default,  // get_const(index) function pointer
    get_function__Arrays__uint64_values_default,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "string_values_default",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, string_values_default),  // bytes offset in struct
    nullptr,  // default value
    size_function__Arrays__string_values_default,  // size() function pointer
    get_const_function__Arrays__string_values_default,  // get_const(index) function pointer
    get_function__Arrays__string_values_default,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "alignment_check",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_msgs::msg::Arrays, alignment_check),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Arrays_message_members = {
  "test_msgs::msg",  // message namespace
  "Arrays",  // message name
  32,  // number of fields
  sizeof(test_msgs::msg::Arrays),
  Arrays_message_member_array,  // message members
  Arrays_init_function,  // function to initialize message memory (memory has to be allocated)
  Arrays_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Arrays_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Arrays_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace test_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<test_msgs::msg::Arrays>()
{
  return &::test_msgs::msg::rosidl_typesupport_introspection_cpp::Arrays_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_msgs, msg, Arrays)() {
  return &::test_msgs::msg::rosidl_typesupport_introspection_cpp::Arrays_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
