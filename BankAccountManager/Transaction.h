#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction {
private:
	int sender;
	int receiver;
	double amount;
public:
	Transaction(int sender, int receiver, double amount) : sender(sender), receiver(receiver), amount(amount) {};

	double getAmount() const {
		return this->amount;
	}

	int getSenderId() const {
		return this->sender;
	}

	int getReceiverId() const {
		return this->receiver;
	}
};

#endif // !TRANSACTION_H
