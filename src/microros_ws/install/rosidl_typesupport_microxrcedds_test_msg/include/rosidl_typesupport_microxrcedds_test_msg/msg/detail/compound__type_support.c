// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Compound.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__rosidl_typesupport_introspection_c.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__functions.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__struct.h"


// Include directives for member types
// Member `string_data`
#include "rosidl_runtime_c/string_functions.h"
// Member `sequence_data`
#include "rosidl_typesupport_microxrcedds_test_msg/msg/primitive.h"
// Member `sequence_data`
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__rosidl_typesupport_introspection_c.h"
// Member `array_data`
#include "rosidl_typesupport_microxrcedds_test_msg/msg/basic_primitive.h"
// Member `array_data`
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Compound__rosidl_typesupport_introspection_c__Compound_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosidl_typesupport_microxrcedds_test_msg__msg__Compound__init(message_memory);
}

void Compound__rosidl_typesupport_introspection_c__Compound_fini_function(void * message_memory)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__Compound__fini(message_memory);
}

size_t Compound__rosidl_typesupport_introspection_c__size_function__Primitive__sequence_data(
  const void * untyped_member)
{
  const rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence * member =
    (const rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence *)(untyped_member);
  return member->size;
}

const void * Compound__rosidl_typesupport_introspection_c__get_const_function__Primitive__sequence_data(
  const void * untyped_member, size_t index)
{
  const rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence * member =
    (const rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Compound__rosidl_typesupport_introspection_c__get_function__Primitive__sequence_data(
  void * untyped_member, size_t index)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence * member =
    (rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Compound__rosidl_typesupport_introspection_c__resize_function__Primitive__sequence_data(
  void * untyped_member, size_t size)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence * member =
    (rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence *)(untyped_member);
  rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence__fini(member);
  return rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence__init(member, size);
}

size_t Compound__rosidl_typesupport_introspection_c__size_function__BasicPrimitive__array_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * Compound__rosidl_typesupport_introspection_c__get_const_function__BasicPrimitive__array_data(
  const void * untyped_member, size_t index)
{
  const rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive ** member =
    (const rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive **)(untyped_member);
  return &(*member)[index];
}

void * Compound__rosidl_typesupport_introspection_c__get_function__BasicPrimitive__array_data(
  void * untyped_member, size_t index)
{
  rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive ** member =
    (rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember Compound__rosidl_typesupport_introspection_c__Compound_message_member_array[3] = {
  {
    "string_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Compound, string_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Compound, sequence_data),  // bytes offset in struct
    NULL,  // default value
    Compound__rosidl_typesupport_introspection_c__size_function__Primitive__sequence_data,  // size() function pointer
    Compound__rosidl_typesupport_introspection_c__get_const_function__Primitive__sequence_data,  // get_const(index) function pointer
    Compound__rosidl_typesupport_introspection_c__get_function__Primitive__sequence_data,  // get(index) function pointer
    Compound__rosidl_typesupport_introspection_c__resize_function__Primitive__sequence_data  // resize(index) function pointer
  },
  {
    "array_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(rosidl_typesupport_microxrcedds_test_msg__msg__Compound, array_data),  // bytes offset in struct
    NULL,  // default value
    Compound__rosidl_typesupport_introspection_c__size_function__BasicPrimitive__array_data,  // size() function pointer
    Compound__rosidl_typesupport_introspection_c__get_const_function__BasicPrimitive__array_data,  // get_const(index) function pointer
    Compound__rosidl_typesupport_introspection_c__get_function__BasicPrimitive__array_data,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Compound__rosidl_typesupport_introspection_c__Compound_message_members = {
  "rosidl_typesupport_microxrcedds_test_msg__msg",  // message namespace
  "Compound",  // message name
  3,  // number of fields
  sizeof(rosidl_typesupport_microxrcedds_test_msg__msg__Compound),
  Compound__rosidl_typesupport_introspection_c__Compound_message_member_array,  // message members
  Compound__rosidl_typesupport_introspection_c__Compound_init_function,  // function to initialize message memory (memory has to be allocated)
  Compound__rosidl_typesupport_introspection_c__Compound_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Compound__rosidl_typesupport_introspection_c__Compound_message_type_support_handle = {
  0,
  &Compound__rosidl_typesupport_introspection_c__Compound_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosidl_typesupport_microxrcedds_test_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosidl_typesupport_microxrcedds_test_msg, msg, Compound)() {
  Compound__rosidl_typesupport_introspection_c__Compound_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosidl_typesupport_microxrcedds_test_msg, msg, Primitive)();
  Compound__rosidl_typesupport_introspection_c__Compound_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosidl_typesupport_microxrcedds_test_msg, msg, BasicPrimitive)();
  if (!Compound__rosidl_typesupport_introspection_c__Compound_message_type_support_handle.typesupport_identifier) {
    Compound__rosidl_typesupport_introspection_c__Compound_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Compound__rosidl_typesupport_introspection_c__Compound_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
