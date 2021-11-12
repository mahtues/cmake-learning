cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STARDARD_REQUIRED ON)

project(hello VERSION 1.0)

add_library(foo STATIC foo/src/foo.cpp)
target_include_directories(foo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/foo/include)

add_executable(hello main.cpp)
target_link_libraries(hello PUBLIC foo)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
