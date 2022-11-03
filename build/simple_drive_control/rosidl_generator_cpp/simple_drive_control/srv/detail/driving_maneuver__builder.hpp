// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simple_drive_control:srv/DrivingManeuver.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_DRIVE_CONTROL__SRV__DETAIL__DRIVING_MANEUVER__BUILDER_HPP_
#define SIMPLE_DRIVE_CONTROL__SRV__DETAIL__DRIVING_MANEUVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simple_drive_control/srv/detail/driving_maneuver__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simple_drive_control
{

namespace srv
{

namespace builder
{

class Init_DrivingManeuver_Request_distance
{
public:
  explicit Init_DrivingManeuver_Request_distance(::simple_drive_control::srv::DrivingManeuver_Request & msg)
  : msg_(msg)
  {}
  ::simple_drive_control::srv::DrivingManeuver_Request distance(::simple_drive_control::srv::DrivingManeuver_Request::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_drive_control::srv::DrivingManeuver_Request msg_;
};

class Init_DrivingManeuver_Request_steering
{
public:
  explicit Init_DrivingManeuver_Request_steering(::simple_drive_control::srv::DrivingManeuver_Request & msg)
  : msg_(msg)
  {}
  Init_DrivingManeuver_Request_distance steering(::simple_drive_control::srv::DrivingManeuver_Request::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_DrivingManeuver_Request_distance(msg_);
  }

private:
  ::simple_drive_control::srv::DrivingManeuver_Request msg_;
};

class Init_DrivingManeuver_Request_direction
{
public:
  Init_DrivingManeuver_Request_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrivingManeuver_Request_steering direction(::simple_drive_control::srv::DrivingManeuver_Request::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_DrivingManeuver_Request_steering(msg_);
  }

private:
  ::simple_drive_control::srv::DrivingManeuver_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_drive_control::srv::DrivingManeuver_Request>()
{
  return simple_drive_control::srv::builder::Init_DrivingManeuver_Request_direction();
}

}  // namespace simple_drive_control


namespace simple_drive_control
{

namespace srv
{

namespace builder
{

class Init_DrivingManeuver_Response_success
{
public:
  Init_DrivingManeuver_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simple_drive_control::srv::DrivingManeuver_Response success(::simple_drive_control::srv::DrivingManeuver_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_drive_control::srv::DrivingManeuver_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_drive_control::srv::DrivingManeuver_Response>()
{
  return simple_drive_control::srv::builder::Init_DrivingManeuver_Response_success();
}

}  // namespace simple_drive_control

#endif  // SIMPLE_DRIVE_CONTROL__SRV__DETAIL__DRIVING_MANEUVER__BUILDER_HPP_
