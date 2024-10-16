cmake_minimum_required(VERSION 3.28)

project(cpplearn VERSION 0.1.0
	DESCRIPTION "my learning path to learn cpp and its ecosystem"
	LANGUAGES CXX C)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if (NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE Release CACHE STRING "" FORCE)
endif()

add_library(cxx_setup INTERFACE)
target_compile_options(cxx_setup INTERFACE -Wall -Werror -Wextra -Wpedantic)
target_compile_features(cxx_setup INTERFACE cxx_std_20)
target_compile_features(cxx_setup INTERFACE c_std_17)
target_include_directories(cxx_setup INTERFACE ${PROJECT_SOURCE_DIR})

include(CTest)

add_subdirectory(${PROJECT_NAME})
add_subdirectory(bin)
add_subdirectory(vendor)
add_subdirectory(tests)

