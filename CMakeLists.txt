cmake_minimum_required(VERSION 3.24)
project(Simple_Book_Management_Program)

set(CMAKE_CXX_STANDARD 17)

include_directories(./EasyX/include)
link_directories(./EasyX/lib64)
link_libraries(libeasyx.a)

add_executable(Simple_Book_Management_Program main.cpp)
