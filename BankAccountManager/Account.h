#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

#include "Currencies.h"
#include "Balance.h"

class Account {
private:
	static int id;
	std::string ownerName;
	Balance balance;
	bool active;
	Currency currency; // change currency?
public:
	Account(std::string ownerName, Currency currency, double amount): ownerName(ownerName), balance(Balance(amount)), active(true) {
		id++;
	}

	void changeBalance(double amount) {
		this->balance.changeBalance(amount);
	}

	int getId() const {
		return this->id;
	}

	double getRawBalance() const {
		return this->balance.getAmount();
	}

	bool isActive() const {
		return this->active;
	}
};

int Account::id = 0;

#endif // !ACCOUNT_H
