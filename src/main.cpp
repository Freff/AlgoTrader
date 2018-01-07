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

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Exception.hpp>
#include <curlpp/Infos.hpp>

#include <json.hpp>

#include <sstream>
#include <fstream>

using json = nlohmann::json;


//Date	Time	Open	High	Low	Close	Volume


int main()
{
//    std::shared_ptr<IWallet> wallet = std::make_shared<Wallet>(1000.0);
//    std::shared_ptr<IStockRegistry> sr = std::make_shared<StockRegistry>();
//    sr->load("IBM", "res/IBM_unadjusted.txt");
//
//    std::shared_ptr<IAlgorithmRegistry> ar = std::make_shared<AlgorithmRegistry>();
//    ar->addAlgorithm("basic", std::make_shared<BasicInvestor>(wallet));
//
//    auto a = ar->getAlgorithm("basic");
//    a->run();

    std::ifstream inFile("secret-api-key.txt");

    std::string secret;

    if(inFile.good())
    {
        std::getline(inFile, secret);
    }

    inFile.close();



    std::string url = "https://www.alphavantage.co/query?function=TIME_SERIES_INTRADAY&symbol=MSFT&outputsize=compact&interval=1min&apikey=" + secret;

    try
    {
        curlpp::Cleanup cleaner;
        curlpp::Easy request;
        std::stringstream result;

        using namespace curlpp::Options;
        request.setOpt(cURLpp::Options::Verbose(true));
        request.setOpt(cURLpp::Options::Url(url));
        request.setOpt(cURLpp::Options::WriteStream(&result));

        request.perform();

        std::string effURL;
        curlpp::infos::EffectiveUrl::get(request, effURL);

        std::cout << result.str();

        auto parsedResult = json::parse(result.str());

        for (auto& element : parsedResult) {
            //std::cout << element << std::endl;
        }

    }
    catch ( curlpp::LogicError & e ) {
        std::cout << e.what() << std::endl;
    }
    catch ( curlpp::RuntimeError & e ) {
        std::cout << e.what() << std::endl;
    }



}
