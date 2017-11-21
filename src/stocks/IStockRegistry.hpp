#ifndef ALGOTRADER_ISTOCKREGISTRY_HPP
#define ALGOTRADER_ISTOCKREGISTRY_HPP

#include <string>
#include "IStock.hpp"

class IStockRegistry
{
public:
    virtual ~IStockRegistry() = default;


    virtual void load(std::string name, std::string path) = 0;
    virtual std::shared_ptr<IStock> getStock(std::string) = 0;
    virtual void subscribe(std::string stockName) = 0;

};

#endif
