#ifndef ALGOTRADER_STOCKREGISTRY_HPP
#define ALGOTRADER_STOCKREGISTRY_HPP


#include "IStockRegistry.hpp"

class StockRegistry : public IStockRegistry
{

public:
    StockRegistry();

    void load(std::string) override;

};


#endif