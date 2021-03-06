cmake_minimum_required(VERSION 3.8)
project(AlgoTrader)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory (googletest)
add_subdirectory(curlpp)
add_subdirectory(json)
enable_testing()
include_directories(googletest/googletest/include googletest/googletest)
include_directories(googletest/googlemock/include googletest/googlemock)

include_directories(curlpp/include curlpp)
include_directories(json/src)


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
target_link_libraries(AlgoTrader finance algorithm stocks curlpp)

set(TEST_FILES
        test/finance/TestWallet.cpp
        test/stocks/TestStockFlow.cpp)

add_executable(TestAlgo ${TEST_FILES})
target_link_libraries(TestAlgo finance algorithm stocks)

target_link_libraries(TestAlgo gtest gtest_main gmock)

