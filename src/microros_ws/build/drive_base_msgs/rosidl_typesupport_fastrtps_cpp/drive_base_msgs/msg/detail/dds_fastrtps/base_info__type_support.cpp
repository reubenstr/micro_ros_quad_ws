// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from drive_base_msgs:msg/BaseInfo.idl
// generated code does not contain a copyright notice
#include "drive_base_msgs/msg/detail/base_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "drive_base_msgs/msg/detail/base_info__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
cdr_serialize(
  const drive_base_msgs::msg::BaseInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: hw_id
  cdr << ros_message.hw_id;
  // Member: hw_timestamp
  cdr << ros_message.hw_timestamp;
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: x
  cdr << ros_message.x;
  // Member: y
  cdr << ros_message.y;
  // Member: orientation
  cdr << ros_message.orientation;
  // Member: forward_velocity
  cdr << ros_message.forward_velocity;
  // Member: rotational_velocity
  cdr << ros_message.rotational_velocity;
  // Member: battery_voltage_pct
  cdr << ros_message.battery_voltage_pct;
  // Member: power_supply
  cdr << ros_message.power_supply;
  // Member: overcurrent
  cdr << (ros_message.overcurrent ? true : false);
  // Member: blocked
  cdr << (ros_message.blocked ? true : false);
  // Member: in_collision
  cdr << (ros_message.in_collision ? true : false);
  // Member: at_cliff
  cdr << (ros_message.at_cliff ? true : false);
  // Member: safety_state
  cdr << ros_message.safety_state;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  drive_base_msgs::msg::BaseInfo & ros_message)
{
  // Member: hw_id
  cdr >> ros_message.hw_id;

  // Member: hw_timestamp
  cdr >> ros_message.hw_timestamp;

  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: x
  cdr >> ros_message.x;

  // Member: y
  cdr >> ros_message.y;

  // Member: orientation
  cdr >> ros_message.orientation;

  // Member: forward_velocity
  cdr >> ros_message.forward_velocity;

  // Member: rotational_velocity
  cdr >> ros_message.rotational_velocity;

  // Member: battery_voltage_pct
  cdr >> ros_message.battery_voltage_pct;

  // Member: power_supply
  cdr >> ros_message.power_supply;

  // Member: overcurrent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.overcurrent = tmp ? true : false;
  }

  // Member: blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.blocked = tmp ? true : false;
  }

  // Member: in_collision
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.in_collision = tmp ? true : false;
  }

  // Member: at_cliff
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.at_cliff = tmp ? true : false;
  }

  // Member: safety_state
  cdr >> ros_message.safety_state;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
get_serialized_size(
  const drive_base_msgs::msg::BaseInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: hw_id
  {
    size_t item_size = sizeof(ros_message.hw_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hw_timestamp
  {
    size_t item_size = sizeof(ros_message.hw_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);
  // Member: x
  {
    size_t item_size = sizeof(ros_message.x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y
  {
    size_t item_size = sizeof(ros_message.y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: orientation
  {
    size_t item_size = sizeof(ros_message.orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: forward_velocity
  {
    size_t item_size = sizeof(ros_message.forward_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rotational_velocity
  {
    size_t item_size = sizeof(ros_message.rotational_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_voltage_pct
  {
    size_t item_size = sizeof(ros_message.battery_voltage_pct);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_supply
  {
    size_t item_size = sizeof(ros_message.power_supply);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: overcurrent
  {
    size_t item_size = sizeof(ros_message.overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blocked
  {
    size_t item_size = sizeof(ros_message.blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: in_collision
  {
    size_t item_size = sizeof(ros_message.in_collision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: at_cliff
  {
    size_t item_size = sizeof(ros_message.at_cliff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: safety_state
  {
    size_t item_size = sizeof(ros_message.safety_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_drive_base_msgs
max_serialized_size_BaseInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: hw_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hw_timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  // Member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: orientation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: forward_velocity
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

  // Member: battery_voltage_pct
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power_supply
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: overcurrent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: in_collision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: at_cliff
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: safety_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _BaseInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const drive_base_msgs::msg::BaseInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BaseInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
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

static size_t _BaseInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_BaseInfo(full_bounded, 0);
}

static message_type_support_callbacks_t _BaseInfo__callbacks = {
  "drive_base_msgs::msg",
  "BaseInfo",
  _BaseInfo__cdr_serialize,
  _BaseInfo__cdr_deserialize,
  _BaseInfo__get_serialized_size,
  _BaseInfo__max_serialized_size
};

static rosidl_message_type_support_t _BaseInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BaseInfo__callbacks,
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
get_message_type_support_handle<drive_base_msgs::msg::BaseInfo>()
{
  return &drive_base_msgs::msg::typesupport_fastrtps_cpp::_BaseInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, drive_base_msgs, msg, BaseInfo)() {
  return &drive_base_msgs::msg::typesupport_fastrtps_cpp::_BaseInfo__handle;
}

#ifdef __cplusplus
}
#endif
