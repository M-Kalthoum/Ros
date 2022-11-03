// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simple_parking_maneuver:srv/ParkingManeuver.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_PARKING_MANEUVER__SRV__DETAIL__PARKING_MANEUVER__STRUCT_H_
#define SIMPLE_PARKING_MANEUVER__SRV__DETAIL__PARKING_MANEUVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ParkingManeuver in the package simple_parking_maneuver.
typedef struct simple_parking_maneuver__srv__ParkingManeuver_Request
{
  rosidl_runtime_c__String direction;
} simple_parking_maneuver__srv__ParkingManeuver_Request;

// Struct for a sequence of simple_parking_maneuver__srv__ParkingManeuver_Request.
typedef struct simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence
{
  simple_parking_maneuver__srv__ParkingManeuver_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_parking_maneuver__srv__ParkingManeuver_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ParkingManeuver in the package simple_parking_maneuver.
typedef struct simple_parking_maneuver__srv__ParkingManeuver_Response
{
  rosidl_runtime_c__String info;
} simple_parking_maneuver__srv__ParkingManeuver_Response;

// Struct for a sequence of simple_parking_maneuver__srv__ParkingManeuver_Response.
typedef struct simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence
{
  simple_parking_maneuver__srv__ParkingManeuver_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_parking_maneuver__srv__ParkingManeuver_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_PARKING_MANEUVER__SRV__DETAIL__PARKING_MANEUVER__STRUCT_H_
