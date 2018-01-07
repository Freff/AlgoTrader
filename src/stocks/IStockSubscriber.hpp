#ifndef ALGOTRADER_ISTOCKSUBSCRIBER_HPP
#define ALGOTRADER_ISTOCKSUBSCRIBER_HPP

#include <memory>

#include "IStock.hpp"

class IStockSubscriber
{
public:
    virtual ~IStockSubscriber() = default;

    virtual void tick() = 0;
    virtual void tradingStart() = 0;
    virtual void dayStart() = 0;
    virtual void dayEnd() = 0;
    virtual void tradingEnd() = 0;

};


#endif