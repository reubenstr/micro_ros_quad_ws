// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from drive_base_msgs:msg/BaseInfo.idl
// generated code does not contain a copyright notice
#include "drive_base_msgs/msg/detail/base_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "drive_base_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "drive_base_msgs/msg/detail/base_info__struct.h"
#include "drive_base_msgs/msg/detail/base_info__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_drive_base_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_drive_base_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_drive_base_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _BaseInfo__ros_msg_type = drive_base_msgs__msg__BaseInfo;

static bool _BaseInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BaseInfo__ros_msg_type * ros_message = static_cast<const _BaseInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: hw_id
  {
    cdr << ros_message->hw_id;
  }

  // Field name: hw_timestamp
  {
    cdr << ros_message->hw_timestamp;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: orientation
  {
    cdr << ros_message->orientation;
  }

  // Field name: forward_velocity
  {
    cdr << ros_message->forward_velocity;
  }

  // Field name: rotational_velocity
  {
    cdr << ros_message->rotational_velocity;
  }

  // Field name: battery_voltage_pct
  {
    cdr << ros_message->battery_voltage_pct;
  }

  // Field name: power_supply
  {
    cdr << ros_message->power_supply;
  }

  // Field name: overcurrent
  {
    cdr << (ros_message->overcurrent ? true : false);
  }

  // Field name: blocked
  {
    cdr << (ros_message->blocked ? true : false);
  }

  // Field name: in_collision
  {
    cdr << (ros_message->in_collision ? true : false);
  }

  // Field name: at_cliff
  {
    cdr << (ros_message->at_cliff ? true : false);
  }

  // Field name: safety_state
  {
    cdr << ros_message->safety_state;
  }

  return true;
}

static bool _BaseInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BaseInfo__ros_msg_type * ros_message = static_cast<_BaseInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: hw_id
  {
    cdr >> ros_message->hw_id;
  }

  // Field name: hw_timestamp
  {
    cdr >> ros_message->hw_timestamp;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: orientation
  {
    cdr >> ros_message->orientation;
  }

  // Field name: forward_velocity
  {
    cdr >> ros_message->forward_velocity;
  }

  // Field name: rotational_velocity
  {
    cdr >> ros_message->rotational_velocity;
  }

  // Field name: battery_voltage_pct
  {
    cdr >> ros_message->battery_voltage_pct;
  }

  // Field name: power_supply
  {
    cdr >> ros_message->power_supply;
  }

  // Field name: overcurrent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->overcurrent = tmp ? true : false;
  }

  // Field name: blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->blocked = tmp ? true : false;
  }

  // Field name: in_collision
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->in_collision = tmp ? true : false;
  }

  // Field name: at_cliff
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->at_cliff = tmp ? true : false;
  }

  // Field name: safety_state
  {
    cdr >> ros_message->safety_state;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drive_base_msgs
size_t get_serialized_size_drive_base_msgs__msg__BaseInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BaseInfo__ros_msg_type * ros_message = static_cast<const _BaseInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name hw_id
  {
    size_t item_size = sizeof(ros_message->hw_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hw_timestamp
  {
    size_t item_size = sizeof(ros_message->hw_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name orientation
  {
    size_t item_size = sizeof(ros_message->orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name forward_velocity
  {
    size_t item_size = sizeof(ros_message->forward_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotational_velocity
  {
    size_t item_size = sizeof(ros_message->rotational_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_voltage_pct
  {
    size_t item_size = sizeof(ros_message->battery_voltage_pct);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_supply
  {
    size_t item_size = sizeof(ros_message->power_supply);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name overcurrent
  {
    size_t item_size = sizeof(ros_message->overcurrent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blocked
  {
    size_t item_size = sizeof(ros_message->blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name in_collision
  {
    size_t item_size = sizeof(ros_message->in_collision);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name at_cliff
  {
    size_t item_size = sizeof(ros_message->at_cliff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name safety_state
  {
    size_t item_size = sizeof(ros_message->safety_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BaseInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_drive_base_msgs__msg__BaseInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_drive_base_msgs
size_t max_serialized_size_drive_base_msgs__msg__BaseInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: hw_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hw_timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: orientation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: forward_velocity
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
  // member: battery_voltage_pct
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_supply
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: overcurrent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: in_collision
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: at_cliff
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: safety_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BaseInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_drive_base_msgs__msg__BaseInfo(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BaseInfo = {
  "drive_base_msgs::msg",
  "BaseInfo",
  _BaseInfo__cdr_serialize,
  _BaseInfo__cdr_deserialize,
  _BaseInfo__get_serialized_size,
  _BaseInfo__max_serialized_size
};

static rosidl_message_type_support_t _BaseInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BaseInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, drive_base_msgs, msg, BaseInfo)() {
  return &_BaseInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
