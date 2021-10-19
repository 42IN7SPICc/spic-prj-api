cmake_minimum_required(VERSION 3.16)
project(api)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCE *.cpp *.hpp)
add_executable(${PROJECT_NAME} ${SOURCE})