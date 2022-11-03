// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from simple_parking_maneuver:srv/ParkingManeuver.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_PARKING_MANEUVER__SRV__DETAIL__PARKING_MANEUVER__BUILDER_HPP_
#define SIMPLE_PARKING_MANEUVER__SRV__DETAIL__PARKING_MANEUVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "simple_parking_maneuver/srv/detail/parking_maneuver__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace simple_parking_maneuver
{

namespace srv
{

namespace builder
{

class Init_ParkingManeuver_Request_direction
{
public:
  Init_ParkingManeuver_Request_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simple_parking_maneuver::srv::ParkingManeuver_Request direction(::simple_parking_maneuver::srv::ParkingManeuver_Request::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_parking_maneuver::srv::ParkingManeuver_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_parking_maneuver::srv::ParkingManeuver_Request>()
{
  return simple_parking_maneuver::srv::builder::Init_ParkingManeuver_Request_direction();
}

}  // namespace simple_parking_maneuver


namespace simple_parking_maneuver
{

namespace srv
{

namespace builder
{

class Init_ParkingManeuver_Response_info
{
public:
  Init_ParkingManeuver_Response_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::simple_parking_maneuver::srv::ParkingManeuver_Response info(::simple_parking_maneuver::srv::ParkingManeuver_Response::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::simple_parking_maneuver::srv::ParkingManeuver_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::simple_parking_maneuver::srv::ParkingManeuver_Response>()
{
  return simple_parking_maneuver::srv::builder::Init_ParkingManeuver_Response_info();
}

}  // namespace simple_parking_maneuver

#endif  // SIMPLE_PARKING_MANEUVER__SRV__DETAIL__PARKING_MANEUVER__BUILDER_HPP_
