#ifndef ALGOTRADER_IALGORITHM_HPP
#define ALGOTRADER_IALGORITHM_HPP

#include <memory>

#include "../stocks/IStockRegistry.hpp"
#include "../finance/IWallet.hpp"

class IAlgorithm
{
public:
    ~IAlgorithm() = default;

    virtual void setWallet(std::shared_ptr<IWallet>) = 0;
    virtual void setStockRegistry(std::shared_ptr<IStockRegistry> stock) = 0;
    virtual void run() = 0;
};

#endif
