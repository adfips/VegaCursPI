cmake_minimum_required(VERSION 3.14)
project(VegaCurse)

include_directories(include)

add_executable(main main.cpp src/add.cpp)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(tests tests/testAdd.cpp src/add.cpp)
target_link_libraries(tests gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)