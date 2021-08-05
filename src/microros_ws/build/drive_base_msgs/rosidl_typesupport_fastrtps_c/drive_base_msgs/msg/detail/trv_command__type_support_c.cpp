// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from drive_base_msgs:msg/TRVCommand.idl
// generated code does not contain a copyright notice
#include "drive_base_msgs/msg/detail/trv_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "drive_base_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "drive_base_msgs/msg/detail/trv_command__struct.h"
#include "drive_base_msgs/msg/detail/trv_command__functions.h"
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

#include "drive_base_msgs/msg/detail/command_header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_drive_base_msgs__msg__CommandHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_drive_base_msgs__msg__CommandHeader(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, drive_base_msgs, msg, CommandHeader)();


using _TRVCommand__ros_msg_type = drive_base_msgs__msg__TRVCommand;

static bool _TRVCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TRVCommand__ros_msg_type * ros_message = static_cast<const _TRVCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, drive_base_msgs, msg, CommandHeader
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: translational_velocity
  {
    cdr << ros_message->translational_velocity;
  }

  // Field name: rotational_velocity
  {
    cdr << ros_message->rotational_velocity;
  }

  return true;
}

static bool _TRVCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TRVCommand__ros_msg_type * ros_message = static_cast<_TRVCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, drive_base_msgs, msg, CommandHeader
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: translational_velocity
  {
    cdr >> ros_message->translational_velocity;
  }

  // Field name: rotational_velocity
  {
    cdr >> ros_message->rotational_velocity;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drive_base_msgs
size_t get_serialized_size_drive_base_msgs__msg__TRVCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TRVCommand__ros_msg_type * ros_message = static_cast<const _TRVCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_drive_base_msgs__msg__CommandHeader(
    &(ros_message->header), current_alignment);
  // field.name translational_velocity
  {
    size_t item_size = sizeof(ros_message->translational_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotational_velocity
  {
    size_t item_size = sizeof(ros_message->rotational_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TRVCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_drive_base_msgs__msg__TRVCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drive_base_msgs
size_t max_serialized_size_drive_base_msgs__msg__TRVCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_drive_base_msgs__msg__CommandHeader(
        full_bounded, current_alignment);
    }
  }
  // member: translational_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rotational_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TRVCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_drive_base_msgs__msg__TRVCommand(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TRVCommand = {
  "drive_base_msgs::msg",
  "TRVCommand",
  _TRVCommand__cdr_serialize,
  _TRVCommand__cdr_deserialize,
  _TRVCommand__get_serialized_size,
  _TRVCommand__max_serialized_size
};

static rosidl_message_type_support_t _TRVCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TRVCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, drive_base_msgs, msg, TRVCommand)() {
  return &_TRVCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
