// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from example_interfaces:msg/MultiArrayLayout.idl
// generated code does not contain a copyright notice
#include "example_interfaces/msg/detail/multi_array_layout__rosidl_typesupport_fastrtps_cpp.hpp"
#include "example_interfaces/msg/detail/multi_array_layout__struct.hpp"

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
namespace example_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const example_interfaces::msg::MultiArrayDimension &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  example_interfaces::msg::MultiArrayDimension &);
size_t get_serialized_size(
  const example_interfaces::msg::MultiArrayDimension &,
  size_t current_alignment);
size_t
max_serialized_size_MultiArrayDimension(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace example_interfaces


namespace example_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
cdr_serialize(
  const example_interfaces::msg::MultiArrayLayout & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: dim
  {
    size_t size = ros_message.dim.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      example_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.dim[i],
        cdr);
    }
  }
  // Member: data_offset
  cdr << ros_message.data_offset;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  example_interfaces::msg::MultiArrayLayout & ros_message)
{
  // Member: dim
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.dim.resize(size);
    for (size_t i = 0; i < size; i++) {
      example_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.dim[i]);
    }
  }

  // Member: data_offset
  cdr >> ros_message.data_offset;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
get_serialized_size(
  const example_interfaces::msg::MultiArrayLayout & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: dim
  {
    size_t array_size = ros_message.dim.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        example_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.dim[index], current_alignment);
    }
  }
  // Member: data_offset
  {
    size_t item_size = sizeof(ros_message.data_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_example_interfaces
max_serialized_size_MultiArrayLayout(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: dim
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        example_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_MultiArrayDimension(
        full_bounded, current_alignment);
    }
  }

  // Member: data_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _MultiArrayLayout__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const example_interfaces::msg::MultiArrayLayout *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MultiArrayLayout__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<example_interfaces::msg::MultiArrayLayout *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MultiArrayLayout__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const example_interfaces::msg::MultiArrayLayout *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MultiArrayLayout__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MultiArrayLayout(full_bounded, 0);
}

static message_type_support_callbacks_t _MultiArrayLayout__callbacks = {
  "example_interfaces::msg",
  "MultiArrayLayout",
  _MultiArrayLayout__cdr_serialize,
  _MultiArrayLayout__cdr_deserialize,
  _MultiArrayLayout__get_serialized_size,
  _MultiArrayLayout__max_serialized_size
};

static rosidl_message_type_support_t _MultiArrayLayout__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MultiArrayLayout__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace example_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_example_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<example_interfaces::msg::MultiArrayLayout>()
{
  return &example_interfaces::msg::typesupport_fastrtps_cpp::_MultiArrayLayout__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, example_interfaces, msg, MultiArrayLayout)() {
  return &example_interfaces::msg::typesupport_fastrtps_cpp::_MultiArrayLayout__handle;
}

#ifdef __cplusplus
}
#endif
