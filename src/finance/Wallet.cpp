#include "Wallet.hpp"

Wallet::Wallet(double balance)
{
	setBalance(balance);
}

Wallet::~Wallet()
{

}

Wallet::Wallet(Wallet&& wallet)
{
	std::lock(_balanceMutex, wallet._balanceMutex);
	setBalance(wallet.getBalance());
}
Wallet::Wallet(const Wallet& wallet)
{
	std::lock(_balanceMutex, wallet._balanceMutex);
	setBalance(wallet.getBalance());
}


Wallet &Wallet::operator =(Wallet&& wallet)
{
	std::lock(_balanceMutex, wallet._balanceMutex);
	setBalance(wallet.getBalance());

	return *this;
}
Wallet &Wallet::operator =(const Wallet& wallet)
{
	std::lock(_balanceMutex, wallet._balanceMutex);
	setBalance(wallet.getBalance());

	return *this;
}

void Wallet::setBalance(double newBalance)
{
	std::lock_guard<std::mutex> lock(_balanceMutex);
	_balance = newBalance;
}

double Wallet::getBalance() const
{
	std::lock_guard<std::mutex> lock(_balanceMutex);
	return _balance;
}

bool Wallet::makeTransaction(double cost)
{
	std::lock_guard<std::mutex> lock(_balanceMutex);

	// TODO: should this throw?
	if (_balance - cost < 0 )
	{
		return false;
	}

	// should probably wrap all this shit in a transaction object

	_balance -= cost;
	return true;
}
