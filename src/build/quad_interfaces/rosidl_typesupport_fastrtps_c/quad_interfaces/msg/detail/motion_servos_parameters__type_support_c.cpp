// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from quad_interfaces:msg/MotionServosParameters.idl
// generated code does not contain a copyright notice
#include "quad_interfaces/msg/detail/motion_servos_parameters__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "quad_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "quad_interfaces/msg/detail/motion_servos_parameters__struct.h"
#include "quad_interfaces/msg/detail/motion_servos_parameters__functions.h"
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


using _MotionServosParameters__ros_msg_type = quad_interfaces__msg__MotionServosParameters;

static bool _MotionServosParameters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionServosParameters__ros_msg_type * ros_message = static_cast<const _MotionServosParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: pin
  {
    size_t size = 12;
    auto array_ptr = ros_message->pin;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: min_angle
  {
    size_t size = 12;
    auto array_ptr = ros_message->min_angle;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: max_angle
  {
    size_t size = 12;
    auto array_ptr = ros_message->max_angle;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: calibration_angle_offset
  {
    size_t size = 12;
    auto array_ptr = ros_message->calibration_angle_offset;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ms_per_degree
  {
    size_t size = 12;
    auto array_ptr = ros_message->ms_per_degree;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _MotionServosParameters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionServosParameters__ros_msg_type * ros_message = static_cast<_MotionServosParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: pin
  {
    size_t size = 12;
    auto array_ptr = ros_message->pin;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: min_angle
  {
    size_t size = 12;
    auto array_ptr = ros_message->min_angle;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: max_angle
  {
    size_t size = 12;
    auto array_ptr = ros_message->max_angle;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: calibration_angle_offset
  {
    size_t size = 12;
    auto array_ptr = ros_message->calibration_angle_offset;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ms_per_degree
  {
    size_t size = 12;
    auto array_ptr = ros_message->ms_per_degree;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quad_interfaces
size_t get_serialized_size_quad_interfaces__msg__MotionServosParameters(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionServosParameters__ros_msg_type * ros_message = static_cast<const _MotionServosParameters__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pin
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->pin;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_angle
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->min_angle;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_angle
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->max_angle;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name calibration_angle_offset
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->calibration_angle_offset;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ms_per_degree
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->ms_per_degree;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotionServosParameters__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_quad_interfaces__msg__MotionServosParameters(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quad_interfaces
size_t max_serialized_size_quad_interfaces__msg__MotionServosParameters(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: pin
  {
    size_t array_size = 12;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: min_angle
  {
    size_t array_size = 12;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_angle
  {
    size_t array_size = 12;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: calibration_angle_offset
  {
    size_t array_size = 12;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ms_per_degree
  {
    size_t array_size = 12;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MotionServosParameters__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_quad_interfaces__msg__MotionServosParameters(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotionServosParameters = {
  "quad_interfaces::msg",
  "MotionServosParameters",
  _MotionServosParameters__cdr_serialize,
  _MotionServosParameters__cdr_deserialize,
  _MotionServosParameters__get_serialized_size,
  _MotionServosParameters__max_serialized_size
};

static rosidl_message_type_support_t _MotionServosParameters__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionServosParameters,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quad_interfaces, msg, MotionServosParameters)() {
  return &_MotionServosParameters__type_support;
}

#if defined(__cplusplus)
}
#endif
