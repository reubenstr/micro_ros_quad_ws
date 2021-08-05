// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from drive_base_msgs:msg/CommandStatus.idl
// generated code does not contain a copyright notice
#include "drive_base_msgs/msg/detail/command_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "drive_base_msgs/msg/detail/command_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace drive_base_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const drive_base_msgs::msg::CommandHeader &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  drive_base_msgs::msg::CommandHeader &);
size_t get_serialized_size(
  const drive_base_msgs::msg::CommandHeader &,
  size_t current_alignment);
size_t
max_serialized_size_CommandHeader(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace drive_base_msgs


namespace drive_base_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
cdr_serialize(
  const drive_base_msgs::msg::CommandStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: cmd_header
  drive_base_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.cmd_header,
    cdr);
  // Member: status
  cdr << ros_message.status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  drive_base_msgs::msg::CommandStatus & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: cmd_header
  drive_base_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.cmd_header);

  // Member: status
  cdr >> ros_message.status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
get_serialized_size(
  const drive_base_msgs::msg::CommandStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);
  // Member: cmd_header

  current_alignment +=
    drive_base_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.cmd_header, current_alignment);
  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
max_serialized_size_CommandStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  // Member: cmd_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        drive_base_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CommandHeader(
        full_bounded, current_alignment);
    }
  }

  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _CommandStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const drive_base_msgs::msg::CommandStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CommandStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<drive_base_msgs::msg::CommandStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CommandStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const drive_base_msgs::msg::CommandStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CommandStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CommandStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _CommandStatus__callbacks = {
  "drive_base_msgs::msg",
  "CommandStatus",
  _CommandStatus__cdr_serialize,
  _CommandStatus__cdr_deserialize,
  _CommandStatus__get_serialized_size,
  _CommandStatus__max_serialized_size
};

static rosidl_message_type_support_t _CommandStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CommandStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace drive_base_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_drive_base_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<drive_base_msgs::msg::CommandStatus>()
{
  return &drive_base_msgs::msg::typesupport_fastrtps_cpp::_CommandStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drive_base_msgs, msg, CommandStatus)() {
  return &drive_base_msgs::msg::typesupport_fastrtps_cpp::_CommandStatus__handle;
}

#ifdef __cplusplus
}
#endif
