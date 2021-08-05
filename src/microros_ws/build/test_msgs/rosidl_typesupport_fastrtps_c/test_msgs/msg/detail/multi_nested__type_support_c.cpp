// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from test_msgs:msg/MultiNested.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/detail/multi_nested__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "test_msgs/msg/detail/multi_nested__struct.h"
#include "test_msgs/msg/detail/multi_nested__functions.h"
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

#include "test_msgs/msg/detail/arrays__functions.h"  // array_of_arrays, bounded_sequence_of_arrays, unbounded_sequence_of_arrays
#include "test_msgs/msg/detail/bounded_sequences__functions.h"  // array_of_bounded_sequences, bounded_sequence_of_bounded_sequences, unbounded_sequence_of_bounded_sequences
#include "test_msgs/msg/detail/unbounded_sequences__functions.h"  // array_of_unbounded_sequences, bounded_sequence_of_unbounded_sequences, unbounded_sequence_of_unbounded_sequences

// forward declare type support functions
size_t get_serialized_size_test_msgs__msg__Arrays(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__Arrays(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Arrays)();
size_t get_serialized_size_test_msgs__msg__BoundedSequences(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__BoundedSequences(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, BoundedSequences)();
size_t get_serialized_size_test_msgs__msg__UnboundedSequences(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__UnboundedSequences(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, UnboundedSequences)();


using _MultiNested__ros_msg_type = test_msgs__msg__MultiNested;

static bool _MultiNested__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MultiNested__ros_msg_type * ros_message = static_cast<const _MultiNested__ros_msg_type *>(untyped_ros_message);
  // Field name: array_of_arrays
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, Arrays
      )()->data);
    size_t size = 3;
    auto array_ptr = ros_message->array_of_arrays;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: array_of_bounded_sequences
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, BoundedSequences
      )()->data);
    size_t size = 3;
    auto array_ptr = ros_message->array_of_bounded_sequences;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: array_of_unbounded_sequences
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, UnboundedSequences
      )()->data);
    size_t size = 3;
    auto array_ptr = ros_message->array_of_unbounded_sequences;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: bounded_sequence_of_arrays
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, Arrays
      )()->data);
    size_t size = ros_message->bounded_sequence_of_arrays.size;
    auto array_ptr = ros_message->bounded_sequence_of_arrays.data;
    if (size > 3) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: bounded_sequence_of_bounded_sequences
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, BoundedSequences
      )()->data);
    size_t size = ros_message->bounded_sequence_of_bounded_sequences.size;
    auto array_ptr = ros_message->bounded_sequence_of_bounded_sequences.data;
    if (size > 3) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: bounded_sequence_of_unbounded_sequences
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, UnboundedSequences
      )()->data);
    size_t size = ros_message->bounded_sequence_of_unbounded_sequences.size;
    auto array_ptr = ros_message->bounded_sequence_of_unbounded_sequences.data;
    if (size > 3) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: unbounded_sequence_of_arrays
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, Arrays
      )()->data);
    size_t size = ros_message->unbounded_sequence_of_arrays.size;
    auto array_ptr = ros_message->unbounded_sequence_of_arrays.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: unbounded_sequence_of_bounded_sequences
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, BoundedSequences
      )()->data);
    size_t size = ros_message->unbounded_sequence_of_bounded_sequences.size;
    auto array_ptr = ros_message->unbounded_sequence_of_bounded_sequences.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: unbounded_sequence_of_unbounded_sequences
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, UnboundedSequences
      )()->data);
    size_t size = ros_message->unbounded_sequence_of_unbounded_sequences.size;
    auto array_ptr = ros_message->unbounded_sequence_of_unbounded_sequences.data;
    cdr << static_cast<uint32_t>(size);
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

