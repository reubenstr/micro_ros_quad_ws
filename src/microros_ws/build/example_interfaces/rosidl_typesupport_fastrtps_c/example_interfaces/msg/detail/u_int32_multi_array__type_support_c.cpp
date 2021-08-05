// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from example_interfaces:msg/UInt32MultiArray.idl
// generated code does not contain a copyright notice
#include "example_interfaces/msg/detail/u_int32_multi_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "example_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "example_interfaces/msg/detail/u_int32_multi_array__struct.h"
#include "example_interfaces/msg/detail/u_int32_multi_array__functions.h"
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

#include "example_interfaces/msg/detail/multi_array_layout__functions.h"  // layout
#include "rosidl_runtime_c/primitives_sequence.h"  // data
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // data

// forward declare type support functions
size_t get_serialized_size_example_interfaces__msg__MultiArrayLayout(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_example_interfaces__msg__MultiArrayLayout(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, msg, MultiArrayLayout)();


using _UInt32MultiArray__ros_msg_type = example_interfaces__msg__UInt32MultiArray;

static bool _UInt32MultiArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UInt32MultiArray__ros_msg_type * ros_message = static_cast<const _UInt32MultiArray__ros_msg_type *>(untyped_ros_message);
  // Field name: layout
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, example_interfaces, msg, MultiArrayLayout
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->layout, cdr))
    {
      return false;
    }
  }

  // Field name: data
  {
    size_t size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _UInt32MultiArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UInt32MultiArray__ros_msg_type * ros_message = static_cast<_UInt32MultiArray__ros_msg_type *>(untyped_ros_message);
  // Field name: layout
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, example_interfaces, msg, MultiArrayLayout
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->layout))
    {
      return false;
    }
  }

  // Field name: data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->data.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->data);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->data, size)) {
      return "failed to create array for field 'data'";
    }
    auto array_ptr = ros_message->data.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_example_interfaces
size_t get_serialized_size_example_interfaces__msg__UInt32MultiArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UInt32MultiArray__ros_msg_type * ros_message = static_cast<const _UInt32MultiArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name layout

  current_alignment += get_serialized_size_example_interfaces__msg__MultiArrayLayout(
    &(ros_message->layout), current_alignment);
  // field.name data
  {
    size_t array_size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _UInt32MultiArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_example_interfaces__msg__UInt32MultiArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_example_interfaces
size_t max_serialized_size_example_interfaces__msg__UInt32MultiArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: layout
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_example_interfaces__msg__MultiArrayLayout(
        full_bounded, current_alignment);
    }
  }
  // member: data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _UInt32MultiArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_example_interfaces__msg__UInt32MultiArray(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_UInt32MultiArray = {
  "example_interfaces::msg",
  "UInt32MultiArray",
  _UInt32MultiArray__cdr_serialize,
  _UInt32MultiArray__cdr_deserialize,
  _UInt32MultiArray__get_serialized_size,
  _UInt32MultiArray__max_serialized_size
};

static rosidl_message_type_support_t _UInt32MultiArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UInt32MultiArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, example_interfaces, msg, UInt32MultiArray)() {
  return &_UInt32MultiArray__type_support;
}

#if defined(__cplusplus)
}
#endif
