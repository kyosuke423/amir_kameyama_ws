# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_observation_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED observation_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(observation_FOUND FALSE)
  elseif(NOT observation_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(observation_FOUND FALSE)
  endif()
  return()
endif()
set(_observation_CONFIG_INCLUDED TRUE)

# output package information
if(NOT observation_FIND_QUIETLY)
  message(STATUS "Found observation: 0.0.0 (${observation_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'observation' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${observation_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(observation_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${observation_DIR}/${_extra}")
endforeach()
