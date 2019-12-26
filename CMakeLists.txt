cmake_minimum_required(VERSION 3.14)

add_subdirectory(Unity)

project(TEST_UNITY C)

include(CTest)

add_executable(${PROJECT_NAME} main.c Unity/extras/fixture/src/unity_fixture.c Unity/extras/memory/src/unity_memory.c)
add_test(test_1 ${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME} unity)
target_include_directories(${PROJECT_NAME} PRIVATE Unity/extras/memory/src Unity/extras/fixture/src Unity/src)