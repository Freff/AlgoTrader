#ifndef ALGOTRADER_ISTOCKREGISTRY_HPP
#define ALGOTRADER_ISTOCKREGISTRY_HPP

#include <string>

class IStockRegistry
{
public:
    ~IStockRegistry() = default;


    virtual void load(std::string) = 0;

};

#endif
