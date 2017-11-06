#ifndef BACKTESTERS_BENCHMARKS_BASICINVESTOR_HPP_
#define BACKTESTERS_BENCHMARKS_BASICINVESTOR_HPP_

#include <vector>

#include "../finance/Position.hpp"
#include "../finance/Stock.hpp"
#include "../stocks/IStockRegistry.hpp"

#include "IAlgorithm.hpp"

/*
 * Takes a stock, buys it at the start & holds it until the end of the test
 *
 */
class BasicInvestor : public IAlgorithm
{

public:

	BasicInvestor();
    ~BasicInvestor();

	void setStockRegistry(std::shared_ptr<IStockRegistry> stock);
	void run();


private:

	Position _positions;


};


#endif
