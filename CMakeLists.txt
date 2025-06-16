cmake_minimum_required(VERSION 3.27)
project(Cars)

set(CMAKE_CXX_STANDARD 17)

add_executable(Cars main.cpp task_manager.cpp car_registry.cpp)
