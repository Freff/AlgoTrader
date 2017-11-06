#ifndef ALGOTRADER_ALGORITHMREGISTRY_HPP
#define ALGOTRADER_ALGORITHMREGISTRY_HPP


#include "IAlgorithmRegistry.hpp"

class AlgorithmRegistry : public IAlgorithmRegistry
{

public:
    AlgorithmRegistry() = default;

    void addAlgorithm(std::string, std::shared_ptr<IAlgorithm>) override;

    std::shared_ptr<IAlgorithm> getAlgorithm(std::string) override;


};


#endif