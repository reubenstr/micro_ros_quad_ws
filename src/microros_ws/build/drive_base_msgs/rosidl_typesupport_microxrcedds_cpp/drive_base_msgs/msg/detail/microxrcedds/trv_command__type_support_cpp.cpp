// generated from rosidl_typesupport_microxrcedds_cpp/resource/idl__type_support.cpp.em
// with input from drive_base_msgs:msg/TRVCommand.idl
// generated code does not contain a copyright notice
#include "drive_base_msgs/msg/detail/trv_command__rosidl_typesupport_microxrcedds_cpp.hpp"
#include "drive_base_msgs/msg/detail/trv_command__struct.hpp"

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
namespace drive_base_msgs
{
namespace msg
{
namespace typesupport_microxrcedds_cpp
{
bool cdr_serialize(
  const drive_base_msgs::msg::CommandHeader &,
  ucdrBuffer *);

bool cdr_deserialize(
  ucdrBuffer *,
  drive_base_msgs::msg::CommandHeader &);

size_t get_serialized_size(
  const drive_base_msgs::msg::CommandHeader &,
  size_t current_alignment);

size_t
max_serialized_size_CommandHeader(
  bool * full_bounded,
  size_t current_alignment);
}  // namespace typesupport_microxrcedds_cpp
}  // namespace msg
}  // namespace drive_base_msgs


namespace drive_base_msgs
{

namespace msg
{

namespace typesupport_microxrcedds_cpp
{

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_drive_base_msgs
cdr_serialize(
  const drive_base_msgs::msg::TRVCommand & ros_message,
  ucdrBuffer * cdr)
{
  (void) ros_message;
  (void) cdr;
  bool rv = false;

  // Member: header
  rv = drive_base_msgs::msg::typesupport_microxrcedds_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: translational_velocity
  rv = ucdr_serialize_float(cdr, ros_message.translational_velocity);
  // Member: rotational_velocity
  rv = ucdr_serialize_float(cdr, ros_message.rotational_velocity);

  return rv;
}

bool
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_drive_base_msgs
cdr_deserialize(
  ucdrBuffer * cdr,
  drive_base_msgs::msg::TRVCommand & ros_message)
{
  (void) cdr;
  (void) ros_message;
  bool rv = false;

  // Member: header
  rv = drive_base_msgs::msg::typesupport_microxrcedds_cpp::cdr_deserialize(
    cdr,
    ros_message.header);
  // Member: translational_velocity
  rv = ucdr_deserialize_float(cdr, &ros_message.translational_velocity);
  // Member: rotational_velocity
  rv = ucdr_deserialize_float(cdr, &ros_message.rotational_velocity);

  return rv;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_drive_base_msgs
get_serialized_size(
  const drive_base_msgs::msg::TRVCommand & ros_message,
  size_t current_alignment)
{
  (void) current_alignment;
  (void) ros_message;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += drive_base_msgs::msg::typesupport_microxrcedds_cpp::get_serialized_size(
    ros_message.header,
    current_alignment);
  // Member: translational_velocity
  {
    const size_t item_size = sizeof(ros_message.translational_velocity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }
  // Member: rotational_velocity
  {
    const size_t item_size = sizeof(ros_message.rotational_velocity);
    current_alignment += ucdr_alignment(current_alignment, item_size) + item_size;
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_MICROXRCEDDS_CPP_PUBLIC_drive_base_msgs
max_serialized_size_TRVCommand(
  bool * full_bounded,
  size_t current_alignment)
{
  (void) current_alignment;
  *full_bounded = true;

  const size_t initial_alignment = current_alignment;

  // Member: header
  current_alignment += drive_base_msgs::msg::typesupport_microxrcedds_cpp::max_serialized_size_CommandHeader(
    full_bounded,
    current_alignment);
  // Member: translational_velocity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);
  // Member: rotational_velocity
  current_alignment += ucdr_alignment(current_alignment, sizeof(float)) + sizeof(float);

  return current_alignment - initial_alignment;
}

static bool _TRVCommand__cdr_serialize(
  const void * untyped_ros_message,
  ucdrBuffer * cdr)
{
  auto typed_message =
    static_cast<const drive_base_msgs::msg::TRVCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TRVCommand__cdr_deserialize(
  ucdrBuffer * cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<drive_base_msgs::msg::TRVCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TRVCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const drive_base_msgs::msg::TRVCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TRVCommand__get_serialized_size_with_initial_alignment(
  const void * untyped_ros_message, size_t current_alignment)
{
  auto typed_message =
    static_cast<const drive_base_msgs::msg::TRVCommand *>(
    untyped_ros_message);
  return static_cast<size_t>(get_serialized_size(*typed_message, current_alignment));
}

static size_t _TRVCommand__max_serialized_size()
{
  bool full_bounded;
  return max_serialized_size_TRVCommand(&full_bounded, 0);
}

static message_type_support_callbacks_t _TRVCommand__callbacks = {
  "drive_base_msgs::msg",
  "TRVCommand",
  _TRVCommand__cdr_serialize,
  _TRVCommand__cdr_deserialize,
  _TRVCommand__get_serialized_size,
  _TRVCommand__get_serialized_size_with_initial_alignment,
  _TRVCommand__max_serialized_size
};

static rosidl_message_type_support_t _TRVCommand__handle = {
  rosidl_typesupport_microxrcedds_cpp::typesupport_identifier,
  &_TRVCommand__callbacks,
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
get_message_type_support_handle<drive_base_msgs::msg::TRVCommand>()
{
  return &drive_base_msgs::msg::typesupport_microxrcedds_cpp::_TRVCommand__handle;
}

}  // namespace rosidl_typesupport_microxrcedds_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_microxrcedds_cpp, drive_base_msgs, msg, TRVCommand)() {
  return &drive_base_msgs::msg::typesupport_microxrcedds_cpp::_TRVCommand__handle;
}

#ifdef __cplusplus
}
#endif
