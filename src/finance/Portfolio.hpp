#ifndef FINANCE_PORTFOLIO_HPP_
#define FINANCE_PORTFOLIO_HPP_

#include <vector>
#include <mutex>
#include <memory>

#include "IPortfolio.hpp"
#include "Position.hpp"



class Portfolio : public IPortfolio
{

public:

	bool enterPosition(std::shared_ptr<Position>);
	bool enterPosition(int tracker, PositionType position, double value);
	bool exitPosition(std::shared_ptr<Position>);
	bool exitPosition(int tracker, PositionType position);

private:

	std::vector<Position> _positions;



};



#endif
