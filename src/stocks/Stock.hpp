#ifndef FINANCE_STOCK_HPP_
#define FINANCE_STOCK_HPP_

#include <string>

class Stock
{


public:

	double getOpen();
	double getClose();
	double getHigh();
	double getLow();
	double getVolume();

	void setOpen(double open);
	void setClose(double close);
	void setHigh(double high);
	void setLow(double low);
	void setVolume(double volume);

	std::string toString();

private:


	double _open;
	double _close;
	double _high;
	double _low;
	double _volume;


};



#endif
