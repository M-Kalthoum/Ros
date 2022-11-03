// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simple_parking_maneuver:srv/ParkingManeuver.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_PARKING_MANEUVER__SRV__DETAIL__PARKING_MANEUVER__TRAITS_HPP_
#define SIMPLE_PARKING_MANEUVER__SRV__DETAIL__PARKING_MANEUVER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simple_parking_maneuver/srv/detail/parking_maneuver__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simple_parking_maneuver
{

namespace srv
{

inline void to_flow_style_yaml(
  const ParkingManeuver_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParkingManeuver_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParkingManeuver_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace simple_parking_maneuver

namespace rosidl_generator_traits
{

[[deprecated("use simple_parking_maneuver::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simple_parking_maneuver::srv::ParkingManeuver_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_parking_maneuver::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_parking_maneuver::srv::to_yaml() instead")]]
inline std::string to_yaml(const simple_parking_maneuver::srv::ParkingManeuver_Request & msg)
{
  return simple_parking_maneuver::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simple_parking_maneuver::srv::ParkingManeuver_Request>()
{
  return "simple_parking_maneuver::srv::ParkingManeuver_Request";
}

template<>
inline const char * name<simple_parking_maneuver::srv::ParkingManeuver_Request>()
{
  return "simple_parking_maneuver/srv/ParkingManeuver_Request";
}

template<>
struct has_fixed_size<simple_parking_maneuver::srv::ParkingManeuver_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simple_parking_maneuver::srv::ParkingManeuver_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simple_parking_maneuver::srv::ParkingManeuver_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace simple_parking_maneuver
{

namespace srv
{

inline void to_flow_style_yaml(
  const ParkingManeuver_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParkingManeuver_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info: ";
    rosidl_generator_traits::value_to_yaml(msg.info, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParkingManeuver_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace simple_parking_maneuver

namespace rosidl_generator_traits
{

[[deprecated("use simple_parking_maneuver::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simple_parking_maneuver::srv::ParkingManeuver_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_parking_maneuver::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_parking_maneuver::srv::to_yaml() instead")]]
inline std::string to_yaml(const simple_parking_maneuver::srv::ParkingManeuver_Response & msg)
{
  return simple_parking_maneuver::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simple_parking_maneuver::srv::ParkingManeuver_Response>()
{
  return "simple_parking_maneuver::srv::ParkingManeuver_Response";
}

template<>
inline const char * name<simple_parking_maneuver::srv::ParkingManeuver_Response>()
{
  return "simple_parking_maneuver/srv/ParkingManeuver_Response";
}

template<>
struct has_fixed_size<simple_parking_maneuver::srv::ParkingManeuver_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simple_parking_maneuver::srv::ParkingManeuver_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simple_parking_maneuver::srv::ParkingManeuver_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simple_parking_maneuver::srv::ParkingManeuver>()
{
  return "simple_parking_maneuver::srv::ParkingManeuver";
}

template<>
inline const char * name<simple_parking_maneuver::srv::ParkingManeuver>()
{
  return "simple_parking_maneuver/srv/ParkingManeuver";
}

template<>
struct has_fixed_size<simple_parking_maneuver::srv::ParkingManeuver>
  : std::integral_constant<
    bool,
    has_fixed_size<simple_parking_maneuver::srv::ParkingManeuver_Request>::value &&
    has_fixed_size<simple_parking_maneuver::srv::ParkingManeuver_Response>::value
  >
{
};

template<>
struct has_bounded_size<simple_parking_maneuver::srv::ParkingManeuver>
  : std::integral_constant<
    bool,
    has_bounded_size<simple_parking_maneuver::srv::ParkingManeuver_Request>::value &&
    has_bounded_size<simple_parking_maneuver::srv::ParkingManeuver_Response>::value
  >
{
};

template<>
struct is_service<simple_parking_maneuver::srv::ParkingManeuver>
  : std::true_type
{
};

template<>
struct is_service_request<simple_parking_maneuver::srv::ParkingManeuver_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simple_parking_maneuver::srv::ParkingManeuver_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMPLE_PARKING_MANEUVER__SRV__DETAIL__PARKING_MANEUVER__TRAITS_HPP_
