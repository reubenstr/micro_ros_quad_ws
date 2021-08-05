// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/NotEnoughtMemoryTest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__rosidl_typesupport_introspection_c.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__functions.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/not_enought_memory_test__struct.h"


// Include directives for member types
// Member `string`
#include "rosidl_runtime_c/string_functions.h"
// Member `int64_sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NotEnoughtMemoryTest__rosidl_typesupport_introspection_c__NotEnoughtMemoryTest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__init(message_memory);
}

void NotEnoughtMemoryTest__rosidl_typesupport_introspection_c__NotEnoughtMemoryTest_fini_function(void * message_memory)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NotEnoughtMemoryTest__rosidl_typesupport_introspection_c__NotEnoughtMemoryTest_message_member_array[5] = {
  {
    "initial_byte",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest, initial_byte),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest, string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int64_sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest, int64_sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int16_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    10,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest, int16_array),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_byte",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest, end_byte),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NotEnoughtMemoryTest__rosidl_typesupport_introspection_c__NotEnoughtMemoryTest_message_members = {
  "rosidl_typesupport_microxrcedds_test_msg__msg",  // message namespace
  "NotEnoughtMemoryTest",  // message name
  5,  // number of fields
  sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__NotEnoughtMemoryTest),
  NotEnoughtMemoryTest__rosidl_typesupport_introspection_c__NotEnoughtMemoryTest_message_member_array,  // message members
  NotEnoughtMemoryTest__rosidl_typesupport_introspection_c__NotEnoughtMemoryTest_init_function,  // function to initialize message memory (memory has to be allocated)
  NotEnoughtMemoryTest__rosidl_typesupport_introspection_c__NotEnoughtMemoryTest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NotEnoughtMemoryTest__rosidl_typesupport_introspection_c__NotEnoughtMemoryTest_message_type_support_handle = {
  0,
  &NotEnoughtMemoryTest__rosidl_typesupport_introspection_c__NotEnoughtMemoryTest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosidl_typesupport_microxrcedds_test_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosidl_typesupport_microxrcedds_test_msg, msg, NotEnoughtMemoryTest)() {
  if (!NotEnoughtMemoryTest__rosidl_typesupport_introspection_c__NotEnoughtMemoryTest_message_type_support_handle.typesupport_identifier) {
    NotEnoughtMemoryTest__rosidl_typesupport_introspection_c__NotEnoughtMemoryTest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NotEnoughtMemoryTest__rosidl_typesupport_introspection_c__NotEnoughtMemoryTest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
