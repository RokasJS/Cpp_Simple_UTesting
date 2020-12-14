add_library(
    tests
    Src/testing.cpp
    Src/testing.hpp
)

target_include_directories(tests PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/Src")