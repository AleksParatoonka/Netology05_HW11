cmake_minimum_required(VERSION 3.10)
project(N05_HW11_Task03)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(N05_HW11_Task02_Library SHARED Leaver.h Leaver.cpp)



add_executable(cmake-library-Task03 N05_HW11_Task03.cpp)
target_link_libraries(cmake-library-Task03 N05_HW11_Task02_Library)