// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from shape_msgs:msg/SolidPrimitive.idl
// generated code does not contain a copyright notice
#include "shape_msgs/msg/detail/solid_primitive__rosidl_typesupport_fastrtps_cpp.hpp"
#include "shape_msgs/msg/detail/solid_primitive__struct.hpp"

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

namespace shape_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shape_msgs
cdr_serialize(
  const shape_msgs::msg::SolidPrimitive & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: type
  cdr << ros_message.type;
  // Member: dimensions
  {
    size_t size = ros_message.dimensions.size();
    if (size > 3) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.dimensions[i];
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shape_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  shape_msgs::msg::SolidPrimitive & ros_message)
{
  // Member: type
  cdr >> ros_message.type;

  // Member: dimensions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.dimensions.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.dimensions[i];
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shape_msgs
get_serialized_size(
  const shape_msgs::msg::SolidPrimitive & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dimensions
  {
    size_t array_size = ros_message.dimensions.size();
    if (array_size > 3) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.dimensions[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_shape_msgs
max_serialized_size_SolidPrimitive(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dimensions
  {
    size_t array_size = 3;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SolidPrimitive__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const shape_msgs::msg::SolidPrimitive *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SolidPrimitive__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<shape_msgs::msg::SolidPrimitive *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SolidPrimitive__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const shape_msgs::msg::SolidPrimitive *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SolidPrimitive__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SolidPrimitive(full_bounded, 0);
}

static message_type_support_callbacks_t _SolidPrimitive__callbacks = {
  "shape_msgs::msg",
  "SolidPrimitive",
  _SolidPrimitive__cdr_serialize,
  _SolidPrimitive__cdr_deserialize,
  _SolidPrimitive__get_serialized_size,
  _SolidPrimitive__max_serialized_size
};

static rosidl_message_type_support_t _SolidPrimitive__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SolidPrimitive__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace shape_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_shape_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<shape_msgs::msg::SolidPrimitive>()
{
  return &shape_msgs::msg::typesupport_fastrtps_cpp::_SolidPrimitive__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, shape_msgs, msg, SolidPrimitive)() {
  return &shape_msgs::msg::typesupport_fastrtps_cpp::_SolidPrimitive__handle;
}

#ifdef __cplusplus
}
#endif
