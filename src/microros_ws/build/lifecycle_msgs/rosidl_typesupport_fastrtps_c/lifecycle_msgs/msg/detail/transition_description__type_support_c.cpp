// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from lifecycle_msgs:msg/TransitionDescription.idl
// generated code does not contain a copyright notice
#include "lifecycle_msgs/msg/detail/transition_description__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "lifecycle_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "lifecycle_msgs/msg/detail/transition_description__struct.h"
#include "lifecycle_msgs/msg/detail/transition_description__functions.h"
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

#include "lifecycle_msgs/msg/detail/state__functions.h"  // goal_state, start_state
#include "lifecycle_msgs/msg/detail/transition__functions.h"  // transition

// forward declare type support functions
size_t get_serialized_size_lifecycle_msgs__msg__State(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_lifecycle_msgs__msg__State(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, msg, State)();
size_t get_serialized_size_lifecycle_msgs__msg__Transition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_lifecycle_msgs__msg__Transition(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, msg, Transition)();


using _TransitionDescription__ros_msg_type = lifecycle_msgs__msg__TransitionDescription;

static bool _TransitionDescription__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TransitionDescription__ros_msg_type * ros_message = static_cast<const _TransitionDescription__ros_msg_type *>(untyped_ros_message);
  // Field name: transition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, lifecycle_msgs, msg, Transition
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->transition, cdr))
    {
      return false;
    }
  }

  // Field name: start_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, lifecycle_msgs, msg, State
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->start_state, cdr))
    {
      return false;
    }
  }

  // Field name: goal_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, lifecycle_msgs, msg, State
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_state, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TransitionDescription__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TransitionDescription__ros_msg_type * ros_message = static_cast<_TransitionDescription__ros_msg_type *>(untyped_ros_message);
  // Field name: transition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, lifecycle_msgs, msg, Transition
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->transition))
    {
      return false;
    }
  }

  // Field name: start_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, lifecycle_msgs, msg, State
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->start_state))
    {
      return false;
    }
  }

  // Field name: goal_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, lifecycle_msgs, msg, State
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_state))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
size_t get_serialized_size_lifecycle_msgs__msg__TransitionDescription(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TransitionDescription__ros_msg_type * ros_message = static_cast<const _TransitionDescription__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name transition

  current_alignment += get_serialized_size_lifecycle_msgs__msg__Transition(
    &(ros_message->transition), current_alignment);
  // field.name start_state

  current_alignment += get_serialized_size_lifecycle_msgs__msg__State(
    &(ros_message->start_state), current_alignment);
  // field.name goal_state

  current_alignment += get_serialized_size_lifecycle_msgs__msg__State(
    &(ros_message->goal_state), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TransitionDescription__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_lifecycle_msgs__msg__TransitionDescription(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_lifecycle_msgs
size_t max_serialized_size_lifecycle_msgs__msg__TransitionDescription(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: transition
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_lifecycle_msgs__msg__Transition(
        full_bounded, current_alignment);
    }
  }
  // member: start_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_lifecycle_msgs__msg__State(
        full_bounded, current_alignment);
    }
  }
  // member: goal_state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_lifecycle_msgs__msg__State(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TransitionDescription__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_lifecycle_msgs__msg__TransitionDescription(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TransitionDescription = {
  "lifecycle_msgs::msg",
  "TransitionDescription",
  _TransitionDescription__cdr_serialize,
  _TransitionDescription__cdr_deserialize,
  _TransitionDescription__get_serialized_size,
  _TransitionDescription__max_serialized_size
};

static rosidl_message_type_support_t _TransitionDescription__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TransitionDescription,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, lifecycle_msgs, msg, TransitionDescription)() {
  return &_TransitionDescription__type_support;
}

#if defined(__cplusplus)
}
#endif
