#ifndef TAX_OFFICE_H
#define TAX_OFFICE_H

#include <queue>

#include "Transaction.h"

class TaxOffice {
private:
	std::queue<Transaction> transactions;
public:
	void addForValidation(Transaction& transaction) {
		transactions.push(transaction);
	}
};

#endif // !TAX_OFFICE_H
