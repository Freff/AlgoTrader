#ifndef FINANCE_WALLET_HPP_
#define FINANCE_WALLET_HPP_

#include <atomic>
#include <mutex>

class Wallet
{

public:

	Wallet(double balance);
	Wallet(const Wallet& wallet);
	Wallet(Wallet&& wallet);
	Wallet &operator=(Wallet&& wallet);
	Wallet &operator=(const Wallet& wallet);

	~Wallet();

	double getBalance() const;
	void setBalance(double newBalance);

	bool makeTransaction(double cost);

	mutable std::mutex _balanceMutex;

private:



	double _balance;



};



#endif
