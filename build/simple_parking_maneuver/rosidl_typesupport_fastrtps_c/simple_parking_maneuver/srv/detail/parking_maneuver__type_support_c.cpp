// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from simple_parking_maneuver:srv/ParkingManeuver.idl
// generated code does not contain a copyright notice
#include "simple_parking_maneuver/srv/detail/parking_maneuver__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "simple_parking_maneuver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "simple_parking_maneuver/srv/detail/parking_maneuver__struct.h"
#include "simple_parking_maneuver/srv/detail/parking_maneuver__functions.h"
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

#include "rosidl_runtime_c/string.h"  // direction
#include "rosidl_runtime_c/string_functions.h"  // direction

// forward declare type support functions


using _ParkingManeuver_Request__ros_msg_type = simple_parking_maneuver__srv__ParkingManeuver_Request;

static bool _ParkingManeuver_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ParkingManeuver_Request__ros_msg_type * ros_message = static_cast<const _ParkingManeuver_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: direction
  {
    const rosidl_runtime_c__String * str = &ros_message->direction;
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

  return true;
}

static bool _ParkingManeuver_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ParkingManeuver_Request__ros_msg_type * ros_message = static_cast<_ParkingManeuver_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: direction
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->direction.data) {
      rosidl_runtime_c__String__init(&ros_message->direction);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->direction,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'direction'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simple_parking_maneuver
size_t get_serialized_size_simple_parking_maneuver__srv__ParkingManeuver_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ParkingManeuver_Request__ros_msg_type * ros_message = static_cast<const _ParkingManeuver_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name direction
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->direction.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ParkingManeuver_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_simple_parking_maneuver__srv__ParkingManeuver_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simple_parking_maneuver
size_t max_serialized_size_simple_parking_maneuver__srv__ParkingManeuver_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: direction
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ParkingManeuver_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_simple_parking_maneuver__srv__ParkingManeuver_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ParkingManeuver_Request = {
  "simple_parking_maneuver::srv",
  "ParkingManeuver_Request",
  _ParkingManeuver_Request__cdr_serialize,
  _ParkingManeuver_Request__cdr_deserialize,
  _ParkingManeuver_Request__get_serialized_size,
  _ParkingManeuver_Request__max_serialized_size
};

static rosidl_message_type_support_t _ParkingManeuver_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ParkingManeuver_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simple_parking_maneuver, srv, ParkingManeuver_Request)() {
  return &_ParkingManeuver_Request__type_support;
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
// #include "simple_parking_maneuver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "simple_parking_maneuver/srv/detail/parking_maneuver__struct.h"
// already included above
// #include "simple_parking_maneuver/srv/detail/parking_maneuver__functions.h"
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

// already included above
// #include "rosidl_runtime_c/string.h"  // info
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // info

// forward declare type support functions


using _ParkingManeuver_Response__ros_msg_type = simple_parking_maneuver__srv__ParkingManeuver_Response;

static bool _ParkingManeuver_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ParkingManeuver_Response__ros_msg_type * ros_message = static_cast<const _ParkingManeuver_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const rosidl_runtime_c__String * str = &ros_message->info;
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

  return true;
}

static bool _ParkingManeuver_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ParkingManeuver_Response__ros_msg_type * ros_message = static_cast<_ParkingManeuver_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->info.data) {
      rosidl_runtime_c__String__init(&ros_message->info);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->info,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'info'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simple_parking_maneuver
size_t get_serialized_size_simple_parking_maneuver__srv__ParkingManeuver_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ParkingManeuver_Response__ros_msg_type * ros_message = static_cast<const _ParkingManeuver_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name info
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->info.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ParkingManeuver_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_simple_parking_maneuver__srv__ParkingManeuver_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_simple_parking_maneuver
size_t max_serialized_size_simple_parking_maneuver__srv__ParkingManeuver_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: info
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ParkingManeuver_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_simple_parking_maneuver__srv__ParkingManeuver_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ParkingManeuver_Response = {
  "simple_parking_maneuver::srv",
  "ParkingManeuver_Response",
  _ParkingManeuver_Response__cdr_serialize,
  _ParkingManeuver_Response__cdr_deserialize,
  _ParkingManeuver_Response__get_serialized_size,
  _ParkingManeuver_Response__max_serialized_size
};

static rosidl_message_type_support_t _ParkingManeuver_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ParkingManeuver_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simple_parking_maneuver, srv, ParkingManeuver_Response)() {
  return &_ParkingManeuver_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "simple_parking_maneuver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "simple_parking_maneuver/srv/parking_maneuver.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ParkingManeuver__callbacks = {
  "simple_parking_maneuver::srv",
  "ParkingManeuver",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simple_parking_maneuver, srv, ParkingManeuver_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simple_parking_maneuver, srv, ParkingManeuver_Response)(),
};

static rosidl_service_type_support_t ParkingManeuver__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ParkingManeuver__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simple_parking_maneuver, srv, ParkingManeuver)() {
  return &ParkingManeuver__handle;
}

#if defined(__cplusplus)
}
#endif
