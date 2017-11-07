#ifndef ALGOTRADER_STOCKREGISTRY_HPP
#define ALGOTRADER_STOCKREGISTRY_HPP

#include <memory>

#include "IStockRegistry.hpp"

class StockRegistry : public IStockRegistry
{

public:
    StockRegistry();

    void load(std::string) override;
    std::shared_ptr<IStock> getStock(std::string) override;

};


#endif