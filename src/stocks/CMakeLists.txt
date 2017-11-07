cmake_minimum_required(VERSION 3.8)
project(AlgoTrader)

set(CMAKE_CXX_STANDARD 14)

set(HEADERS

        IStock.hpp
        Stock.hpp

        IStockRegistry.hpp
        StockRegistry.hpp
        )

set(SOURCE_FILES
        Stock.cpp
        StockRegistry.cpp
)


add_library(stocks ${SOURCE_FILES} ${HEADERS})