#ifndef BANK_H
#define BANK_H

#include <map>
#include <queue>

#include "Account.h"
#include "Currencies.h"
#include "Transaction.h"
#include "TaxOffice.h"

class Bank {
private:
	const int SUSPICIOUS_AMOUNT = 1000;
	std::map<int, Account*> accounts;
	std::queue<Transaction> transactions;
	TaxOffice* taxOffice;

	void executeTransaction(Account& sender, Account& receiver, const Transaction& t) {
		if (!sender.isActive()) {
			throw std::exception("Sending account is not active!");
		}

		if (!receiver.isActive()) {
			throw std::exception("Receiving account is not active!");
		}

		if (sender.getRawBalance() < t.getAmount()) {
			throw std::exception("Not enough money to send");
		}

		sender.changeBalance(-t.getAmount());
		receiver.changeBalance(t.getAmount());
	}
public:
	Bank() = default;
	Bank(const Bank& bank) = delete;
	Bank operator=(const Bank& bank) = delete;

	Account* registerAccount(std::string ownerName, double amount, Currency currency) {
		Account* newAccount = new Account(ownerName, currency, amount);

		accounts[newAccount->getId()] = newAccount;

		return newAccount;
	}

	void transferMoney(int sender, int receiver, double amount) {
		Transaction t{sender, receiver, amount};

		this->transactions.push(t);
	}

	void consumeTransactions() {
		while (!this->transactions.empty()) {
			Transaction t = this->transactions.front();
			this->transactions.pop();

			this->executeTransaction(*this->accounts[t.getSenderId()], *this->accounts[t.getReceiverId()], t);

			if (t.getAmount() > SUSPICIOUS_AMOUNT) {
				this->taxOffice->addForValidation(t);
			}
		}
	}

	void setTaxOffice(TaxOffice* taxOffice) {
		this->taxOffice = taxOffice;
	}

	~Bank() {
		for (auto it = this->accounts.begin(); it != this->accounts.end(); it++) {
			delete it->second;
		}
	}
};

#endif // !BANK_H
