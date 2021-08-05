// generated from rosidl_typesupport_microxrcedds_c/resource/idl__type_support_c.c.em
// with input from drive_base_msgs:msg/BaseInfo.idl
// generated code does not contain a copyright notice
#include "drive_base_msgs/msg/detail/base_info__rosidl_typesupport_microxrcedds_c.h"


#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "rosidl_typesupport_microxrcedds_c/identifier.h"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_c/deserialize_buffer_utility.h"
#include "drive_base_msgs/msg/rosidl_typesupport_microxrcedds_c__visibility_control.h"
#include "drive_base_msgs/msg/detail/base_info__struct.h"
#include "drive_base_msgs/msg/detail/base_info__functions.h"

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


typedef drive_base_msgs__msg__BaseInfo _BaseInfo__ros_msg_type;

static bool _BaseInfo__cdr_serialize(
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

  _BaseInfo__ros_msg_type * ros_message = (_BaseInfo__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Member: hw_id
  rv = ucdr_serialize_uint32_t(cdr, ros_message->hw_id);
  // Member: hw_timestamp
  rv = ucdr_serialize_uint32_t(cdr, ros_message->hw_timestamp);
  // Member: stamp
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_serialize(&ros_message->stamp, cdr);
  // Member: x
  rv = ucdr_serialize_float(cdr, ros_message->x);
  // Member: y
  rv = ucdr_serialize_float(cdr, ros_message->y);
  // Member: orientation
  rv = ucdr_serialize_float(cdr, ros_message->orientation);
  // Member: forward_velocity
  rv = ucdr_serialize_float(cdr, ros_message->forward_velocity);
  // Member: rotational_velocity
  rv = ucdr_serialize_float(cdr, ros_message->rotational_velocity);
  // Member: battery_voltage_pct
  rv = ucdr_serialize_uint8_t(cdr, ros_message->battery_voltage_pct);
  // Member: power_supply
  rv = ucdr_serialize_uint8_t(cdr, ros_message->power_supply);
  // Member: overcurrent
  rv = ucdr_serialize_bool(cdr, ros_message->overcurrent);
  // Member: blocked
  rv = ucdr_serialize_bool(cdr, ros_message->blocked);
  // Member: in_collision
  rv = ucdr_serialize_bool(cdr, ros_message->in_collision);
  // Member: at_cliff
  rv = ucdr_serialize_bool(cdr, ros_message->at_cliff);
  // Member: safety_state
  rv = ucdr_serialize_uint16_t(cdr, ros_message->safety_state);

  return rv;
}

static bool _BaseInfo__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  (void) cdr;

  bool rv = false;

  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BaseInfo__ros_msg_type * ros_message = (_BaseInfo__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  // Field name: hw_id
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->hw_id);
  // Field name: hw_timestamp
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message->hw_timestamp);
  // Field name: stamp
  rv = ((const message_type_support_callbacks_t *)(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, builtin_interfaces, msg, Time
      )()->data))->cdr_deserialize(cdr, &ros_message->stamp);
  // Field name: x
  rv = ucdr_deserialize_float(cdr, &ros_message->x);
  // Field name: y
  rv = ucdr_deserialize_float(cdr, &ros_message->y);
  // Field name: orientation
  rv = ucdr_deserialize_float(cdr, &ros_message->orientation);
  // Field name: forward_velocity
  rv = ucdr_deserialize_float(cdr, &ros_message->forward_velocity);
  // Field name: rotational_velocity
  rv = ucdr_deserialize_float(cdr, &ros_message->rotational_velocity);
  // Field name: battery_voltage_pct
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->battery_voltage_pct);
  // Field name: power_supply
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message->power_supply);
  // Field name: overcurrent
  rv = ucdr_deserialize_bool(cdr, &ros_message->overcurrent);
  // Field name: blocked
  rv = ucdr_deserialize_bool(cdr, &ros_message->blocked);
  // Field name: in_collision
  rv = ucdr_deserialize_bool(cdr, &ros_message->in_collision);
  // Field name: at_cliff
  rv = ucdr_deserialize_bool(cdr, &ros_message->at_cliff);
  // Field name: safety_state
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message->safety_state);
  return rv;
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_drive_base_msgs
size_t get_serialized_size_drive_base_msgs__msg__BaseInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return 0;
  }

  const _BaseInfo__ros_msg_type * ros_message = (const _BaseInfo__ros_msg_type *)(untyped_ros_message);
  (void)ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: hw_id
  {
    const size_t item_size = sizeof(ros_message->hw_id);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: hw_timestamp
  {
    const size_t item_size = sizeof(ros_message->hw_timestamp);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: stamp
  current_alignment +=
    get_serialized_size_builtin_interfaces__msg__Time(&ros_message->stamp, current_alignment);
  // Member: x
  {
    const size_t item_size = sizeof(ros_message->x);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: y
  {
    const size_t item_size = sizeof(ros_message->y);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: orientation
  {
    const size_t item_size = sizeof(ros_message->orientation);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: forward_velocity
  {
    const size_t item_size = sizeof(ros_message->forward_velocity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: rotational_velocity
  {
    const size_t item_size = sizeof(ros_message->rotational_velocity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: battery_voltage_pct
  {
    const size_t item_size = sizeof(ros_message->battery_voltage_pct);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: power_supply
  {
    const size_t item_size = sizeof(ros_message->power_supply);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: overcurrent
  {
    const size_t item_size = sizeof(ros_message->overcurrent);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: blocked
  {
    const size_t item_size = sizeof(ros_message->blocked);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: in_collision
  {
    const size_t item_size = sizeof(ros_message->in_collision);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: at_cliff
  {
    const size_t item_size = sizeof(ros_message->at_cliff);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: safety_state
  {
    const size_t item_size = sizeof(ros_message->safety_state);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BaseInfo__get_serialized_size(const void * untyped_ros_message)
{
  return (uint32_t)(
    get_serialized_size_drive_base_msgs__msg__BaseInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_drive_base_msgs
size_t max_serialized_size_drive_base_msgs__msg__BaseInfo(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: hw_id
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: hw_timestamp
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint32_t)) + sizeof(uint32_t);
  // Member: stamp
  current_alignment +=
    max_serialized_size_builtin_interfaces__msg__Time(full_bounded, current_alignment);
  // Member: x
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: y
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: orientation
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: forward_velocity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: rotational_velocity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: battery_voltage_pct
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: power_supply
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint8_t)) + sizeof(uint8_t);
  // Member: overcurrent
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: blocked
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: in_collision
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: at_cliff
  current_alignment += ucdr_alignment(current_alignment, sizeof(bool)) + sizeof(bool);
  // Member: safety_state
  current_alignment += ucdr_alignment(current_alignment, sizeof(uint16_t)) + sizeof(uint16_t);

  return current_alignment - initial_alignment;
}

static size_t _BaseInfo__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_drive_base_msgs__msg__BaseInfo(&full_bounded, 0);
}

static message_type_support_callbacks_t __callbacks_BaseInfo = {
  "drive_base_msgs::msg",
  "BaseInfo",
  _BaseInfo__cdr_serialize,
  _BaseInfo__cdr_deserialize,
  _BaseInfo__get_serialized_size,
  get_serialized_size_drive_base_msgs__msg__BaseInfo,
  _BaseInfo__max_serialized_size
};

static rosidl_message_type_support_t _BaseInfo__type_support = {
  ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__IDENTIFIER_VALUE,
  &__callbacks_BaseInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_c, drive_base_msgs, msg, BaseInfo)() {
  return &_BaseInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
