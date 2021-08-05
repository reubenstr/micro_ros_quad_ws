// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from quad_interfaces:msg/MotionServos.idl
// generated code does not contain a copyright notice
#include "quad_interfaces/msg/detail/motion_servos__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_c/deserialize_buffer_utility.h"
#include "quad_interfaces/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "quad_interfaces/msg/detail/motion_servos__struct.h"
#include "quad_interfaces/msg/detail/motion_servos__functions.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


typedef quad_interfaces__msg__MotionServos _MotionServos__ros_msg_type;

static bool _MotionServos__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  (void) untyped_ros_message;
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }

  _MotionServos__ros_msg_type * ros_message = (_MotionServos__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: enable
  {
    const size_t size = 12;
    rv = ucdr_serialize_array_bool(cdr, ros_message->enable, size);
  }
  // Member: angle
  {
    const size_t size = 12;
    rv = ucdr_serialize_array_float(cdr, ros_message->angle, size);
  }

  return rv;
}

static bool _MotionServos__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionServos__ros_msg_type * ros_message = (_MotionServos__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: enable
  {
    const size_t size = 12;
    rv = ucdr_deserialize_array_bool(cdr, ros_message->enable, size);
  }
  // Field name: angle
  {
    const size_t size = 12;
    rv = ucdr_deserialize_array_float(cdr, ros_message->angle, size);
  }
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_quad_interfaces
size_t get_serialized_size_quad_interfaces__msg__MotionServos(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return 0;
  }

  const _MotionServos__ros_msg_type * ros_message = (const _MotionServos__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: enable
  {
    const size_t array_size = 12;
    const size_t item_size = sizeof(ros_message->enable[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: angle
  {
    const size_t array_size = 12;
    const size_t item_size = sizeof(ros_message->angle[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotionServos__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_quad_interfaces__msg__MotionServos(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_quad_interfaces
size_t max_serialized_size_quad_interfaces__msg__MotionServos(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: enable
  {
    const size_t array_size = 12;
    current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + (array_size * sizeof(bool));
  }
  // Member: angle
  {
    const size_t array_size = 12;
    current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + (array_size * sizeof(float));
  }

  return current_alignment - initial_alignment;
}

static size_t _MotionServos__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_quad_interfaces__msg__MotionServos(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_MotionServos = {
  "quad_interfaces::msg",
  "MotionServos",
  _MotionServos__cdr_serialize,
  _MotionServos__cdr_deserialize,
  _MotionServos__get_serialized_size,
  get_serialized_size_quad_interfaces__msg__MotionServos,
  _MotionServos__max_serialized_size
};

static rosidl_message_type_support_t _MotionServos__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_MotionServos,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, quad_interfaces, msg, MotionServos)() {
  return &_MotionServos__type_support;
}

#if defined(__cplusplus)
}
#endif
