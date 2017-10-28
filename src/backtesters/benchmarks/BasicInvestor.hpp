#ifndef BACKTESTERS_BENCHMARKS_BASICINVESTOR_HPP_
#define BACKTESTERS_BENCHMARKS_BASICINVESTOR_HPP_

#include <vector>

#include "../../finance/Position.hpp"
#include "../../finance/Stock.hpp"

/*
 * Takes a stock, buys it at the start & holds it until the end of the test
 *
 */
class BasicInvestor
{

public:

	BasicInvestor() = default;

	void setStock(Stock stock);
	void runTest();


private:

	Position _positions;


};


#endif