static bool _MultiNested__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MultiNested__ros_msg_type * ros_message = static_cast<_MultiNested__ros_msg_type *>(untyped_ros_message);
  // Field name: array_of_arrays
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, Arrays
      )()->data);
    size_t size = 3;
    auto array_ptr = ros_message->array_of_arrays;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: array_of_bounded_sequences
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, BoundedSequences
      )()->data);
    size_t size = 3;
    auto array_ptr = ros_message->array_of_bounded_sequences;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: array_of_unbounded_sequences
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, UnboundedSequences
      )()->data);
    size_t size = 3;
    auto array_ptr = ros_message->array_of_unbounded_sequences;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: bounded_sequence_of_arrays
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, Arrays
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bounded_sequence_of_arrays.data) {
      test_msgs__msg__Arrays__Sequence__fini(&ros_message->bounded_sequence_of_arrays);
    }
    if (!test_msgs__msg__Arrays__Sequence__init(&ros_message->bounded_sequence_of_arrays, size)) {
      return "failed to create array for field 'bounded_sequence_of_arrays'";
    }
    auto array_ptr = ros_message->bounded_sequence_of_arrays.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: bounded_sequence_of_bounded_sequences
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, BoundedSequences
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bounded_sequence_of_bounded_sequences.data) {
      test_msgs__msg__BoundedSequences__Sequence__fini(&ros_message->bounded_sequence_of_bounded_sequences);
    }
    if (!test_msgs__msg__BoundedSequences__Sequence__init(&ros_message->bounded_sequence_of_bounded_sequences, size)) {
      return "failed to create array for field 'bounded_sequence_of_bounded_sequences'";
    }
    auto array_ptr = ros_message->bounded_sequence_of_bounded_sequences.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: bounded_sequence_of_unbounded_sequences
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, UnboundedSequences
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bounded_sequence_of_unbounded_sequences.data) {
      test_msgs__msg__UnboundedSequences__Sequence__fini(&ros_message->bounded_sequence_of_unbounded_sequences);
    }
    if (!test_msgs__msg__UnboundedSequences__Sequence__init(&ros_message->bounded_sequence_of_unbounded_sequences, size)) {
      return "failed to create array for field 'bounded_sequence_of_unbounded_sequences'";
    }
    auto array_ptr = ros_message->bounded_sequence_of_unbounded_sequences.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: unbounded_sequence_of_arrays
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, Arrays
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->unbounded_sequence_of_arrays.data) {
      test_msgs__msg__Arrays__Sequence__fini(&ros_message->unbounded_sequence_of_arrays);
    }
    if (!test_msgs__msg__Arrays__Sequence__init(&ros_message->unbounded_sequence_of_arrays, size)) {
      return "failed to create array for field 'unbounded_sequence_of_arrays'";
    }
    auto array_ptr = ros_message->unbounded_sequence_of_arrays.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: unbounded_sequence_of_bounded_sequences
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, BoundedSequences
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->unbounded_sequence_of_bounded_sequences.data) {
      test_msgs__msg__BoundedSequences__Sequence__fini(&ros_message->unbounded_sequence_of_bounded_sequences);
    }
    if (!test_msgs__msg__BoundedSequences__Sequence__init(&ros_message->unbounded_sequence_of_bounded_sequences, size)) {
      return "failed to create array for field 'unbounded_sequence_of_bounded_sequences'";
    }
    auto array_ptr = ros_message->unbounded_sequence_of_bounded_sequences.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: unbounded_sequence_of_unbounded_sequences
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, test_msgs, msg, UnboundedSequences
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->unbounded_sequence_of_unbounded_sequences.data) {
      test_msgs__msg__UnboundedSequences__Sequence__fini(&ros_message->unbounded_sequence_of_unbounded_sequences);
    }
    if (!test_msgs__msg__UnboundedSequences__Sequence__init(&ros_message->unbounded_sequence_of_unbounded_sequences, size)) {
      return "failed to create array for field 'unbounded_sequence_of_unbounded_sequences'";
    }
    auto array_ptr = ros_message->unbounded_sequence_of_unbounded_sequences.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__msg__MultiNested(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MultiNested__ros_msg_type * ros_message = static_cast<const _MultiNested__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name array_of_arrays
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->array_of_arrays;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__Arrays(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name array_of_bounded_sequences
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->array_of_bounded_sequences;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__BoundedSequences(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name array_of_unbounded_sequences
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->array_of_unbounded_sequences;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__UnboundedSequences(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name bounded_sequence_of_arrays
  {
    size_t array_size = ros_message->bounded_sequence_of_arrays.size;
    auto array_ptr = ros_message->bounded_sequence_of_arrays.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__Arrays(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name bounded_sequence_of_bounded_sequences
  {
    size_t array_size = ros_message->bounded_sequence_of_bounded_sequences.size;
    auto array_ptr = ros_message->bounded_sequence_of_bounded_sequences.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__BoundedSequences(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name bounded_sequence_of_unbounded_sequences
  {
    size_t array_size = ros_message->bounded_sequence_of_unbounded_sequences.size;
    auto array_ptr = ros_message->bounded_sequence_of_unbounded_sequences.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__UnboundedSequences(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name unbounded_sequence_of_arrays
  {
    size_t array_size = ros_message->unbounded_sequence_of_arrays.size;
    auto array_ptr = ros_message->unbounded_sequence_of_arrays.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__Arrays(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name unbounded_sequence_of_bounded_sequences
  {
    size_t array_size = ros_message->unbounded_sequence_of_bounded_sequences.size;
    auto array_ptr = ros_message->unbounded_sequence_of_bounded_sequences.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__BoundedSequences(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name unbounded_sequence_of_unbounded_sequences
  {
    size_t array_size = ros_message->unbounded_sequence_of_unbounded_sequences.size;
    auto array_ptr = ros_message->unbounded_sequence_of_unbounded_sequences.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__UnboundedSequences(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MultiNested__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_test_msgs__msg__MultiNested(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__msg__MultiNested(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: array_of_arrays
  {
    size_t array_size = 3;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_test_msgs__msg__Arrays(
        full_bounded, current_alignment);
    }
  }
  // member: array_of_bounded_sequences
  {
    size_t array_size = 3;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_test_msgs__msg__BoundedSequences(
        full_bounded, current_alignment);
    }
  }
  // member: array_of_unbounded_sequences
  {
    size_t array_size = 3;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_test_msgs__msg__UnboundedSequences(
        full_bounded, current_alignment);
    }
  }
  // member: bounded_sequence_of_arrays
  {
    size_t array_size = 3;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_test_msgs__msg__Arrays(
        full_bounded, current_alignment);
    }
  }
  // member: bounded_sequence_of_bounded_sequences
  {
    size_t array_size = 3;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_test_msgs__msg__BoundedSequences(
        full_bounded, current_alignment);
    }
  }
  // member: bounded_sequence_of_unbounded_sequences
  {
    size_t array_size = 3;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_test_msgs__msg__UnboundedSequences(
        full_bounded, current_alignment);
    }
  }
  // member: unbounded_sequence_of_arrays
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_test_msgs__msg__Arrays(
        full_bounded, current_alignment);
    }
  }
  // member: unbounded_sequence_of_bounded_sequences
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_test_msgs__msg__BoundedSequences(
        full_bounded, current_alignment);
    }
  }
  // member: unbounded_sequence_of_unbounded_sequences
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_test_msgs__msg__UnboundedSequences(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MultiNested__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_test_msgs__msg__MultiNested(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MultiNested = {
  "test_msgs::msg",
  "MultiNested",
  _MultiNested__cdr_serialize,
  _MultiNested__cdr_deserialize,
  _MultiNested__get_serialized_size,
  _MultiNested__max_serialized_size
};

static rosidl_message_type_support_t _MultiNested__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MultiNested,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, MultiNested)() {
  return &_MultiNested__type_support;
}

#if defined(__cplusplus)
}
#endif
