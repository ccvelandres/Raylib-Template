cmake_minimum_required(VERSION 3.15)
project(Raylib-Template)

find_package(raylib 3.0 REQUIRED) # Requires at least version 3.0

set(CMAKE_C_STANDARD 11) # Requires C11 standard
# set(CMAKE_CPP_STANDARD 20) # Requires C++20 standard

file(GLOB_RECURSE SRC_C_CORE core/src/*.c)
file(GLOB_RECURSE SRC_CPP_CORE core/src/*.cpp)

message(${SRC_CPP_CORE})

add_executable(${PROJECT_NAME} ${SRC_C_CORE} ${SRC_CPP_CORE})

target_include_directories(${PROJECT_NAME} PUBLIC core/include)
target_include_directories(${PROJECT_NAME} PRIVATE core/src/include)

target_link_libraries(${PROJECT_NAME} PUBLIC raylib)

# Checks if OSX and links appropriate frameworks (only required on MacOS)
if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif()