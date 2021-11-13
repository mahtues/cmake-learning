cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STARDARD_REQUIRED ON)

project(hello VERSION 1.0)

find_package(SFML 2 REQUIRED network audio graphics window system)
find_library(ZLIB z REQUIRED)

add_subdirectory(foo)

add_executable(hello main.cpp)
target_include_directories(hello PUBLIC ${SFML_INCLUDE_DIRS})
target_link_libraries(hello PUBLIC foo ${SFML_LIBRARIES} ${SFML_DEPENDENCIES} ${ZLIB})

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

print_all_variables()
