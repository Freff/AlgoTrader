cmake_minimum_required(VERSION 3.8)
project(AlgoTrader)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        src/backtesters/benchmarks/BasicInvestor.cpp
        src/backtesters/benchmarks/BasicInvestor.hpp
        src/backtesters/benchmarks/IBenchmark.hpp
        src/backtesters/BasicBackTester.cpp
        src/backtesters/BasicBacktester.hpp
        src/backtesters/IBackTester.hpp
        src/common/CSVRow.cpp
        src/common/CSVRow.hpp
        src/DataLoaders/CSVDataLoader.cpp
        src/DataLoaders/CSVDataLoader.hpp
        src/DataLoaders/IDataLoader.hpp
        src/finance/exitconditions/IExitCondition.hpp
        src/finance/exitconditions/NeverExitCondition.cpp
        src/finance/exitconditions/NeverExitCondition.hpp
        src/finance/IPortfolio.hpp
        src/finance/IPosition.hpp
        src/finance/Portfolio.cpp
        src/finance/Portfolio.hpp
        src/finance/Position.cpp
        src/finance/Position.hpp
        src/finance/Stock.cpp
        src/finance/Stock.hpp
        src/finance/Wallet.cpp
        src/finance/Wallet.hpp
        src/tradeloops/ITradeLoop.hpp
        src/tradeloops/MinuteLoop.cpp
        src/tradeloops/MinuteLoop.hpp
        src/traders/BasicTrader.cpp
        src/traders/BasicTrader.hpp
        src/traders/ITrader.hpp
        src/AlgoTrader.cpp
        README.md)

add_executable(AlgoTrader ${SOURCE_FILES})