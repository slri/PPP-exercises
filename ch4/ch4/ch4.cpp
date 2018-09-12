// ch4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../include/std_lib_facilities.h"


void ifCurrencyConversion()
{
	double number;
	string currency;

	cout << "Enter the number to convert based on and currency to convert from:\n";
	cin >> number >> currency;
	
	if(currency == "eur") {
		number *= 1.16;
	}
	else if (currency == "gbp") {
		number *= 1.30;
	}
	else if (currency == "jpy") {
		number *= 0.0090;
	}
	else {
		cout << "I don't know that currency.\n";
	}

	cout << "That is $" << number << "\n";
}

void switchCurrencyConversion() //this is a nightmare and the only reason why i'd prefer if over switch
{
	double number;
	char currency;

	cout << "Enter the number to convert based on and currency letter to convert from:\n";
	cin >> number >> currency;

	switch (currency) {
	case 'e':
		number *= 1.16;
		break;
	case 'p':
		number *= 1.30;
		break;
	case 'y':
		number *= 0.0090;
		break;
	case 'k':
		number *= 0.12;
		break;
	case 'u':
		number *= 0.15;
		break;
	default:
		cout << "I don't know that currency.\n";
		break;
	}

	cout << "That is $" << number << "\n";
}

int main()
{
	switchCurrencyConversion();

	keep_window_open();
    return 0;
}

