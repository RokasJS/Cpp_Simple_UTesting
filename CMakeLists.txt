cmake_minimum_required(VERSION 3.19)
project(Cpp_Unit_Testing VERSION 1.0)

add_subdirectory(Tests)
add_subdirectory(Src)

target_include_directories(tests PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/Src")
target_include_directories(mains PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/Tests/Src")