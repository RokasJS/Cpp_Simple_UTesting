add_executable(runTests main.cpp)
add_library(
    mains
    main.cpp
    main.hpp
)
target_link_libraries(runTests PRIVATE tests)
target_link_libraries(runTests PRIVATE mains)