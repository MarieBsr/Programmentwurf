#define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

#define the project name
project(DeveloperGroupF C)

#define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

#add some compile options
add_compile_options(-Wall -Wextra -pedantic )

#add an executable and assign files to it
include_directories(${CMAKE_SOURCE_DIR}/include)
add_executable(DeveloperGroupF src/developer.c src/main.c src/developer_group.c)
