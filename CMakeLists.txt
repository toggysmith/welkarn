# Configure CMake

## Requires CMake >=3.2
cmake_minimum_required(VERSION 3.2)

## Create C++ project
project(Welkarn VERSION 1.0
                LANGUAGES CXX)

## Configure C++ (we will use C++14)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


## Set up variables
set(WELKARN_SOURCE_FILES "src/core/Color.cpp" "src/geometry/Rectangle.cpp")
set(WELKARN_TEST_FILES "tests/core/ColorTest.cpp" "tests/geometry/RectangleTest.cpp")



# Create bundle of object files with necessary libraries

## Create object files and include headers
add_library(WelkarnObjects OBJECT ${WELKARN_SOURCE_FILES})
target_include_directories(WelkarnObjects PUBLIC src)

## Add fmt library
add_subdirectory(external/fmt-9.1.0)
target_link_libraries(WelkarnObjects fmt)



# Create the main executable

## Configure sanitizer options
if (USE_SANITIZER STREQUAL "Address")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
elseif (USE_SANITIZER STREQUAL "Thread")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=thread")
elseif (USE_SANITIZER STREQUAL "Undefined")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=undefined")
elseif (USE_SANITIZER STREQUAL "Leak")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=leak")
elseif (USE_SANITIZER STREQUAL "Memory")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=memory")
endif()

## Link in the object files with the main executable
add_executable(Welkarn src/Main.cpp)
target_link_libraries(Welkarn PUBLIC WelkarnObjects)





# Create the test runner executable
add_executable(WelkarnTester ${WELKARN_TEST_FILES})

# Add Google Test library
enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

target_link_libraries(WelkarnTester PUBLIC WelkarnObjects GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(WelkarnTester)