#ifndef BALANCE_H
#define BALANCE_H

class Balance {
private:
	double amount;
public:
	Balance(double amount) : amount(amount) {}

	void changeBalance(double amount) {
		if (amount < 0 && amount > this->amount) {
			return;
		}

		this->amount += amount;
	}

	double getAmount() const {
		return this->amount;
	}
};

#endif BALANCE_H