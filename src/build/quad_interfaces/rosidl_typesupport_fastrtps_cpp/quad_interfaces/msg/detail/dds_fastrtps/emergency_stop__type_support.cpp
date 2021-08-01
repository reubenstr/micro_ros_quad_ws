// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from quad_interfaces:msg/EmergencyStop.idl
// generated code does not contain a copyright notice
#include "quad_interfaces/msg/detail/emergency_stop__rosidl_typesupport_fastrtps_cpp.hpp"
#include "quad_interfaces/msg/detail/emergency_stop__struct.hpp"

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
  const quad_interfaces::msg::EmergencyStop & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: emergency_stop
  cdr << (ros_message.emergency_stop ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quad_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  quad_interfaces::msg::EmergencyStop & ros_message)
{
  // Member: emergency_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.emergency_stop = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quad_interfaces
get_serialized_size(
  const quad_interfaces::msg::EmergencyStop & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: emergency_stop
  {
    size_t item_size = sizeof(ros_message.emergency_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_quad_interfaces
max_serialized_size_EmergencyStop(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: emergency_stop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _EmergencyStop__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const quad_interfaces::msg::EmergencyStop *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EmergencyStop__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<quad_interfaces::msg::EmergencyStop *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EmergencyStop__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const quad_interfaces::msg::EmergencyStop *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EmergencyStop__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_EmergencyStop(full_bounded, 0);
}

static message_type_support_callbacks_t _EmergencyStop__callbacks = {
  "quad_interfaces::msg",
  "EmergencyStop",
  _EmergencyStop__cdr_serialize,
  _EmergencyStop__cdr_deserialize,
  _EmergencyStop__get_serialized_size,
  _EmergencyStop__max_serialized_size
};

static rosidl_message_type_support_t _EmergencyStop__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EmergencyStop__callbacks,
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
get_message_type_support_handle<quad_interfaces::msg::EmergencyStop>()
{
  return &quad_interfaces::msg::typesupport_fastrtps_cpp::_EmergencyStop__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, quad_interfaces, msg, EmergencyStop)() {
  return &quad_interfaces::msg::typesupport_fastrtps_cpp::_EmergencyStop__handle;
}

#ifdef __cplusplus
}
#endif
