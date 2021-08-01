// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from quad_interfaces:msg/MotionServosParameters.idl
// generated code does not contain a copyright notice
#include "quad_interfaces/msg/detail/motion_servos_parameters__rosidl_typesupport_fastrtps_cpp.hpp"
#include "quad_interfaces/msg/detail/motion_servos_parameters__struct.hpp"

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

namespace quad_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quad_interfaces
cdr_serialize(
  const quad_interfaces::msg::MotionServosParameters & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pin
  {
    cdr << ros_message.pin;
  }
  // Member: min_angle
  {
    cdr << ros_message.min_angle;
  }
  // Member: max_angle
  {
    cdr << ros_message.max_angle;
  }
  // Member: calibration_angle_offset
  {
    cdr << ros_message.calibration_angle_offset;
  }
  // Member: ms_per_degree
  {
    cdr << ros_message.ms_per_degree;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quad_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  quad_interfaces::msg::MotionServosParameters & ros_message)
{
  // Member: pin
  {
    cdr >> ros_message.pin;
  }

  // Member: min_angle
  {
    cdr >> ros_message.min_angle;
  }

  // Member: max_angle
  {
    cdr >> ros_message.max_angle;
  }

  // Member: calibration_angle_offset
  {
    cdr >> ros_message.calibration_angle_offset;
  }

  // Member: ms_per_degree
  {
    cdr >> ros_message.ms_per_degree;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quad_interfaces
get_serialized_size(
  const quad_interfaces::msg::MotionServosParameters & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pin
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.pin[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_angle
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.min_angle[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_angle
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.max_angle[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: calibration_angle_offset
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.calibration_angle_offset[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ms_per_degree
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.ms_per_degree[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quad_interfaces
max_serialized_size_MotionServosParameters(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: pin
  {
    size_t array_size = 12;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: min_angle
  {
    size_t array_size = 12;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_angle
  {
    size_t array_size = 12;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: calibration_angle_offset
  {
    size_t array_size = 12;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ms_per_degree
  {
    size_t array_size = 12;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _MotionServosParameters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const quad_interfaces::msg::MotionServosParameters *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotionServosParameters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<quad_interfaces::msg::MotionServosParameters *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotionServosParameters__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const quad_interfaces::msg::MotionServosParameters *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotionServosParameters__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MotionServosParameters(full_bounded, 0);
}

static message_type_support_callbacks_t _MotionServosParameters__callbacks = {
  "quad_interfaces::msg",
  "MotionServosParameters",
  _MotionServosParameters__cdr_serialize,
  _MotionServosParameters__cdr_deserialize,
  _MotionServosParameters__get_serialized_size,
  _MotionServosParameters__max_serialized_size
};

static rosidl_message_type_support_t _MotionServosParameters__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotionServosParameters__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace quad_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_quad_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<quad_interfaces::msg::MotionServosParameters>()
{
  return &quad_interfaces::msg::typesupport_fastrtps_cpp::_MotionServosParameters__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, quad_interfaces, msg, MotionServosParameters)() {
  return &quad_interfaces::msg::typesupport_fastrtps_cpp::_MotionServosParameters__handle;
}

#ifdef __cplusplus
}
#endif
