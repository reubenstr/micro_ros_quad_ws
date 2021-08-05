// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/NotEnoughtMemoryTest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__struct.hpp"
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

void NotEnoughtMemoryTest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest(_init);
}

void NotEnoughtMemoryTest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest *>(message_memory);
  typed_message->~NotEnoughtMemoryTest();
}

size_t size_function__NotEnoughtMemoryTest__int64_sequence(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NotEnoughtMemoryTest__int64_sequence(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__NotEnoughtMemoryTest__int64_sequence(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void resize_function__NotEnoughtMemoryTest__int64_sequence(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NotEnoughtMemoryTest__int16_array(const void * untyped_member)
{
  (void)untyped_member;
  return 10;
}

const void * get_const_function__NotEnoughtMemoryTest__int16_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 10> *>(untyped_member);
  return &member[index];
}

void * get_function__NotEnoughtMemoryTest__int16_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 10> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NotEnoughtMemoryTest_message_member_array[5] = {
  {
    "initial_byte",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest, initial_byte),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "string",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest, string),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "int64_sequence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest, int64_sequence),  // bytes offset in struct
    nullptr,  // default value
    size_function__NotEnoughtMemoryTest__int64_sequence,  // size() function pointer
    get_const_function__NotEnoughtMemoryTest__int64_sequence,  // get_const(index) function pointer
    get_function__NotEnoughtMemoryTest__int64_sequence,  // get(index) function pointer
    resize_function__NotEnoughtMemoryTest__int64_sequence  // resize(index) function pointer
  },
  {
    "int16_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    10,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest, int16_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__NotEnoughtMemoryTest__int16_array,  // size() function pointer
    get_const_function__NotEnoughtMemoryTest__int16_array,  // get_const(index) function pointer
    get_function__NotEnoughtMemoryTest__int16_array,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "end_byte",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest, end_byte),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NotEnoughtMemoryTest_message_members = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",  // message namespace
  "NotEnoughtMemoryTest",  // message name
  5,  // number of fields
  sizeof(rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest),
  NotEnoughtMemoryTest_message_member_array,  // message members
  NotEnoughtMemoryTest_init_function,  // function to initialize message memory (memory has to be allocated)
  NotEnoughtMemoryTest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NotEnoughtMemoryTest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NotEnoughtMemoryTest_message_members,
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
get_message_type_support_handle<rosidl_typesupport_microxrcedds_test_msg::msg::NotEnoughtMemoryTest>()
{
  return &::rosidl_typesupport_microxrcedds_test_msg::msg::rosidl_typesupport_introspection_cpp::NotEnoughtMemoryTest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosidl_typesupport_microxrcedds_test_msg, msg, NotEnoughtMemoryTest)() {
  return &::rosidl_typesupport_microxrcedds_test_msg::msg::rosidl_typesupport_introspection_cpp::NotEnoughtMemoryTest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
