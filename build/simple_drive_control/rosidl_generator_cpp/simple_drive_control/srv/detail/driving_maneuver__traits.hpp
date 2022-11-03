// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from simple_drive_control:srv/DrivingManeuver.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_DRIVE_CONTROL__SRV__DETAIL__DRIVING_MANEUVER__TRAITS_HPP_
#define SIMPLE_DRIVE_CONTROL__SRV__DETAIL__DRIVING_MANEUVER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "simple_drive_control/srv/detail/driving_maneuver__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace simple_drive_control
{

namespace srv
{

inline void to_flow_style_yaml(
  const DrivingManeuver_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: steering
  {
    out << "steering: ";
    rosidl_generator_traits::value_to_yaml(msg.steering, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DrivingManeuver_Request & msg,
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

  // member: steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering: ";
    rosidl_generator_traits::value_to_yaml(msg.steering, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DrivingManeuver_Request & msg, bool use_flow_style = false)
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

}  // namespace simple_drive_control

namespace rosidl_generator_traits
{

[[deprecated("use simple_drive_control::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simple_drive_control::srv::DrivingManeuver_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_drive_control::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_drive_control::srv::to_yaml() instead")]]
inline std::string to_yaml(const simple_drive_control::srv::DrivingManeuver_Request & msg)
{
  return simple_drive_control::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simple_drive_control::srv::DrivingManeuver_Request>()
{
  return "simple_drive_control::srv::DrivingManeuver_Request";
}

template<>
inline const char * name<simple_drive_control::srv::DrivingManeuver_Request>()
{
  return "simple_drive_control/srv/DrivingManeuver_Request";
}

template<>
struct has_fixed_size<simple_drive_control::srv::DrivingManeuver_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<simple_drive_control::srv::DrivingManeuver_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<simple_drive_control::srv::DrivingManeuver_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace simple_drive_control
{

namespace srv
{

inline void to_flow_style_yaml(
  const DrivingManeuver_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DrivingManeuver_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DrivingManeuver_Response & msg, bool use_flow_style = false)
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

}  // namespace simple_drive_control

namespace rosidl_generator_traits
{

[[deprecated("use simple_drive_control::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const simple_drive_control::srv::DrivingManeuver_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  simple_drive_control::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use simple_drive_control::srv::to_yaml() instead")]]
inline std::string to_yaml(const simple_drive_control::srv::DrivingManeuver_Response & msg)
{
  return simple_drive_control::srv::to_yaml(msg);
}

template<>
inline const char * data_type<simple_drive_control::srv::DrivingManeuver_Response>()
{
  return "simple_drive_control::srv::DrivingManeuver_Response";
}

template<>
inline const char * name<simple_drive_control::srv::DrivingManeuver_Response>()
{
  return "simple_drive_control/srv/DrivingManeuver_Response";
}

template<>
struct has_fixed_size<simple_drive_control::srv::DrivingManeuver_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<simple_drive_control::srv::DrivingManeuver_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<simple_drive_control::srv::DrivingManeuver_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<simple_drive_control::srv::DrivingManeuver>()
{
  return "simple_drive_control::srv::DrivingManeuver";
}

template<>
inline const char * name<simple_drive_control::srv::DrivingManeuver>()
{
  return "simple_drive_control/srv/DrivingManeuver";
}

template<>
struct has_fixed_size<simple_drive_control::srv::DrivingManeuver>
  : std::integral_constant<
    bool,
    has_fixed_size<simple_drive_control::srv::DrivingManeuver_Request>::value &&
    has_fixed_size<simple_drive_control::srv::DrivingManeuver_Response>::value
  >
{
};

template<>
struct has_bounded_size<simple_drive_control::srv::DrivingManeuver>
  : std::integral_constant<
    bool,
    has_bounded_size<simple_drive_control::srv::DrivingManeuver_Request>::value &&
    has_bounded_size<simple_drive_control::srv::DrivingManeuver_Response>::value
  >
{
};

template<>
struct is_service<simple_drive_control::srv::DrivingManeuver>
  : std::true_type
{
};

template<>
struct is_service_request<simple_drive_control::srv::DrivingManeuver_Request>
  : std::true_type
{
};

template<>
struct is_service_response<simple_drive_control::srv::DrivingManeuver_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SIMPLE_DRIVE_CONTROL__SRV__DETAIL__DRIVING_MANEUVER__TRAITS_HPP_
