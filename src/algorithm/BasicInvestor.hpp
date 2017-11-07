#ifndef BACKTESTERS_BENCHMARKS_BASICINVESTOR_HPP_
#define BACKTESTERS_BENCHMARKS_BASICINVESTOR_HPP_

#include <vector>

#include "../finance/Position.hpp"
#include "../stocks/Stock.hpp"
#include "../stocks/IStockRegistry.hpp"

#include "IAlgorithm.hpp"

/*
 * Takes a stock, buys it at the start & holds it until the end of the test
 *
 */
class BasicInvestor : public IAlgorithm
{

public:

    BasicInvestor(std::shared_ptr<IWallet>);
	BasicInvestor();
    ~BasicInvestor();

    void setWallet(std::shared_ptr<IWallet> wallet);
	void setStockRegistry(std::shared_ptr<IStockRegistry> stock);
	void run();


private:

	Position _positions;
    std::shared_ptr<IWallet> _wallet;
    std::shared_ptr<IStockRegistry> _stock_registry;


};


#endif
