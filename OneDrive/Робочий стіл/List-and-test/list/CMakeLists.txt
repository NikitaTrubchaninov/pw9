add_library(list STATIC list.cpp list.hpp)

target_include_directories(list PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})