// ex11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../include/std_lib_facilities.h"


int main()
{
	int pennies, nickels, dimes, quarters, hdollars;
	double cents;

	cout << "Pennies:\n";
	cin >> pennies;
	cout << "Nickels:\n";
	cin >> nickels;
	cout << "Dimes:\n";
	cin >> dimes;
	cout << "Quarters:\n";
	cin >> quarters;
	cout << "Half dollars:\n";
	cin >> hdollars;

	cout << "You have " << pennies << (pennies == 1 ? " penny" : " pennies") << "\n"; //cba to write it in ifs and elses, this is just much faster
	cout << "You have " << nickels << (nickels == 1 ? " nickel" : " nickels") << "\n";
	cout << "You have " << dimes << (dimes == 1 ? " dime" : " dimes") << "\n";
	cout << "You have " << quarters << (quarters == 1 ? " quarter" : " quarters") << "\n";
	cout << "You have " << hdollars << (hdollars == 1 ? " half dollar" : " half dollars") << "\n";

	cents = pennies + nickels * 5 + dimes * 10 + quarters * 25 + hdollars * 50;

	cout << "The value of all your coins is $" << cents / 100 << ".\n"; //gucci gang

	keep_window_open();
    return 0;
}

