

#include "Position.hpp"


Position::Position()
{

}

Position::Position(std::shared_ptr<Stock> stock , PositionType type, double value, std::unique_ptr<IExitCondition> exitCondition )
	: _stock(stock), _positionType(type), _positionValue(value), _exitCondition(std::move(exitCondition))
{
	_stocksOwned = value / _stock->getHigh();
}

double Position::getValue()
{
	return _stocksOwned * _stock->getHigh();
}
