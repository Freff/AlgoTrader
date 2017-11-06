cmake_minimum_required(VERSION 3.8)
project(AlgoTrader)

ADD_SUBDIRECTORY (googletest)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_subdirectory(src/finance)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES

        src/algorithm/IAlgorithmRegistry.hpp
        src/algorithm/IAlgorithm.hpp
        src/algorithm/BasicInvestor.hpp
        src/algorithm/BasicInvestor.cpp

        src/common/CSVRow.hpp
        src/common/CSVRow.cpp

        src/DataLoaders/CSVDataLoader.hpp
        src/DataLoaders/CSVDataLoader.cpp
        src/DataLoaders/IDataLoader.hpp

        src/stocks/IStockRegistry.hpp

        src/main.cpp
        src/stocks/StockRegistry.cpp
        src/stocks/StockRegistry.hpp
        src/algorithm/AlgorithmRegistry.cpp
        src/algorithm/AlgorithmRegistry.hpp )



add_executable(AlgoTrader ${SOURCE_FILES})

set(TEST_FILES
        test/finance/TestWallet.cpp)

add_executable(TestAlgo ${TEST_FILES})
target_link_libraries(TestAlgo finance)

target_link_libraries(TestAlgo gtest gtest_main)