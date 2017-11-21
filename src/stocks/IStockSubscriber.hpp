#ifndef ALGOTRADER_ISTOCKSUBSCRIBER_HPP
#define ALGOTRADER_ISTOCKSUBSCRIBER_HPP

#include <memory>

#include "IStock.hpp"

class IStockSubscriber
{
public:
    virtual ~IStockSubscriber() = default;

    virtual void tick(IStock&) = 0;
    virtual void updated(IStock&) = 0;

};


#endif