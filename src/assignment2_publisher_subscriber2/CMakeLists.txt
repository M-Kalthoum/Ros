cmake_minimum_required(VERSION 3.8)
project(assignment2_publisher_subscriber2)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(autominy_msgs REQUIRED)


# Install Python modules
install(PROGRAMS src/publisher.py DESTINATION lib/${PROJECT_NAME})
install(PROGRAMS src/subscriber.py DESTINATION lib/${PROJECT_NAME})


ament_package()
