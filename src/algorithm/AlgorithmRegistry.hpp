#ifndef ALGOTRADER_ALGORITHMREGISTRY_HPP
#define ALGOTRADER_ALGORITHMREGISTRY_HPP


#include <map>
#include <string>
#include "IAlgorithmRegistry.hpp"

class AlgorithmRegistry : public IAlgorithmRegistry
{

public:
    AlgorithmRegistry() = default;

    void addAlgorithm(std::string, std::shared_ptr<IAlgorithm>) override;

    std::shared_ptr<IAlgorithm> getAlgorithm(std::string) override;


private:

    std::map<std::string, std::shared_ptr<IAlgorithm>> _algorithms;
};


#endif