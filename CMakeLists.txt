cmake_minimum_required(VERSION 3.2)

option(BUILD_TESTS "Build test programs" OFF)

project(nbcrypt)

set(CMAKE_CXX_STANDARD 11)

add_library(${PROJECT_NAME} src/nbcrypt.cpp src/blowfish.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE src/)
target_include_directories(${PROJECT_NAME} PUBLIC include/)

if(BUILD_TESTS)
  add_executable(test test/main.cpp)
  target_link_libraries(test PRIVATE ${PROJECT_NAME})
endif()
