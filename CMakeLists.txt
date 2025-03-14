#define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

#define the project name
project(DeveloperGroupF C)

#define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

#add some compile options
add_compile_options(-Wall -Wextra -pedantic )

#add a library
add_library(developer_and_developer_group STATIC src/developer.c src/developer_group.c)

#add the includes to the array
target_include_directories (developer_and_developer_group PUBLIC include)

#add an executable and assign files to it
add_executable(DeveloperGroupF src/developer.c src/main.c src/developer_group.c)

#add the include directories
target_include_directories (DeveloperGroupF PUBLIC include)

#link your libraries
target_link_libraries(DeveloperGroupF PRIVATE developer_and_developer_group)
