#include "AlgorithmRegistry.hpp"

void AlgorithmRegistry::addAlgorithm(std::string name, std::shared_ptr<IAlgorithm> algorithm)
{
    _algorithms.insert(std::make_pair(name, algorithm));
}

std::shared_ptr<IAlgorithm> AlgorithmRegistry::getAlgorithm(std::string name)
{
    auto found = _algorithms.find(name);

    // TODO: replace with throw
    if (_algorithms.end() == found)
    {
        return nullptr;
    }

    return found->second;
}