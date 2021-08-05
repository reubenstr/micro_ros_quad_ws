// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from statistics_msgs:msg/MetricsMessage.idl
// generated code does not contain a copyright notice
#include "statistics_msgs/msg/detail/metrics_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "statistics_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "statistics_msgs/msg/detail/metrics_message__struct.h"
#include "statistics_msgs/msg/detail/metrics_message__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // window_start, window_stop
#include "rosidl_runtime_c/string.h"  // measurement_source_name, metrics_source, unit
#include "rosidl_runtime_c/string_functions.h"  // measurement_source_name, metrics_source, unit
#include "statistics_msgs/msg/detail/statistic_data_point__functions.h"  // statistics

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_statistics_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_statistics_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_statistics_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();
size_t get_serialized_size_statistics_msgs__msg__StatisticDataPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_statistics_msgs__msg__StatisticDataPoint(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, statistics_msgs, msg, StatisticDataPoint)();


using _MetricsMessage__ros_msg_type = statistics_msgs__msg__MetricsMessage;

static bool _MetricsMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MetricsMessage__ros_msg_type * ros_message = static_cast<const _MetricsMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: measurement_source_name
  {
    const rosidl_runtime_c__String * str = &ros_message->measurement_source_name;
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

  // Field name: metrics_source
  {
    const rosidl_runtime_c__String * str = &ros_message->metrics_source;
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

  // Field name: unit
  {
    const rosidl_runtime_c__String * str = &ros_message->unit;
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

  // Field name: window_start
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->window_start, cdr))
    {
      return false;
    }
  }

  // Field name: window_stop
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->window_stop, cdr))
    {
      return false;
    }
  }

  // Field name: statistics
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, statistics_msgs, msg, StatisticDataPoint
      )()->data);
    size_t size = ros_message->statistics.size;
    auto array_ptr = ros_message->statistics.data;
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

static bool _MetricsMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MetricsMessage__ros_msg_type * ros_message = static_cast<_MetricsMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: measurement_source_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->measurement_source_name.data) {
      rosidl_runtime_c__String__init(&ros_message->measurement_source_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->measurement_source_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'measurement_source_name'\n");
      return false;
    }
  }

  // Field name: metrics_source
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->metrics_source.data) {
      rosidl_runtime_c__String__init(&ros_message->metrics_source);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->metrics_source,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'metrics_source'\n");
      return false;
    }
  }

  // Field name: unit
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->unit.data) {
      rosidl_runtime_c__String__init(&ros_message->unit);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->unit,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'unit'\n");
      return false;
    }
  }

  // Field name: window_start
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->window_start))
    {
      return false;
    }
  }

  // Field name: window_stop
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->window_stop))
    {
      return false;
    }
  }

  // Field name: statistics
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, statistics_msgs, msg, StatisticDataPoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->statistics.data) {
      statistics_msgs__msg__StatisticDataPoint__Sequence__fini(&ros_message->statistics);
    }
    if (!statistics_msgs__msg__StatisticDataPoint__Sequence__init(&ros_message->statistics, size)) {
      return "failed to create array for field 'statistics'";
    }
    auto array_ptr = ros_message->statistics.data;
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_statistics_msgs
size_t get_serialized_size_statistics_msgs__msg__MetricsMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MetricsMessage__ros_msg_type * ros_message = static_cast<const _MetricsMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name measurement_source_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->measurement_source_name.size + 1);
  // field.name metrics_source
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->metrics_source.size + 1);
  // field.name unit
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->unit.size + 1);
  // field.name window_start

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->window_start), current_alignment);
  // field.name window_stop

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->window_stop), current_alignment);
  // field.name statistics
  {
    size_t array_size = ros_message->statistics.size;
    auto array_ptr = ros_message->statistics.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_statistics_msgs__msg__StatisticDataPoint(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MetricsMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_statistics_msgs__msg__MetricsMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_statistics_msgs
size_t max_serialized_size_statistics_msgs__msg__MetricsMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: measurement_source_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: metrics_source
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: unit
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: window_start
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: window_stop
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: statistics
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_statistics_msgs__msg__StatisticDataPoint(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MetricsMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_statistics_msgs__msg__MetricsMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MetricsMessage = {
  "statistics_msgs::msg",
  "MetricsMessage",
  _MetricsMessage__cdr_serialize,
  _MetricsMessage__cdr_deserialize,
  _MetricsMessage__get_serialized_size,
  _MetricsMessage__max_serialized_size
};

static rosidl_message_type_support_t _MetricsMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MetricsMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, statistics_msgs, msg, MetricsMessage)() {
  return &_MetricsMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
