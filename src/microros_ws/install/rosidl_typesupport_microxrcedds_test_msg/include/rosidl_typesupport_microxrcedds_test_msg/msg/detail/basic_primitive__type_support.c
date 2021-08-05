// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/BasicPrimitive.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__rosidl_typesupport_introspection_c.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__functions.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BasicPrimitive__rosidl_typesupport_introspection_c__BasicPrimitive_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__init(message_memory);
}

void BasicPrimitive__rosidl_typesupport_introspection_c__BasicPrimitive_fini_function(void * message_memory)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BasicPrimitive__rosidl_typesupport_introspection_c__BasicPrimitive_message_member_array[3] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive, c),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BasicPrimitive__rosidl_typesupport_introspection_c__BasicPrimitive_message_members = {
  "rosidl_typesupport_microxrcedds_test_msg__msg",  // message namespace
  "BasicPrimitive",  // message name
  3,  // number of fields
  sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive),
  BasicPrimitive__rosidl_typesupport_introspection_c__BasicPrimitive_message_member_array,  // message members
  BasicPrimitive__rosidl_typesupport_introspection_c__BasicPrimitive_init_function,  // function to initialize message memory (memory has to be allocated)
  BasicPrimitive__rosidl_typesupport_introspection_c__BasicPrimitive_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BasicPrimitive__rosidl_typesupport_introspection_c__BasicPrimitive_message_type_support_handle = {
  0,
  &BasicPrimitive__rosidl_typesupport_introspection_c__BasicPrimitive_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosidl_typesupport_microxrcedds_test_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosidl_typesupport_microxrcedds_test_msg, msg, BasicPrimitive)() {
  if (!BasicPrimitive__rosidl_typesupport_introspection_c__BasicPrimitive_message_type_support_handle.typesupport_identifier) {
    BasicPrimitive__rosidl_typesupport_introspection_c__BasicPrimitive_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BasicPrimitive__rosidl_typesupport_introspection_c__BasicPrimitive_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
