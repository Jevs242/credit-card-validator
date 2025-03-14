//Jose Velazquez
//Credit Card Validator

#pragma once
#include <iostream>
#include <string>

#define e "\n"
#define print(x) cout << x << e;

using namespace std;

class CreditCard
{
private:
	static int const limit = 4;
	string nameCard[limit] = { "Visa Card" , "American Express" , "Master Card" , "Discover Card" };
	string numberCard = "379354508162306";
public:
	CreditCard();
	~CreditCard();

	void InputCreditCard();
	bool VerificationLength();
	bool CardCheck(const string& cardNo);
	void CardType();
	void NameType(int num);

};
