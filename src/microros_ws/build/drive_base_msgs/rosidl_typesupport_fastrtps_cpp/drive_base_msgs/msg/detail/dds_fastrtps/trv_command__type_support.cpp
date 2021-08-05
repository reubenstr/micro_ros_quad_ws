// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from drive_base_msgs:msg/TRVCommand.idl
// generated code does not contain a copyright notice
#include "drive_base_msgs/msg/detail/trv_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "drive_base_msgs/msg/detail/trv_command__struct.hpp"

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
  const drive_base_msgs::msg::TRVCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  drive_base_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: translational_velocity
  cdr << ros_message.translational_velocity;
  // Member: rotational_velocity
  cdr << ros_message.rotational_velocity;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  drive_base_msgs::msg::TRVCommand & ros_message)
{
  // Member: header
  drive_base_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: translational_velocity
  cdr >> ros_message.translational_velocity;

  // Member: rotational_velocity
  cdr >> ros_message.rotational_velocity;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
get_serialized_size(
  const drive_base_msgs::msg::TRVCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    drive_base_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: translational_velocity
  {
    size_t item_size = sizeof(ros_message.translational_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rotational_velocity
  {
    size_t item_size = sizeof(ros_message.rotational_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
max_serialized_size_TRVCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        drive_base_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CommandHeader(
        full_bounded, current_alignment);
    }
  }

  // Member: translational_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rotational_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _TRVCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const drive_base_msgs::msg::TRVCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TRVCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
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

static size_t _TRVCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TRVCommand(full_bounded, 0);
}

static message_type_support_callbacks_t _TRVCommand__callbacks = {
  "drive_base_msgs::msg",
  "TRVCommand",
  _TRVCommand__cdr_serialize,
  _TRVCommand__cdr_deserialize,
  _TRVCommand__get_serialized_size,
  _TRVCommand__max_serialized_size
};

static rosidl_message_type_support_t _TRVCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TRVCommand__callbacks,
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
get_message_type_support_handle<drive_base_msgs::msg::TRVCommand>()
{
  return &drive_base_msgs::msg::typesupport_fastrtps_cpp::_TRVCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drive_base_msgs, msg, TRVCommand)() {
  return &drive_base_msgs::msg::typesupport_fastrtps_cpp::_TRVCommand__handle;
}

#ifdef __cplusplus
}
#endif
