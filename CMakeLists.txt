cmake_minimum_required(VERSION 3.17)
project(kbartecki_pjc_2)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp)
add_executable(kbartecki_pjc_2 ${SOURCE_FILES})

include_directories(TaskTwoLib)
add_subdirectory(TaskTwoLib)

target_link_libraries(kbartecki_pjc_2 TaskTwoLib)

add_subdirectory(Google_tests)