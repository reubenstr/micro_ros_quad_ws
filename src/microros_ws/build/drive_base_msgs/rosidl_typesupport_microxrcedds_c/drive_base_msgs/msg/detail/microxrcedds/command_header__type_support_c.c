// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from drive_base_msgs:msg/CommandHeader.idl
// generated code does not contain a copyright notice
#include "drive_base_msgs/msg/detail/command_header__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_c/deserialize_buffer_utility.h"
#include "drive_base_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "drive_base_msgs/msg/detail/command_header__struct.h"
#include "drive_base_msgs/msg/detail/command_header__functions.h"

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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_drive_base_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_drive_base_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool * full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_drive_base_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time)();


typedef drive_base_msgs__msg__CommandHeader _CommandHeader__ros_msg_type;

static bool _CommandHeader__cdr_serialize(
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

  _CommandHeader__ros_msg_type * ros_message = (_CommandHeader__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: stamp
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_serialize(&ros_message->stamp, cdr);
  // Member: command_id
  rv = ucdr_serialize_uint32_t(cdr, ros_message->command_id);
  // Member: expected_period
  rv = ucdr_serialize_uint16_t(cdr, ros_message->expected_period);

  return rv;
}

static bool _CommandHeader__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CommandHeader__ros_msg_type * ros_message = (_CommandHeader__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: stamp
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_deserialize(cdr, &ros_message->stamp);
  // Field name: command_id
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->command_id);
  // Field name: expected_period
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message->expected_period);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_drive_base_msgs
size_t get_serialized_size_drive_base_msgs__msg__CommandHeader(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return 0;
  }

  const _CommandHeader__ros_msg_type * ros_message = (const _CommandHeader__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: stamp
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Time(&ros_message->stamp, current_alignment);
  // Member: command_id
  {
    const size_t item_size = sizeof(ros_message->command_id);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: expected_period
  {
    const size_t item_size = sizeof(ros_message->expected_period);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CommandHeader__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_drive_base_msgs__msg__CommandHeader(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_drive_base_msgs
size_t max_serialized_size_drive_base_msgs__msg__CommandHeader(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: stamp
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Time(full_bounded, current_alignment);
  // Member: command_id
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: expected_period
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);

  return current_alignment - initial_alignment;
}

static size_t _CommandHeader__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_drive_base_msgs__msg__CommandHeader(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_CommandHeader = {
  "drive_base_msgs::msg",
  "CommandHeader",
  _CommandHeader__cdr_serialize,
  _CommandHeader__cdr_deserialize,
  _CommandHeader__get_serialized_size,
  get_serialized_size_drive_base_msgs__msg__CommandHeader,
  _CommandHeader__max_serialized_size
};

static rosidl_message_type_support_t _CommandHeader__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_CommandHeader,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, drive_base_msgs, msg, CommandHeader)() {
  return &_CommandHeader__type_support;
}

#if defined(__cplusplus)
}
#endif
