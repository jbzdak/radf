cmake_minimum_required(VERSION 3.2)
project(radf)

include(local/BoostVarsLoca.cmake)

FIND_PACKAGE(Boost 1.58 COMPONENTS unit_test_framework system filesystem REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wpedantic -Wextra -Weffc++ -Werror")

file(GLOB HEADER_FILES src/*h)
file(GLOB SOURCE_FILES src/*cpp)

file(GLOB TEST_HEADER_FILES test_src/*h)
file(GLOB TEST_SOURCE_FILES test_src/*cpp)

add_executable(radf main.cpp ${SOURCE_FILES})
add_executable(radf_tests test_main.cpp ${SOURCE_FILES} ${TEST_SOURCE_FILES})

TARGET_LINK_LIBRARIES(radf ${Boost_LIBRARIES})
TARGET_LINK_LIBRARIES(radf_tests ${Boost_LIBRARIES})

include_directories(SYSTEM ${Boost_INCLUDE_DIR})

add_executable(__clion_header_add main.cpp ${HEADER_FILES} ${TEST_HEADER_FILES})