#ifndef FINANCE_STOCK_HPP_
#define FINANCE_STOCK_HPP_

#include <string>
#include <vector>
#include "IStockSubscriber.hpp"
#include "IStock.hpp"

class Stock : public IStock
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

	void registerSubscriber(std::shared_ptr<IStockSubscriber> sub);
    void update();
    void tick();

private:


	double _open;
	double _close;
	double _high;
	double _low;
	double _volume;


    std::vector<std::shared_ptr<IStockSubscriber> > _subs;

};



#endif
