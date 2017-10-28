//============================================================================
// Name        : AlgoTrader.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>

#include "tradeloops/MinuteLoop.hpp"

#include "backtesters/benchmarks/BasicInvestor.hpp"

//Date	Time	Open	High	Low	Close	Volume


int main()
{

    std::shared_ptr<BasicInvestor> basicTest = std::make_shared<BasicInvestor>();

    basicTest->runTest();

}
