#ifndef FINANCE_POSITION_HPP_
#define FINANCE_POSITION_HPP_

#include <string>
#include <memory>

#include "IPosition.hpp"
#include "Stock.hpp"

#include "exitconditions/IExitCondition.hpp"


enum PositionType
{
	SHORT,
	LONG
};

class Position : public IPosition
{
public:

	Position();
	Position(int tracker, PositionType type, double value);
	Position(std::shared_ptr<Stock>, PositionType type, double value, std::unique_ptr<IExitCondition> exitCondition );

	void update();
	double getValue();

private:

	std::shared_ptr<Stock> _stock;
	PositionType _positionType;
	double _positionValue;
	std::unique_ptr<IExitCondition> _exitCondition;

	double _stocksOwned;

	//need both?
	int _trackerNumber;
	std::string symbol;

};


#endif
