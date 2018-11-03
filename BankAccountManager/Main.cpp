
#include "Bank.h"

int main() {
	Bank bank;
	TaxOffice* taxOffice = new TaxOffice();
	bank.setTaxOffice(taxOffice);

	bank.registerAccount("valeri", 200, Currency::BGN);
	bank.registerAccount("ana", 5000, Currency::BGN);

	bank.transferMoney(2, 1, 1010);
	bank.transferMoney(1, 2, 190);
	bank.consumeTransactions();

	return 0;
}