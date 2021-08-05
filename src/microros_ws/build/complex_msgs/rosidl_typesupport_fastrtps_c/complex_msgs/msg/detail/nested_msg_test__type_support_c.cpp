// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from complex_msgs:msg/NestedMsgTest.idl
// generated code does not contain a copyright notice
#include "complex_msgs/msg/detail/nested_msg_test__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "complex_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "complex_msgs/msg/detail/nested_msg_test__struct.h"
#include "complex_msgs/msg/detail/nested_msg_test__functions.h"
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

#include "complex_msgs/msg/detail/multi_string_test__functions.h"  // data14

// forward declare type support functions
size_t get_serialized_size_complex_msgs__msg__MultiStringTest(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_complex_msgs__msg__MultiStringTest(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, complex_msgs, msg, MultiStringTest)();


using _NestedMsgTest__ros_msg_type = complex_msgs__msg__NestedMsgTest;

static bool _NestedMsgTest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NestedMsgTest__ros_msg_type * ros_message = static_cast<const _NestedMsgTest__ros_msg_type *>(untyped_ros_message);
  // Field name: data1
  {
    cdr << (ros_message->data1 ? true : false);
  }

  // Field name: data2
  {
    cdr << ros_message->data2;
  }

  // Field name: data3
  {
    cdr << ros_message->data3;
  }

  // Field name: data4
  {
    cdr << ros_message->data4;
  }

  // Field name: data5
  {
    cdr << ros_message->data5;
  }

  // Field name: data6
  {
    cdr << ros_message->data6;
  }

  // Field name: data7
  {
    cdr << ros_message->data7;
  }

  // Field name: data8
  {
    cdr << ros_message->data8;
  }

  // Field name: data9
  {
    cdr << ros_message->data9;
  }

  // Field name: data10
  {
    cdr << ros_message->data10;
  }

  // Field name: data11
  {
    cdr << ros_message->data11;
  }

  // Field name: data12
  {
    cdr << ros_message->data12;
  }

  // Field name: data13
  {
    cdr << ros_message->data13;
  }

  // Field name: data14
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, complex_msgs, msg, MultiStringTest
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->data14, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _NestedMsgTest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NestedMsgTest__ros_msg_type * ros_message = static_cast<_NestedMsgTest__ros_msg_type *>(untyped_ros_message);
  // Field name: data1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->data1 = tmp ? true : false;
  }

  // Field name: data2
  {
    cdr >> ros_message->data2;
  }

  // Field name: data3
  {
    cdr >> ros_message->data3;
  }

  // Field name: data4
  {
    cdr >> ros_message->data4;
  }

  // Field name: data5
  {
    cdr >> ros_message->data5;
  }

  // Field name: data6
  {
    cdr >> ros_message->data6;
  }

  // Field name: data7
  {
    cdr >> ros_message->data7;
  }

  // Field name: data8
  {
    cdr >> ros_message->data8;
  }

  // Field name: data9
  {
    cdr >> ros_message->data9;
  }

  // Field name: data10
  {
    cdr >> ros_message->data10;
  }

  // Field name: data11
  {
    cdr >> ros_message->data11;
  }

  // Field name: data12
  {
    cdr >> ros_message->data12;
  }

  // Field name: data13
  {
    cdr >> ros_message->data13;
  }

  // Field name: data14
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, complex_msgs, msg, MultiStringTest
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->data14))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
size_t get_serialized_size_complex_msgs__msg__NestedMsgTest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NestedMsgTest__ros_msg_type * ros_message = static_cast<const _NestedMsgTest__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name data1
  {
    size_t item_size = sizeof(ros_message->data1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data2
  {
    size_t item_size = sizeof(ros_message->data2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data3
  {
    size_t item_size = sizeof(ros_message->data3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data4
  {
    size_t item_size = sizeof(ros_message->data4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data5
  {
    size_t item_size = sizeof(ros_message->data5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data6
  {
    size_t item_size = sizeof(ros_message->data6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data7
  {
    size_t item_size = sizeof(ros_message->data7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data8
  {
    size_t item_size = sizeof(ros_message->data8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data9
  {
    size_t item_size = sizeof(ros_message->data9);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data10
  {
    size_t item_size = sizeof(ros_message->data10);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data11
  {
    size_t item_size = sizeof(ros_message->data11);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data12
  {
    size_t item_size = sizeof(ros_message->data12);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data13
  {
    size_t item_size = sizeof(ros_message->data13);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name data14

  current_alignment += get_serialized_size_complex_msgs__msg__MultiStringTest(
    &(ros_message->data14), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _NestedMsgTest__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_complex_msgs__msg__NestedMsgTest(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_complex_msgs
size_t max_serialized_size_complex_msgs__msg__NestedMsgTest(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: data1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: data2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: data3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: data4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: data5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: data6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: data7
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: data8
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: data9
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: data10
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: data11
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: data12
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: data13
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: data14
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_complex_msgs__msg__MultiStringTest(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NestedMsgTest__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_complex_msgs__msg__NestedMsgTest(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NestedMsgTest = {
  "complex_msgs::msg",
  "NestedMsgTest",
  _NestedMsgTest__cdr_serialize,
  _NestedMsgTest__cdr_deserialize,
  _NestedMsgTest__get_serialized_size,
  _NestedMsgTest__max_serialized_size
};

static rosidl_message_type_support_t _NestedMsgTest__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NestedMsgTest,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, complex_msgs, msg, NestedMsgTest)() {
  return &_NestedMsgTest__type_support;
}

#if defined(__cplusplus)
}
#endif
