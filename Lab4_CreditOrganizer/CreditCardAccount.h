#pragma once
#include "LoyaltyScheme.h"

ref class CreditCardAccount
{
public:
	CreditCardAccount(long number, double limit);
	static CreditCardAccount();
	static int GetNumberOfAccounts();
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
	literal System::String^ name = "Super Platinum Card";
	void RedeemLoyaltyPoints();

private:
	LoyaltyScheme^ scheme;
	static double interestRate;
	static int numberOfAccounts = 0;
	long accountNumber;
	double currentBalance;
	double creditLimit;
};