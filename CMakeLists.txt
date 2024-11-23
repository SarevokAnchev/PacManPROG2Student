cmake_minimum_required(VERSION 3.26)
project(PacManPROG2)

set(CMAKE_CXX_STANDARD 14)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(PacManPROG2 main.cpp
        PacManGame.cpp
        Map.cpp
        ConsoleRendering.cpp
        sdl_demo.cpp)

target_link_libraries(PacManPROG2 ${SDL2_LIBRARIES})
