cmake_minimum_required(VERSION 3.24)
project(cpp_sandbox)

set(CMAKE_CXX_STANDARD 23)

add_executable(cpp_sandbox Source/main.cpp)
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(cpp_sandbox sfml-system sfml-window sfml-graphics sfml-audio sfml-network)