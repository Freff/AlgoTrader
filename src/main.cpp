//============================================================================
// Name        : AlgoTrader.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>

#include "algorithm/BasicInvestor.hpp"
#include "finance/Wallet.hpp"
#include "stocks/StockRegistry.hpp"
#include "algorithm/IAlgorithmRegistry.hpp"
#include "algorithm/AlgorithmRegistry.hpp"

//Date	Time	Open	High	Low	Close	Volume


int main()
{
    std::shared_ptr<IWallet> wallet = std::make_shared<Wallet>(1000.0);
    std::shared_ptr<IStockRegistry> sr = std::make_shared<StockRegistry>();
    sr->load("IBM", "res/IBM_unadjusted.txt");

    std::shared_ptr<IAlgorithmRegistry> ar = std::make_shared<AlgorithmRegistry>();
    ar->addAlgorithm("basic", std::make_shared<BasicInvestor>(wallet));

    auto a = ar->getAlgorithm("basic");
    a->run();

}
