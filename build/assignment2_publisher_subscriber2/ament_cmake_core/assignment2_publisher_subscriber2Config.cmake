# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_assignment2_publisher_subscriber2_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED assignment2_publisher_subscriber2_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(assignment2_publisher_subscriber2_FOUND FALSE)
  elseif(NOT assignment2_publisher_subscriber2_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(assignment2_publisher_subscriber2_FOUND FALSE)
  endif()
  return()
endif()
set(_assignment2_publisher_subscriber2_CONFIG_INCLUDED TRUE)

# output package information
if(NOT assignment2_publisher_subscriber2_FIND_QUIETLY)
  message(STATUS "Found assignment2_publisher_subscriber2: 0.0.0 (${assignment2_publisher_subscriber2_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'assignment2_publisher_subscriber2' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${assignment2_publisher_subscriber2_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(assignment2_publisher_subscriber2_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${assignment2_publisher_subscriber2_DIR}/${_extra}")
endforeach()
