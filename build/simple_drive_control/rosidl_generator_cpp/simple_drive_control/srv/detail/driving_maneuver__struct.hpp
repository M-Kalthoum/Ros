// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from simple_drive_control:srv/DrivingManeuver.idl
// generated code does not contain a copyright notice

#ifndef SIMPLE_DRIVE_CONTROL__SRV__DETAIL__DRIVING_MANEUVER__STRUCT_HPP_
#define SIMPLE_DRIVE_CONTROL__SRV__DETAIL__DRIVING_MANEUVER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__simple_drive_control__srv__DrivingManeuver_Request __attribute__((deprecated))
#else
# define DEPRECATED__simple_drive_control__srv__DrivingManeuver_Request __declspec(deprecated)
#endif

namespace simple_drive_control
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DrivingManeuver_Request_
{
  using Type = DrivingManeuver_Request_<ContainerAllocator>;

  explicit DrivingManeuver_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
      this->steering = "";
      this->distance = 0.0f;
    }
  }

  explicit DrivingManeuver_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc),
    steering(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
      this->steering = "";
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _direction_type direction;
  using _steering_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _steering_type steering;
  using _distance_type =
    float;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__steering(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simple_drive_control::srv::DrivingManeuver_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_drive_control::srv::DrivingManeuver_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_drive_control::srv::DrivingManeuver_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_drive_control::srv::DrivingManeuver_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_drive_control::srv::DrivingManeuver_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_drive_control::srv::DrivingManeuver_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_drive_control::srv::DrivingManeuver_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_drive_control::srv::DrivingManeuver_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_drive_control::srv::DrivingManeuver_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_drive_control::srv::DrivingManeuver_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_drive_control__srv__DrivingManeuver_Request
    std::shared_ptr<simple_drive_control::srv::DrivingManeuver_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_drive_control__srv__DrivingManeuver_Request
    std::shared_ptr<simple_drive_control::srv::DrivingManeuver_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrivingManeuver_Request_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrivingManeuver_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrivingManeuver_Request_

// alias to use template instance with default allocator
using DrivingManeuver_Request =
  simple_drive_control::srv::DrivingManeuver_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simple_drive_control


#ifndef _WIN32
# define DEPRECATED__simple_drive_control__srv__DrivingManeuver_Response __attribute__((deprecated))
#else
# define DEPRECATED__simple_drive_control__srv__DrivingManeuver_Response __declspec(deprecated)
#endif

namespace simple_drive_control
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DrivingManeuver_Response_
{
  using Type = DrivingManeuver_Response_<ContainerAllocator>;

  explicit DrivingManeuver_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit DrivingManeuver_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    simple_drive_control::srv::DrivingManeuver_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const simple_drive_control::srv::DrivingManeuver_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<simple_drive_control::srv::DrivingManeuver_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<simple_drive_control::srv::DrivingManeuver_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      simple_drive_control::srv::DrivingManeuver_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<simple_drive_control::srv::DrivingManeuver_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      simple_drive_control::srv::DrivingManeuver_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<simple_drive_control::srv::DrivingManeuver_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<simple_drive_control::srv::DrivingManeuver_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<simple_drive_control::srv::DrivingManeuver_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__simple_drive_control__srv__DrivingManeuver_Response
    std::shared_ptr<simple_drive_control::srv::DrivingManeuver_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__simple_drive_control__srv__DrivingManeuver_Response
    std::shared_ptr<simple_drive_control::srv::DrivingManeuver_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrivingManeuver_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrivingManeuver_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrivingManeuver_Response_

// alias to use template instance with default allocator
using DrivingManeuver_Response =
  simple_drive_control::srv::DrivingManeuver_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace simple_drive_control

namespace simple_drive_control
{

namespace srv
{

struct DrivingManeuver
{
  using Request = simple_drive_control::srv::DrivingManeuver_Request;
  using Response = simple_drive_control::srv::DrivingManeuver_Response;
};

}  // namespace srv

}  // namespace simple_drive_control

#endif  // SIMPLE_DRIVE_CONTROL__SRV__DETAIL__DRIVING_MANEUVER__STRUCT_HPP_
