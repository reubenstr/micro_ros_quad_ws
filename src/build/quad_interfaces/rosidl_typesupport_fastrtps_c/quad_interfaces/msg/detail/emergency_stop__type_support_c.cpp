// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from quad_interfaces:msg/EmergencyStop.idl
// generated code does not contain a copyright notice
#include "quad_interfaces/msg/detail/emergency_stop__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "quad_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "quad_interfaces/msg/detail/emergency_stop__struct.h"
#include "quad_interfaces/msg/detail/emergency_stop__functions.h"
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


using _EmergencyStop__ros_msg_type = quad_interfaces__msg__EmergencyStop;

static bool _EmergencyStop__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EmergencyStop__ros_msg_type * ros_message = static_cast<const _EmergencyStop__ros_msg_type *>(untyped_ros_message);
  // Field name: emergency_stop
  {
    cdr << (ros_message->emergency_stop ? true : false);
  }

  return true;
}

static bool _EmergencyStop__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EmergencyStop__ros_msg_type * ros_message = static_cast<_EmergencyStop__ros_msg_type *>(untyped_ros_message);
  // Field name: emergency_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->emergency_stop = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quad_interfaces
size_t get_serialized_size_quad_interfaces__msg__EmergencyStop(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EmergencyStop__ros_msg_type * ros_message = static_cast<const _EmergencyStop__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name emergency_stop
  {
    size_t item_size = sizeof(ros_message->emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EmergencyStop__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_quad_interfaces__msg__EmergencyStop(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_quad_interfaces
size_t max_serialized_size_quad_interfaces__msg__EmergencyStop(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: emergency_stop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EmergencyStop__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_quad_interfaces__msg__EmergencyStop(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EmergencyStop = {
  "quad_interfaces::msg",
  "EmergencyStop",
  _EmergencyStop__cdr_serialize,
  _EmergencyStop__cdr_deserialize,
  _EmergencyStop__get_serialized_size,
  _EmergencyStop__max_serialized_size
};

static rosidl_message_type_support_t _EmergencyStop__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EmergencyStop,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, quad_interfaces, msg, EmergencyStop)() {
  return &_EmergencyStop__type_support;
}

#if defined(__cplusplus)
}
#endif
