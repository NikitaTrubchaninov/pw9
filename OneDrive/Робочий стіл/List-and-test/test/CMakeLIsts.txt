add_executable(LinkedListTests test_main.cpp)

target_link_libraries(LinkedListTests PRIVATE list)

target_include_directories(LinkedListTests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../list)

enable_testing()
add_test(NAME LinkedListTests COMMAND LinkedListTests)