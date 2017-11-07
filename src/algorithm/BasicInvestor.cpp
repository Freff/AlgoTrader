#include "BasicInvestor.hpp"


#include <iostream>
#include <memory>

#include "../common/CSVRow.hpp"

#include "../stocks/Stock.hpp"
#include "../finance/Wallet.hpp"
#include "../finance/Portfolio.hpp"
#include "../finance/Position.hpp"

#include "../finance/exitconditions/NeverExitCondition.hpp"


//Date	Time	Open	High	Low	Close	Volume

BasicInvestor::BasicInvestor(std::shared_ptr<IWallet> wallet)
{
    _wallet = wallet;
}
BasicInvestor::BasicInvestor()
{

}

BasicInvestor::~BasicInvestor()
{

}

std::istream& operator>>(std::istream& str, CSVRow& data)
{
    data.readNextRow(str);
    return str;
}

void BasicInvestor::setWallet(std::shared_ptr<IWallet> wallet)
{
    _wallet = wallet;
}

void BasicInvestor::setStockRegistry(std::shared_ptr<IStockRegistry> stock)
{
    _stock_registry = stock;
}

void BasicInvestor::run()
{
	auto stock = std::make_shared<Stock>();

	auto portfolio = Portfolio();



	Position position;
	int minute = 0;

	std::cout << "Test starting" << std::endl;

	std::ifstream file("res/IBM_unadjusted.txt");

	CSVRow row;
	while (file >> row)
	{
		minute++;

		stock->setOpen(std::stoi(row[2]));
		stock->setHigh(std::stoi(row[3]));
		stock->setLow(std::stoi(row[4]));
		stock->setClose(std::stoi(row[5]));
		stock->setVolume(std::stoi(row[6]));

		if (1 == minute)
		{
			position = Position(stock, PositionType::LONG, 100000.0, std::make_unique<NeverExitCondition>());
		}



		std::cout << position.getValue() << std::endl;

	}

}
