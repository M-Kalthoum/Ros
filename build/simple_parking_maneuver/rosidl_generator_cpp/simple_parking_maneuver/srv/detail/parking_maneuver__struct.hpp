// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simple_parking_maneuver:srv/ParkingManeuver.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_PARKING_MANEUVER__SRV__DETAIL__PARKING_MANEUVER__STRUCT_HPP_
#define SIMPLE_PARKING_MANEUVER__SRV__DETAIL__PARKING_MANEUVER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__simple_parking_maneuver__srv__ParkingManeuver_Request __attribute__((deprecated))
#else
# define DEPRECATED__simple_parking_maneuver__srv__ParkingManeuver_Request __declspec(deprecated)
#endif

namespace simple_parking_maneuver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ParkingManeuver_Request_
{
  using Type = ParkingManeuver_Request_<ContainerAllocator>;

  explicit ParkingManeuver_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
    }
  }

  explicit ParkingManeuver_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
    }
  }

  // field types and members
  using _direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _direction_type direction;

  // setters for named parameter idiom
  Type & set__direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->direction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simple_parking_maneuver::srv::ParkingManeuver_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_parking_maneuver::srv::ParkingManeuver_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_parking_maneuver::srv::ParkingManeuver_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_parking_maneuver::srv::ParkingManeuver_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_parking_maneuver::srv::ParkingManeuver_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_parking_maneuver::srv::ParkingManeuver_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_parking_maneuver::srv::ParkingManeuver_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_parking_maneuver::srv::ParkingManeuver_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_parking_maneuver::srv::ParkingManeuver_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_parking_maneuver::srv::ParkingManeuver_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_parking_maneuver__srv__ParkingManeuver_Request
    std::shared_ptr<simple_parking_maneuver::srv::ParkingManeuver_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_parking_maneuver__srv__ParkingManeuver_Request
    std::shared_ptr<simple_parking_maneuver::srv::ParkingManeuver_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParkingManeuver_Request_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParkingManeuver_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParkingManeuver_Request_

// alias to use template instance with default allocator
using ParkingManeuver_Request =
  simple_parking_maneuver::srv::ParkingManeuver_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simple_parking_maneuver


#ifndef _WIN32
# define DEPRECATED__simple_parking_maneuver__srv__ParkingManeuver_Response __attribute__((deprecated))
#else
# define DEPRECATED__simple_parking_maneuver__srv__ParkingManeuver_Response __declspec(deprecated)
#endif

namespace simple_parking_maneuver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ParkingManeuver_Response_
{
  using Type = ParkingManeuver_Response_<ContainerAllocator>;

  explicit ParkingManeuver_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->info = "";
    }
  }

  explicit ParkingManeuver_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->info = "";
    }
  }

  // field types and members
  using _info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _info_type info;

  // setters for named parameter idiom
  Type & set__info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simple_parking_maneuver::srv::ParkingManeuver_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_parking_maneuver::srv::ParkingManeuver_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_parking_maneuver::srv::ParkingManeuver_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_parking_maneuver::srv::ParkingManeuver_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_parking_maneuver::srv::ParkingManeuver_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_parking_maneuver::srv::ParkingManeuver_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_parking_maneuver::srv::ParkingManeuver_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_parking_maneuver::srv::ParkingManeuver_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_parking_maneuver::srv::ParkingManeuver_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_parking_maneuver::srv::ParkingManeuver_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_parking_maneuver__srv__ParkingManeuver_Response
    std::shared_ptr<simple_parking_maneuver::srv::ParkingManeuver_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_parking_maneuver__srv__ParkingManeuver_Response
    std::shared_ptr<simple_parking_maneuver::srv::ParkingManeuver_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParkingManeuver_Response_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParkingManeuver_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParkingManeuver_Response_

// alias to use template instance with default allocator
using ParkingManeuver_Response =
  simple_parking_maneuver::srv::ParkingManeuver_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simple_parking_maneuver

namespace simple_parking_maneuver
{

namespace srv
{

struct ParkingManeuver
{
  using Request = simple_parking_maneuver::srv::ParkingManeuver_Request;
  using Response = simple_parking_maneuver::srv::ParkingManeuver_Response;
};

}  // namespace srv

}  // namespace simple_parking_maneuver

#endif  // SIMPLE_PARKING_MANEUVER__SRV__DETAIL__PARKING_MANEUVER__STRUCT_HPP_
