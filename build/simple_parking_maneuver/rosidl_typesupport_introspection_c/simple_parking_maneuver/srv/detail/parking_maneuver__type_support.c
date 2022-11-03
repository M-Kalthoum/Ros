// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from simple_parking_maneuver:srv/ParkingManeuver.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "simple_parking_maneuver/srv/detail/parking_maneuver__rosidl_typesupport_introspection_c.h"
#include "simple_parking_maneuver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "simple_parking_maneuver/srv/detail/parking_maneuver__functions.h"
#include "simple_parking_maneuver/srv/detail/parking_maneuver__struct.h"


// Include directives for member types
// Member `direction`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simple_parking_maneuver__srv__ParkingManeuver_Request__rosidl_typesupport_introspection_c__ParkingManeuver_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simple_parking_maneuver__srv__ParkingManeuver_Request__init(message_memory);
}

void simple_parking_maneuver__srv__ParkingManeuver_Request__rosidl_typesupport_introspection_c__ParkingManeuver_Request_fini_function(void * message_memory)
{
  simple_parking_maneuver__srv__ParkingManeuver_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember simple_parking_maneuver__srv__ParkingManeuver_Request__rosidl_typesupport_introspection_c__ParkingManeuver_Request_message_member_array[1] = {
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simple_parking_maneuver__srv__ParkingManeuver_Request, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simple_parking_maneuver__srv__ParkingManeuver_Request__rosidl_typesupport_introspection_c__ParkingManeuver_Request_message_members = {
  "simple_parking_maneuver__srv",  // message namespace
  "ParkingManeuver_Request",  // message name
  1,  // number of fields
  sizeof(simple_parking_maneuver__srv__ParkingManeuver_Request),
  simple_parking_maneuver__srv__ParkingManeuver_Request__rosidl_typesupport_introspection_c__ParkingManeuver_Request_message_member_array,  // message members
  simple_parking_maneuver__srv__ParkingManeuver_Request__rosidl_typesupport_introspection_c__ParkingManeuver_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  simple_parking_maneuver__srv__ParkingManeuver_Request__rosidl_typesupport_introspection_c__ParkingManeuver_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simple_parking_maneuver__srv__ParkingManeuver_Request__rosidl_typesupport_introspection_c__ParkingManeuver_Request_message_type_support_handle = {
  0,
  &simple_parking_maneuver__srv__ParkingManeuver_Request__rosidl_typesupport_introspection_c__ParkingManeuver_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simple_parking_maneuver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_parking_maneuver, srv, ParkingManeuver_Request)() {
  if (!simple_parking_maneuver__srv__ParkingManeuver_Request__rosidl_typesupport_introspection_c__ParkingManeuver_Request_message_type_support_handle.typesupport_identifier) {
    simple_parking_maneuver__srv__ParkingManeuver_Request__rosidl_typesupport_introspection_c__ParkingManeuver_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simple_parking_maneuver__srv__ParkingManeuver_Request__rosidl_typesupport_introspection_c__ParkingManeuver_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "simple_parking_maneuver/srv/detail/parking_maneuver__rosidl_typesupport_introspection_c.h"
// already included above
// #include "simple_parking_maneuver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "simple_parking_maneuver/srv/detail/parking_maneuver__functions.h"
// already included above
// #include "simple_parking_maneuver/srv/detail/parking_maneuver__struct.h"


// Include directives for member types
// Member `info`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void simple_parking_maneuver__srv__ParkingManeuver_Response__rosidl_typesupport_introspection_c__ParkingManeuver_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  simple_parking_maneuver__srv__ParkingManeuver_Response__init(message_memory);
}

void simple_parking_maneuver__srv__ParkingManeuver_Response__rosidl_typesupport_introspection_c__ParkingManeuver_Response_fini_function(void * message_memory)
{
  simple_parking_maneuver__srv__ParkingManeuver_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember simple_parking_maneuver__srv__ParkingManeuver_Response__rosidl_typesupport_introspection_c__ParkingManeuver_Response_message_member_array[1] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(simple_parking_maneuver__srv__ParkingManeuver_Response, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers simple_parking_maneuver__srv__ParkingManeuver_Response__rosidl_typesupport_introspection_c__ParkingManeuver_Response_message_members = {
  "simple_parking_maneuver__srv",  // message namespace
  "ParkingManeuver_Response",  // message name
  1,  // number of fields
  sizeof(simple_parking_maneuver__srv__ParkingManeuver_Response),
  simple_parking_maneuver__srv__ParkingManeuver_Response__rosidl_typesupport_introspection_c__ParkingManeuver_Response_message_member_array,  // message members
  simple_parking_maneuver__srv__ParkingManeuver_Response__rosidl_typesupport_introspection_c__ParkingManeuver_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  simple_parking_maneuver__srv__ParkingManeuver_Response__rosidl_typesupport_introspection_c__ParkingManeuver_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t simple_parking_maneuver__srv__ParkingManeuver_Response__rosidl_typesupport_introspection_c__ParkingManeuver_Response_message_type_support_handle = {
  0,
  &simple_parking_maneuver__srv__ParkingManeuver_Response__rosidl_typesupport_introspection_c__ParkingManeuver_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simple_parking_maneuver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_parking_maneuver, srv, ParkingManeuver_Response)() {
  if (!simple_parking_maneuver__srv__ParkingManeuver_Response__rosidl_typesupport_introspection_c__ParkingManeuver_Response_message_type_support_handle.typesupport_identifier) {
    simple_parking_maneuver__srv__ParkingManeuver_Response__rosidl_typesupport_introspection_c__ParkingManeuver_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &simple_parking_maneuver__srv__ParkingManeuver_Response__rosidl_typesupport_introspection_c__ParkingManeuver_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "simple_parking_maneuver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "simple_parking_maneuver/srv/detail/parking_maneuver__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers simple_parking_maneuver__srv__detail__parking_maneuver__rosidl_typesupport_introspection_c__ParkingManeuver_service_members = {
  "simple_parking_maneuver__srv",  // service namespace
  "ParkingManeuver",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // simple_parking_maneuver__srv__detail__parking_maneuver__rosidl_typesupport_introspection_c__ParkingManeuver_Request_message_type_support_handle,
  NULL  // response message
  // simple_parking_maneuver__srv__detail__parking_maneuver__rosidl_typesupport_introspection_c__ParkingManeuver_Response_message_type_support_handle
};

static rosidl_service_type_support_t simple_parking_maneuver__srv__detail__parking_maneuver__rosidl_typesupport_introspection_c__ParkingManeuver_service_type_support_handle = {
  0,
  &simple_parking_maneuver__srv__detail__parking_maneuver__rosidl_typesupport_introspection_c__ParkingManeuver_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_parking_maneuver, srv, ParkingManeuver_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_parking_maneuver, srv, ParkingManeuver_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_simple_parking_maneuver
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_parking_maneuver, srv, ParkingManeuver)() {
  if (!simple_parking_maneuver__srv__detail__parking_maneuver__rosidl_typesupport_introspection_c__ParkingManeuver_service_type_support_handle.typesupport_identifier) {
    simple_parking_maneuver__srv__detail__parking_maneuver__rosidl_typesupport_introspection_c__ParkingManeuver_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)simple_parking_maneuver__srv__detail__parking_maneuver__rosidl_typesupport_introspection_c__ParkingManeuver_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_parking_maneuver, srv, ParkingManeuver_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_parking_maneuver, srv, ParkingManeuver_Response)()->data;
  }

  return &simple_parking_maneuver__srv__detail__parking_maneuver__rosidl_typesupport_introspection_c__ParkingManeuver_service_type_support_handle;
}
