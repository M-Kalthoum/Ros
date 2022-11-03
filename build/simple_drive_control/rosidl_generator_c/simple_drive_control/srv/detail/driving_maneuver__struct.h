// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from simple_drive_control:srv/DrivingManeuver.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_DRIVE_CONTROL__SRV__DETAIL__DRIVING_MANEUVER__STRUCT_H_
#define SIMPLE_DRIVE_CONTROL__SRV__DETAIL__DRIVING_MANEUVER__STRUCT_H_

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
// Member 'steering'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/DrivingManeuver in the package simple_drive_control.
typedef struct simple_drive_control__srv__DrivingManeuver_Request
{
  rosidl_runtime_c__String direction;
  rosidl_runtime_c__String steering;
  float distance;
} simple_drive_control__srv__DrivingManeuver_Request;

// Struct for a sequence of simple_drive_control__srv__DrivingManeuver_Request.
typedef struct simple_drive_control__srv__DrivingManeuver_Request__Sequence
{
  simple_drive_control__srv__DrivingManeuver_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_drive_control__srv__DrivingManeuver_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/DrivingManeuver in the package simple_drive_control.
typedef struct simple_drive_control__srv__DrivingManeuver_Response
{
  bool success;
} simple_drive_control__srv__DrivingManeuver_Response;

// Struct for a sequence of simple_drive_control__srv__DrivingManeuver_Response.
typedef struct simple_drive_control__srv__DrivingManeuver_Response__Sequence
{
  simple_drive_control__srv__DrivingManeuver_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} simple_drive_control__srv__DrivingManeuver_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIMPLE_DRIVE_CONTROL__SRV__DETAIL__DRIVING_MANEUVER__STRUCT_H_
