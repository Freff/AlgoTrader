cmake_minimum_required(VERSION 3.8)
project(AlgoTrader)

set(CMAKE_CXX_STANDARD 14)

ADD_SUBDIRECTORY (googletest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_subdirectory(src/finance)
add_subdirectory(src/algorithm)
add_subdirectory(src/stocks)


set(SOURCE_FILES



        src/common/CSVRow.hpp
        src/common/CSVRow.cpp

        src/DataLoaders/CSVDataLoader.hpp
        src/DataLoaders/CSVDataLoader.cpp
        src/DataLoaders/IDataLoader.hpp


        src/main.cpp
        )



add_executable(AlgoTrader ${SOURCE_FILES})
target_link_libraries(AlgoTrader finance algorithm stocks)

set(TEST_FILES
        test/finance/TestWallet.cpp)

add_executable(TestAlgo ${TEST_FILES})
target_link_libraries(TestAlgo finance algorithm stocks)

target_link_libraries(TestAlgo gtest gtest_main)