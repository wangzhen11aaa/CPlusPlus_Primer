cmake_minimum_required(VERSION 3.5)
project(Cpp_book)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        charpter2/Example.cpp
    README.md charpter2/exercise2.cpp)

add_executable(Cpp_book ${SOURCE_FILES})