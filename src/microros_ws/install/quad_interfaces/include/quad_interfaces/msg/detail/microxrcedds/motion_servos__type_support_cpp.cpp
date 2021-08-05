// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from quad_interfaces:msg/MotionServos.idl
// generated code does not contain a copyright notice
#include "quad_interfaces/msg/detail/motion_servos__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "quad_interfaces/msg/detail/motion_servos__struct.hpp"

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

namespace quad_interfaces
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_quad_interfaces
cdr_serialize(
  const quad_interfaces::msg::MotionServos & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: enable
  {
    size_t size = ros_message.enable.size();
    rv = ucdr_serialize_array_bool(cdr, ros_message.enable.data(), size);
  }
  // Member: angle
  {
    size_t size = ros_message.angle.size();
    rv = ucdr_serialize_array_float(cdr, ros_message.angle.data(), size);
  }

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_quad_interfaces
cdr_deserialize(
  ucdrBuffer * cdr,
  quad_interfaces::msg::MotionServos & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: enable
  {
    const size_t size = ros_message.enable.size();
    rv = ucdr_deserialize_array_bool(cdr, ros_message.enable.data(), size);
  }
  // Member: angle
  {
    const size_t size = ros_message.angle.size();
    rv = ucdr_deserialize_array_float(cdr, ros_message.angle.data(), size);
  }

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_quad_interfaces
get_serialized_size(
  const quad_interfaces::msg::MotionServos & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: enable
  {
    const size_t array_size = 12;
    const size_t item_size = sizeof(ros_message.enable[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }
  // Member: angle
  {
    const size_t array_size = 12;
    const size_t item_size = sizeof(ros_message.angle[0]);
    current_alignment += ucdr_alignment(current_alignment, item_size) + (array_size * item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_quad_interfaces
max_serialized_size_MotionServos(
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

static bool _MotionServos__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const quad_interfaces::msg::MotionServos *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotionServos__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<quad_interfaces::msg::MotionServos *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotionServos__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const quad_interfaces::msg::MotionServos *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotionServos__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const quad_interfaces::msg::MotionServos *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _MotionServos__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_MotionServos(&full_bounded, 0);
}

static message_type_support_callbacks_t _MotionServos__callbacks = {
  "quad_interfaces::msg",
  "MotionServos",
  _MotionServos__cdr_serialize,
  _MotionServos__cdr_deserialize,
  _MotionServos__get_serialized_size,
  _MotionServos__get_serialized_size_with_initial_alignment,
  _MotionServos__max_serialized_size
};

static rosidl_message_type_support_t _MotionServos__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_MotionServos__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_microxrcedds_cpp

}  // namespace msg

}  // namespace quad_interfaces

namespace rosidl_typesupport_microxrcedds_cpp
{

template<>
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_EXPORT_quad_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<quad_interfaces::msg::MotionServos>()
{
  return &quad_interfaces::msg::typesupport_microxrcedds_cpp::_MotionServos__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, quad_interfaces, msg, MotionServos)() {
  return &quad_interfaces::msg::typesupport_microxrcedds_cpp::_MotionServos__handle;
}

#ifdef __cplusplus
}
#endif
