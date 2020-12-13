add_library(
    tests SHARED
    Src/testing.cpp
    Src/testing.hpp
)

target_include_directories(tests PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/Src")