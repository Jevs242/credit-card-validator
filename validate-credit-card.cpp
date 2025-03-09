//Jose Velazquez
//Credit Card Validator

#include "validate-credit-card.h"

int main()
{
	CreditCard cc;
	return 0;
}

void Pause() {
#ifdef _WIN32
    system("pause");
#else
    std::cout << "Press Enter to continue...";
    std::cin.ignore();
    std::cin.get();
#endif
}

CreditCard::CreditCard()
{
	InputCreditCard();
	CardType();
}

CreditCard::~CreditCard()
{
	Pause();
}

void CreditCard::InputCreditCard()
{
	print("This program is for checking the validity of a credit card." << e);
	cout << ("Enter credit card number: ");
	cin >> numberCard;
	
	print("");

	if (VerificationLength())
	{
		if (CardCheck(numberCard))
		{
			print("This card is valid");
		}
		else
			print("This card is Invalid");
		return;
	}
	else
	{
		exit(1);
	}
}

bool CreditCard::VerificationLength()
{
	if (numberCard.length() < 13 || numberCard.length() > 16)
	{
		print("This card is Invalid");
		return false;
	}
	return true;
}

bool CreditCard::CardCheck(const string& cardNum)
{
	int sLength = cardNum.length() - 1; //How long is the string?
	int totalSum = 0;
	int isPar = false;

	//Ex.379354508162306

	for (int i = sLength; i >= 0; i--) {

		int num = cardNum[i] - '0'; //To change char in int

		if (isPar == true)
			num = num * 2; // 14 = 7 * 2

		totalSum += num / 10; //Divide: 1 = 14 / 10
		totalSum += num % 10; //Module: 4 = 14 % 10
							  //TotalSum = 5

		isPar = !isPar; //To change to the contrary
	}
	return (totalSum % 10 == 0);
}

void CreditCard::CardType()
{
	switch (numberCard[0] - 48)
	{
	case 3:
		if (numberCard[0] - 48) 
		{
			NameType(0);
		}
		break;
	case 4:
		NameType(1);
		break;
	case 5:
		NameType(2);
		break;
	case 6:
		NameType(3);
		break;
	default:
		break;
	}
	print("");
}

void CreditCard::NameType(int num)
{
	print( "Type : " + nameCard[num]);
}
