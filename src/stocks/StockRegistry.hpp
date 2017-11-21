#ifndef ALGOTRADER_STOCKREGISTRY_HPP
#define ALGOTRADER_STOCKREGISTRY_HPP

#include <memory>
#include <vector>
#include <map>

#include "IStockRegistry.hpp"

class StockRegistry : public IStockRegistry
{

public:
    StockRegistry();

    void load(std::string name, std::string path) override;
    std::shared_ptr<IStock> getStock(std::string) override;
    void subscribe (std::string stockName) override;

private:

    //std::map<std::string, std::vector<std::shared_ptr<IAlgorithm>>> _subscribers;

};


#endif