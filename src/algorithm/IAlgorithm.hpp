#ifndef ALGOTRADER_IALGORITHM_HPP
#define ALGOTRADER_IALGORITHM_HPP

#include <memory>

#include "../stocks/IStockRegistry.hpp"

class IAlgorithm
{
public:
    ~IAlgorithm() = default;

    virtual void setStockRegistry(std::shared_ptr<IStockRegistry> stock) = 0;
    virtual void run() = 0;
};

#endif
