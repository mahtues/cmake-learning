cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STARDARD_REQUIRED ON)

project(hello VERSION 1.0)

add_subdirectory(foo)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

add_executable(hello main.cpp)
include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})
target_link_libraries(hello PUBLIC foo ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES})

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

#get_cmake_property(_variableNames VARIABLES)
#foreach (_variableName ${_variableNames})
#  message(STATUS "${_variableName}=${${_variableName}}")
#endforeach()
