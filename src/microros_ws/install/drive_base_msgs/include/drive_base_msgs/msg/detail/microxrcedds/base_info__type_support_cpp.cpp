// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from drive_base_msgs:msg/BaseInfo.idl
// generated code does not contain a copyright notice
#include "drive_base_msgs/msg/detail/base_info__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "drive_base_msgs/msg/detail/base_info__struct.hpp"

#include <limits>
#include <algorithm>
#include <stdexcept>
#include <string>
#include <cstring>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_microxrcedds_cpp/identifier.hpp"
#include "rosidl_typesupport_microxrcedds_c/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_cpp/message_type_support_decl.hpp"
#include "ucdr/microcdr.h"

#define MICROXRCEDDS_PADDING sizeof(uint32_t)

// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  builtin_interfaces::msg::Time &);

size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);

size_t
max_serialized_size_Time(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace drive_base_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_drive_base_msgs
cdr_serialize(
  const drive_base_msgs::msg::BaseInfo & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: hw_id
  rv = ucdr_serialize_uint32_t(cdr, ros_message.hw_id);
  // Member: hw_timestamp
  rv = ucdr_serialize_uint32_t(cdr, ros_message.hw_timestamp);
  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: x
  rv = ucdr_serialize_float(cdr, ros_message.x);
  // Member: y
  rv = ucdr_serialize_float(cdr, ros_message.y);
  // Member: orientation
  rv = ucdr_serialize_float(cdr, ros_message.orientation);
  // Member: forward_velocity
  rv = ucdr_serialize_float(cdr, ros_message.forward_velocity);
  // Member: rotational_velocity
  rv = ucdr_serialize_float(cdr, ros_message.rotational_velocity);
  // Member: battery_voltage_pct
  rv = ucdr_serialize_uint8_t(cdr, ros_message.battery_voltage_pct);
  // Member: power_supply
  rv = ucdr_serialize_uint8_t(cdr, ros_message.power_supply);
  // Member: overcurrent
  rv = ucdr_serialize_bool(cdr, ros_message.overcurrent);
  // Member: blocked
  rv = ucdr_serialize_bool(cdr, ros_message.blocked);
  // Member: in_collision
  rv = ucdr_serialize_bool(cdr, ros_message.in_collision);
  // Member: at_cliff
  rv = ucdr_serialize_bool(cdr, ros_message.at_cliff);
  // Member: safety_state
  rv = ucdr_serialize_uint16_t(cdr, ros_message.safety_state);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_drive_base_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  drive_base_msgs::msg::BaseInfo & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: hw_id
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.hw_id);
  // Member: hw_timestamp
  rv = ucdr_deserialize_uint32_t(cdr, &ros_message.hw_timestamp);
  // Member: stamp
  rv = builtin_interfaces::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.stamp);
  // Member: x
  rv = ucdr_deserialize_float(cdr, &ros_message.x);
  // Member: y
  rv = ucdr_deserialize_float(cdr, &ros_message.y);
  // Member: orientation
  rv = ucdr_deserialize_float(cdr, &ros_message.orientation);
  // Member: forward_velocity
  rv = ucdr_deserialize_float(cdr, &ros_message.forward_velocity);
  // Member: rotational_velocity
  rv = ucdr_deserialize_float(cdr, &ros_message.rotational_velocity);
  // Member: battery_voltage_pct
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.battery_voltage_pct);
  // Member: power_supply
  rv = ucdr_deserialize_uint8_t(cdr, &ros_message.power_supply);
  // Member: overcurrent
  rv = ucdr_deserialize_bool(cdr, &ros_message.overcurrent);
  // Member: blocked
  rv = ucdr_deserialize_bool(cdr, &ros_message.blocked);
  // Member: in_collision
  rv = ucdr_deserialize_bool(cdr, &ros_message.in_collision);
  // Member: at_cliff
  rv = ucdr_deserialize_bool(cdr, &ros_message.at_cliff);
  // Member: safety_state
  rv = ucdr_deserialize_uint16_t(cdr, &ros_message.safety_state);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_drive_base_msgs
get_serialized_size(
  const drive_base_msgs::msg::BaseInfo & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: hw_id
  {
    const size_t item_size = sizeof(ros_message.hw_id);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: hw_timestamp
  {
    const size_t item_size = sizeof(ros_message.hw_timestamp);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: stamp
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.stamp,
    current_alignment);
  // Member: x
  {
    const size_t item_size = sizeof(ros_message.x);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: y
  {
    const size_t item_size = sizeof(ros_message.y);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: orientation
  {
    const size_t item_size = sizeof(ros_message.orientation);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: forward_velocity
  {
    const size_t item_size = sizeof(ros_message.forward_velocity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: rotational_velocity
  {
    const size_t item_size = sizeof(ros_message.rotational_velocity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: battery_voltage_pct
  {
    const size_t item_size = sizeof(ros_message.battery_voltage_pct);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: power_supply
  {
    const size_t item_size = sizeof(ros_message.power_supply);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: overcurrent
  {
    const size_t item_size = sizeof(ros_message.overcurrent);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: blocked
  {
    const size_t item_size = sizeof(ros_message.blocked);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: in_collision
  {
    const size_t item_size = sizeof(ros_message.in_collision);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: at_cliff
  {
    const size_t item_size = sizeof(ros_message.at_cliff);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: safety_state
  {
    const size_t item_size = sizeof(ros_message.safety_state);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_drive_base_msgs
max_serialized_size_BaseInfo(
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
  current_alignment += builtin_interfaces::msg::typesupport_microxrcedds_cpp::max_serialized_size_Time(
    full_bounded,
    current_alignment);
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

static bool _BaseInfo__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const drive_base_msgs::msg::BaseInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BaseInfo__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<drive_base_msgs::msg::BaseInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BaseInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const drive_base_msgs::msg::BaseInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BaseInfo__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const drive_base_msgs::msg::BaseInfo *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _BaseInfo__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_BaseInfo(&full_bounded, 0);
}

static message_type_support_callbacks_t _BaseInfo__callbacks = {
  "drive_base_msgs::msg",
  "BaseInfo",
  _BaseInfo__cdr_serialize,
  _BaseInfo__cdr_deserialize,
  _BaseInfo__get_serialized_size,
  _BaseInfo__get_serialized_size_with_initial_alignment,
  _BaseInfo__max_serialized_size
};

static rosidl_message_type_support_t _BaseInfo__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_BaseInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace drive_base_msgs

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_drive_base_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<drive_base_msgs::msg::BaseInfo>()
{
  return &drive_base_msgs::msg::typesupport_microxrcedds_cpp::_BaseInfo__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, drive_base_msgs, msg, BaseInfo)() {
  return &drive_base_msgs::msg::typesupport_microxrcedds_cpp::_BaseInfo__handle;
}

#ifdef __cplusplus
}
#endif
