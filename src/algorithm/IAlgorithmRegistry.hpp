#ifndef ALGOTRADER_IALGORITHMREGISTRY_HPP
#define ALGOTRADER_IALGORITHMREGISTRY_HPP

#include <string>
#include <memory>

#include "IAlgorithm.hpp"


class IAlgorithmRegistry
{
public:
    ~IAlgorithmRegistry() = default;

    virtual void addAlgorithm(std::string, std::shared_ptr<IAlgorithm>) = 0;

    virtual std::shared_ptr<IAlgorithm> getAlgorithm(std::string) = 0;
};


#endif