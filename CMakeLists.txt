cmake_minimum_required(VERSION 3.5)
project(Cpp_book)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        charpter2/Example.cpp
    README.md charpter2/exercise2.cpp chapter3/exercise4.cpp chapter3/exercise6.cpp chapter3/exercise5.cpp chapter3/exercise7.cpp chapter4/exercise1.cpp chapter4/exercise2.cpp chapter4/exercise3.cpp chapter4/exercise4.cpp chapter4/test_array_c11.cpp chapter4/exercise5.cpp chapter4/exercise6.cpp chapter4/exercise4.cpp chapter4/exercise7.cpp chapter4/exercise10.cpp chapter5/exercise1.cpp chapter5/exercise2.cpp chapter5/exercise3.cpp chapter5/exercise4.cpp chapter5/exercise5.cpp chapter5/exercise6.cpp chapter5/exercise7.cpp chapter5/exercise8.cpp chapter5/exercise9.cpp chapter5/exercise10.cpp)

add_executable(Cpp_book ${SOURCE_FILES})