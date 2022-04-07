cmake_minimum_required(VERSION 3.20)

set(ProjectName RegressionTests)

set(Sources
    NodeTests.cpp
    CSVReaderTests.cpp
    RegressionTreeTests.cpp
)

add_executable(${ProjectName} ${Sources})

target_link_libraries(${ProjectName} PUBLIC
    gtest_main
    RegressionTree
)

add_test(
    NAME ${ProjectName}
    COMMAND ${ProjectName}
)