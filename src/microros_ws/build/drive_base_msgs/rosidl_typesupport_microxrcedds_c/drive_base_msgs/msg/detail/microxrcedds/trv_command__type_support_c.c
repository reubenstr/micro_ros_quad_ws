// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from drive_base_msgs:msg/TRVCommand.idl
// generated code does not contain a copyright notice
#include "drive_base_msgs/msg/detail/trv_command__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_c/deserialize_buffer_utility.h"
#include "drive_base_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "drive_base_msgs/msg/detail/trv_command__struct.h"
#include "drive_base_msgs/msg/detail/trv_command__functions.h"

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

#include "drive_base_msgs/msg/detail/command_header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_drive_base_msgs__msg__CommandHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_drive_base_msgs__msg__CommandHeader(
  bool * full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, drive_base_msgs, msg, CommandHeader)();


typedef drive_base_msgs__msg__TRVCommand _TRVCommand__ros_msg_type;

static bool _TRVCommand__cdr_serialize(
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

  _TRVCommand__ros_msg_type * ros_message = (_TRVCommand__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, drive_base_msgs, msg, CommandHeader
      )()->data))->cdr_serialize(&ros_message->header, cdr);
  // Member: translational_velocity
  rv = ucdr_serialize_float(cdr, ros_message->translational_velocity);
  // Member: rotational_velocity
  rv = ucdr_serialize_float(cdr, ros_message->rotational_velocity);

  return rv;
}

static bool _TRVCommand__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TRVCommand__ros_msg_type * ros_message = (_TRVCommand__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: header
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, drive_base_msgs, msg, CommandHeader
      )()->data))->cdr_deserialize(cdr, &ros_message->header);
  // Field name: translational_velocity
  rv = ucdr_deserialize_float(cdr, &ros_message->translational_velocity);
  // Field name: rotational_velocity
  rv = ucdr_deserialize_float(cdr, &ros_message->rotational_velocity);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_drive_base_msgs
size_t get_serialized_size_drive_base_msgs__msg__TRVCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return 0;
  }

  const _TRVCommand__ros_msg_type * ros_message = (const _TRVCommand__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    get_serialized_size_drive_base_msgs__msg__CommandHeader(&ros_message->header, current_alignment);
  // Member: translational_velocity
  {
    const size_t item_size = sizeof(ros_message->translational_velocity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: rotational_velocity
  {
    const size_t item_size = sizeof(ros_message->rotational_velocity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TRVCommand__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_drive_base_msgs__msg__TRVCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_drive_base_msgs
size_t max_serialized_size_drive_base_msgs__msg__TRVCommand(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment +=
    max_serialized_size_drive_base_msgs__msg__CommandHeader(full_bounded, current_alignment);
  // Member: translational_velocity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: rotational_velocity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static size_t _TRVCommand__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_drive_base_msgs__msg__TRVCommand(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_TRVCommand = {
  "drive_base_msgs::msg",
  "TRVCommand",
  _TRVCommand__cdr_serialize,
  _TRVCommand__cdr_deserialize,
  _TRVCommand__get_serialized_size,
  get_serialized_size_drive_base_msgs__msg__TRVCommand,
  _TRVCommand__max_serialized_size
};

static rosidl_message_type_support_t _TRVCommand__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_TRVCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, drive_base_msgs, msg, TRVCommand)() {
  return &_TRVCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
