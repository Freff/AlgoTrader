#ifndef ALGOTRADER_IWALLET_HPP
#define ALGOTRADER_IWALLET_HPP

class IWallet
{
    virtual double getBalance() const = 0;
    virtual void setBalance(double newBalance) = 0;

    virtual bool makeTransaction(double cost) = 0;
};

#endif
