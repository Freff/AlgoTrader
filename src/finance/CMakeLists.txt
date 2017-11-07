cmake_minimum_required(VERSION 3.8)
project(AlgoTrader)

set(CMAKE_CXX_STANDARD 14)

set(HEADERS
        exitconditions/IExitCondition.hpp
        exitconditions/NeverExitCondition.hpp

        IPortfolio.hpp
        IPosition.hpp
        IWallet.hpp
        Portfolio.hpp
        Position.hpp
        ../stocks/Stock.hpp
        Wallet.hpp
        )

set(SOURCE_FILES


        exitconditions/NeverExitCondition.cpp


        Portfolio.cpp

        Position.cpp

        ../stocks/Stock.cpp

        Wallet.cpp
)


add_library(finance ${SOURCE_FILES} ${HEADERS})