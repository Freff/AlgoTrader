#include "Stock.hpp"

#include <sstream>

double Stock::getOpen()
{
	return _open;
}
double Stock::getClose()
{
	return _close;
}
double Stock::getHigh()
{
	return _high;
}
double Stock::getLow()
{
	return _low;
}
double Stock::getVolume()
{
	return _volume;
}

void Stock::setOpen(double open)
{
	_open = open;
}
void Stock::setClose(double close)
{
	_close = close;
}
void Stock::setHigh(double high)
{
	_high = high;
}
void Stock::setLow(double low)
{
	_low = low;
}
void Stock::setVolume(double volume)
{
	_volume = volume;
}

std::string Stock::toString()
{
	std::ostringstream strs;
	strs << "Open: " << _open << ", High: " << _high << ", Low: " << _low << ", Close: " << _close << ", Volume: " << _volume << ".";
	return strs.str();
}
