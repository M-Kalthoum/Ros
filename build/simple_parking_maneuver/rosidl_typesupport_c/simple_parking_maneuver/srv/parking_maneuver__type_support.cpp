// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from simple_parking_maneuver:srv/ParkingManeuver.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "simple_parking_maneuver/srv/detail/parking_maneuver__struct.h"
#include "simple_parking_maneuver/srv/detail/parking_maneuver__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace simple_parking_maneuver
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ParkingManeuver_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParkingManeuver_Request_type_support_ids_t;

static const _ParkingManeuver_Request_type_support_ids_t _ParkingManeuver_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ParkingManeuver_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParkingManeuver_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParkingManeuver_Request_type_support_symbol_names_t _ParkingManeuver_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simple_parking_maneuver, srv, ParkingManeuver_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_parking_maneuver, srv, ParkingManeuver_Request)),
  }
};

typedef struct _ParkingManeuver_Request_type_support_data_t
{
  void * data[2];
} _ParkingManeuver_Request_type_support_data_t;

static _ParkingManeuver_Request_type_support_data_t _ParkingManeuver_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParkingManeuver_Request_message_typesupport_map = {
  2,
  "simple_parking_maneuver",
  &_ParkingManeuver_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ParkingManeuver_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ParkingManeuver_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ParkingManeuver_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParkingManeuver_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace simple_parking_maneuver

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, simple_parking_maneuver, srv, ParkingManeuver_Request)() {
  return &::simple_parking_maneuver::srv::rosidl_typesupport_c::ParkingManeuver_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "simple_parking_maneuver/srv/detail/parking_maneuver__struct.h"
// already included above
// #include "simple_parking_maneuver/srv/detail/parking_maneuver__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace simple_parking_maneuver
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ParkingManeuver_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParkingManeuver_Response_type_support_ids_t;

static const _ParkingManeuver_Response_type_support_ids_t _ParkingManeuver_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ParkingManeuver_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParkingManeuver_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParkingManeuver_Response_type_support_symbol_names_t _ParkingManeuver_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simple_parking_maneuver, srv, ParkingManeuver_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_parking_maneuver, srv, ParkingManeuver_Response)),
  }
};

typedef struct _ParkingManeuver_Response_type_support_data_t
{
  void * data[2];
} _ParkingManeuver_Response_type_support_data_t;

static _ParkingManeuver_Response_type_support_data_t _ParkingManeuver_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParkingManeuver_Response_message_typesupport_map = {
  2,
  "simple_parking_maneuver",
  &_ParkingManeuver_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ParkingManeuver_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ParkingManeuver_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ParkingManeuver_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParkingManeuver_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace simple_parking_maneuver

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, simple_parking_maneuver, srv, ParkingManeuver_Response)() {
  return &::simple_parking_maneuver::srv::rosidl_typesupport_c::ParkingManeuver_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "simple_parking_maneuver/srv/detail/parking_maneuver__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace simple_parking_maneuver
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ParkingManeuver_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParkingManeuver_type_support_ids_t;

static const _ParkingManeuver_type_support_ids_t _ParkingManeuver_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ParkingManeuver_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParkingManeuver_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParkingManeuver_type_support_symbol_names_t _ParkingManeuver_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, simple_parking_maneuver, srv, ParkingManeuver)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simple_parking_maneuver, srv, ParkingManeuver)),
  }
};

typedef struct _ParkingManeuver_type_support_data_t
{
  void * data[2];
} _ParkingManeuver_type_support_data_t;

static _ParkingManeuver_type_support_data_t _ParkingManeuver_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParkingManeuver_service_typesupport_map = {
  2,
  "simple_parking_maneuver",
  &_ParkingManeuver_service_typesupport_ids.typesupport_identifier[0],
  &_ParkingManeuver_service_typesupport_symbol_names.symbol_name[0],
  &_ParkingManeuver_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ParkingManeuver_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParkingManeuver_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace simple_parking_maneuver

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, simple_parking_maneuver, srv, ParkingManeuver)() {
  return &::simple_parking_maneuver::srv::rosidl_typesupport_c::ParkingManeuver_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
