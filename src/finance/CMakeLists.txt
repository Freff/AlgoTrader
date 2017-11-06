cmake_minimum_required(VERSION 3.8)
project(AlgoTrader)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES

        exitconditions/IExitCondition.hpp
        exitconditions/NeverExitCondition.hpp
        exitconditions/NeverExitCondition.cpp

        IPortfolio.hpp
        IPosition.hpp
        IWallet.hpp
        Portfolio.hpp
        Portfolio.cpp
        Position.hpp
        Position.cpp
        Stock.hpp
        Stock.cpp
        Wallet.hpp
        Wallet.cpp
)


add_library(finance ${SOURCE_FILES})