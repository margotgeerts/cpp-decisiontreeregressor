cmake_minimum_required(VERSION 3.20)

set(ProjectName RegressionTree)

project(${ProjectName} CXX)

#set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# require C++17
#set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z  -stdlib=libc++") 

add_compile_options(-O3 -Wall)

set(Headers
    Node.hpp
    CSVReader.hpp
    RegressionTree.hpp
)

set(Source
    Node.cpp
    CSVReader.cpp
    RegressionTree.hpp
    main.cpp
)

add_library(${ProjectName} SHARED ${Source} ${Headers})

add_subdirectory(test)