// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from composition_interfaces:srv/ListNodes.idl
// generated code does not contain a copyright notice
#include "composition_interfaces/srv/detail/list_nodes__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "composition_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "composition_interfaces/srv/detail/list_nodes__struct.h"
#include "composition_interfaces/srv/detail/list_nodes__functions.h"
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


// forward declare type support functions


using _ListNodes_Request__ros_msg_type = composition_interfaces__srv__ListNodes_Request;

static bool _ListNodes_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ListNodes_Request__ros_msg_type * ros_message = static_cast<const _ListNodes_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _ListNodes_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ListNodes_Request__ros_msg_type * ros_message = static_cast<_ListNodes_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
size_t get_serialized_size_composition_interfaces__srv__ListNodes_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ListNodes_Request__ros_msg_type * ros_message = static_cast<const _ListNodes_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ListNodes_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_composition_interfaces__srv__ListNodes_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
size_t max_serialized_size_composition_interfaces__srv__ListNodes_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ListNodes_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_composition_interfaces__srv__ListNodes_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ListNodes_Request = {
  "composition_interfaces::srv",
  "ListNodes_Request",
  _ListNodes_Request__cdr_serialize,
  _ListNodes_Request__cdr_deserialize,
  _ListNodes_Request__get_serialized_size,
  _ListNodes_Request__max_serialized_size
};

static rosidl_message_type_support_t _ListNodes_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ListNodes_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, composition_interfaces, srv, ListNodes_Request)() {
  return &_ListNodes_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "composition_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "composition_interfaces/srv/detail/list_nodes__struct.h"
// already included above
// #include "composition_interfaces/srv/detail/list_nodes__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // unique_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // unique_ids
#include "rosidl_runtime_c/string.h"  // full_node_names
#include "rosidl_runtime_c/string_functions.h"  // full_node_names

// forward declare type support functions


using _ListNodes_Response__ros_msg_type = composition_interfaces__srv__ListNodes_Response;

static bool _ListNodes_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ListNodes_Response__ros_msg_type * ros_message = static_cast<const _ListNodes_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: full_node_names
  {
    size_t size = ros_message->full_node_names.size;
    auto array_ptr = ros_message->full_node_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: unique_ids
  {
    size_t size = ros_message->unique_ids.size;
    auto array_ptr = ros_message->unique_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ListNodes_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ListNodes_Response__ros_msg_type * ros_message = static_cast<_ListNodes_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: full_node_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->full_node_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->full_node_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->full_node_names, size)) {
      return "failed to create array for field 'full_node_names'";
    }
    auto array_ptr = ros_message->full_node_names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'full_node_names'\n");
        return false;
      }
    }
  }

  // Field name: unique_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->unique_ids.data) {
      rosidl_runtime_c__uint64__Sequence__fini(&ros_message->unique_ids);
    }
    if (!rosidl_runtime_c__uint64__Sequence__init(&ros_message->unique_ids, size)) {
      return "failed to create array for field 'unique_ids'";
    }
    auto array_ptr = ros_message->unique_ids.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
size_t get_serialized_size_composition_interfaces__srv__ListNodes_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ListNodes_Response__ros_msg_type * ros_message = static_cast<const _ListNodes_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name full_node_names
  {
    size_t array_size = ros_message->full_node_names.size;
    auto array_ptr = ros_message->full_node_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name unique_ids
  {
    size_t array_size = ros_message->unique_ids.size;
    auto array_ptr = ros_message->unique_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ListNodes_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_composition_interfaces__srv__ListNodes_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_composition_interfaces
size_t max_serialized_size_composition_interfaces__srv__ListNodes_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: full_node_names
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: unique_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ListNodes_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_composition_interfaces__srv__ListNodes_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ListNodes_Response = {
  "composition_interfaces::srv",
  "ListNodes_Response",
  _ListNodes_Response__cdr_serialize,
  _ListNodes_Response__cdr_deserialize,
  _ListNodes_Response__get_serialized_size,
  _ListNodes_Response__max_serialized_size
};

static rosidl_message_type_support_t _ListNodes_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ListNodes_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, composition_interfaces, srv, ListNodes_Response)() {
  return &_ListNodes_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "composition_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "composition_interfaces/srv/list_nodes.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ListNodes__callbacks = {
  "composition_interfaces::srv",
  "ListNodes",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, composition_interfaces, srv, ListNodes_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, composition_interfaces, srv, ListNodes_Response)(),
};

static rosidl_service_type_support_t ListNodes__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ListNodes__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, composition_interfaces, srv, ListNodes)() {
  return &ListNodes__handle;
}

#if defined(__cplusplus)
}
#endif
