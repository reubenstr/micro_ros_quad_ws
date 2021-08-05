// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from quad_interfaces:msg/MotionServos.idl
// generated code does not contain a copyright notice
#include "quad_interfaces/msg/detail/motion_servos__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "quad_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "quad_interfaces/msg/detail/motion_servos__struct.h"
#include "quad_interfaces/msg/detail/motion_servos__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _MotionServos__ros_msg_type = quad_interfaces__msg__MotionServos;

static bool _MotionServos__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionServos__ros_msg_type * ros_message = static_cast<const _MotionServos__ros_msg_type *>(untyped_ros_message);
  // Field name: enable
  {
    size_t size = 12;
    auto array_ptr = ros_message->enable;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: angle
  {
    size_t size = 12;
    auto array_ptr = ros_message->angle;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _MotionServos__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionServos__ros_msg_type * ros_message = static_cast<_MotionServos__ros_msg_type *>(untyped_ros_message);
  // Field name: enable
  {
    size_t size = 12;
    auto array_ptr = ros_message->enable;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: angle
  {
    size_t size = 12;
    auto array_ptr = ros_message->angle;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quad_interfaces
size_t get_serialized_size_quad_interfaces__msg__MotionServos(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionServos__ros_msg_type * ros_message = static_cast<const _MotionServos__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name enable
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->enable;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->angle;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotionServos__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_quad_interfaces__msg__MotionServos(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quad_interfaces
size_t max_serialized_size_quad_interfaces__msg__MotionServos(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: enable
  {
    size_t array_size = 12;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: angle
  {
    size_t array_size = 12;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MotionServos__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_quad_interfaces__msg__MotionServos(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotionServos = {
  "quad_interfaces::msg",
  "MotionServos",
  _MotionServos__cdr_serialize,
  _MotionServos__cdr_deserialize,
  _MotionServos__get_serialized_size,
  _MotionServos__max_serialized_size
};

static rosidl_message_type_support_t _MotionServos__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionServos,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quad_interfaces, msg, MotionServos)() {
  return &_MotionServos__type_support;
}

#if defined(__cplusplus)
}
#endif
