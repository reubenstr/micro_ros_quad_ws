// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/BasicPrimitive.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__struct.hpp"
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

void BasicPrimitive_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive(_init);
}

void BasicPrimitive_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive *>(message_memory);
  typed_message->~BasicPrimitive();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BasicPrimitive_message_member_array[3] = {
  {
    "a",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive, a),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "b",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive, b),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "c",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive, c),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BasicPrimitive_message_members = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",  // message namespace
  "BasicPrimitive",  // message name
  3,  // number of fields
  sizeof(rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive),
  BasicPrimitive_message_member_array,  // message members
  BasicPrimitive_init_function,  // function to initialize message memory (memory has to be allocated)
  BasicPrimitive_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BasicPrimitive_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BasicPrimitive_message_members,
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
get_message_type_support_handle<rosidl_typesupport_microxrcedds_test_msg::msg::BasicPrimitive>()
{
  return &::rosidl_typesupport_microxrcedds_test_msg::msg::rosidl_typesupport_introspection_cpp::BasicPrimitive_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosidl_typesupport_microxrcedds_test_msg, msg, BasicPrimitive)() {
  return &::rosidl_typesupport_microxrcedds_test_msg::msg::rosidl_typesupport_introspection_cpp::BasicPrimitive_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
