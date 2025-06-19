cmake_minimum_required(VERSION 3.10)
project(TicTacToe)

set(USE_SHARED_LIB OFF CACHE BOOL "Build shared library")

if(USE_SHARED_LIB)
    set(LIB_TYPE SHARED)
else()
    set(LIB_TYPE STATIC)
endif()

# Створення бібліотеки
add_library(libttc ${LIB_TYPE}
    src/board.cpp
    src/game.cpp
    src/moves.cpp
)

target_include_directories(libttc PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Додавання виконуваного файлу
add_executable(TicTacToe src/main.cpp)
target_link_libraries(TicTacToe libttc)