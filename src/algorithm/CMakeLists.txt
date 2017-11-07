cmake_minimum_required(VERSION 3.8)
project(AlgoTrader)

set(CMAKE_CXX_STANDARD 14)

set(HEADERS
        IAlgorithmRegistry.hpp
        IAlgorithm.hpp
        BasicInvestor.hpp

        AlgorithmRegistry.hpp
        )

set(SOURCE_FILES

        AlgorithmRegistry.cpp
        BasicInvestor.cpp
        )


add_library(algorithm ${SOURCE_FILES} ${HEADERS})
target_link_libraries(algorithm finance)