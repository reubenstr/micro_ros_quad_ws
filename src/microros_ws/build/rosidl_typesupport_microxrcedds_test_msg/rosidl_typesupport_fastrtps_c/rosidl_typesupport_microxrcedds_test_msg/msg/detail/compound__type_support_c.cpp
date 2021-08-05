// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosidl_typesupport_microxrcedds_test_msg:msg/Compound.idl
// generated code does not contain a copyright notice
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__struct.h"
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/compound__functions.h"
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

#include "rosidl_runtime_c/string.h"  // string_data
#include "rosidl_runtime_c/string_functions.h"  // string_data
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/basic_primitive__functions.h"  // array_data
#include "rosidl_typesupport_microxrcedds_test_msg/msg/detail/primitive__functions.h"  // sequence_data

// forward declare type support functions
size_t get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosidl_typesupport_microxrcedds_test_msg, msg, BasicPrimitive)();
size_t get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Primitive(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Primitive(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosidl_typesupport_microxrcedds_test_msg, msg, Primitive)();


using _Compound__ros_msg_type = rosidl_typesupport_microxrcedds_test_msg__msg__Compound;

static bool _Compound__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Compound__ros_msg_type * ros_message = static_cast<const _Compound__ros_msg_type *>(untyped_ros_message);
  // Field name: string_data
  {
    const rosidl_runtime_c__String * str = &ros_message->string_data;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: sequence_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rosidl_typesupport_microxrcedds_test_msg, msg, Primitive
      )()->data);
    size_t size = ros_message->sequence_data.size;
    auto array_ptr = ros_message->sequence_data.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: array_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rosidl_typesupport_microxrcedds_test_msg, msg, BasicPrimitive
      )()->data);
    size_t size = 3;
    auto array_ptr = ros_message->array_data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _Compound__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Compound__ros_msg_type * ros_message = static_cast<_Compound__ros_msg_type *>(untyped_ros_message);
  // Field name: string_data
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->string_data.data) {
      rosidl_runtime_c__String__init(&ros_message->string_data);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->string_data,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'string_data'\n");
      return false;
    }
  }

  // Field name: sequence_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rosidl_typesupport_microxrcedds_test_msg, msg, Primitive
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sequence_data.data) {
      rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence__fini(&ros_message->sequence_data);
    }
    if (!rosidl_typesupport_microxrcedds_test_msg__msg__Primitive__Sequence__init(&ros_message->sequence_data, size)) {
      return "failed to create array for field 'sequence_data'";
    }
    auto array_ptr = ros_message->sequence_data.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: array_data
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, rosidl_typesupport_microxrcedds_test_msg, msg, BasicPrimitive
      )()->data);
    size_t size = 3;
    auto array_ptr = ros_message->array_data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Compound(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Compound__ros_msg_type * ros_message = static_cast<const _Compound__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name string_data
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string_data.size + 1);
  // field.name sequence_data
  {
    size_t array_size = ros_message->sequence_data.size;
    auto array_ptr = ros_message->sequence_data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Primitive(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name array_data
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->array_data;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Compound__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Compound(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_typesupport_microxrcedds_test_msg
size_t max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Compound(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: string_data
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: sequence_data
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Primitive(
        full_bounded, current_alignment);
    }
  }
  // member: array_data
  {
    size_t array_size = 3;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__BasicPrimitive(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Compound__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rosidl_typesupport_microxrcedds_test_msg__msg__Compound(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Compound = {
  "rosidl_typesupport_microxrcedds_test_msg::msg",
  "Compound",
  _Compound__cdr_serialize,
  _Compound__cdr_deserialize,
  _Compound__get_serialized_size,
  _Compound__max_serialized_size
};

static rosidl_message_type_support_t _Compound__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Compound,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosidl_typesupport_microxrcedds_test_msg, msg, Compound)() {
  return &_Compound__type_support;
}

#if defined(__cplusplus)
}
#endif
