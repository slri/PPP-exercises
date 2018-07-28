// ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../include/std_lib_facilities.h"


int main()
{
	double val1, val2; //opted for doubles instead of casting, see no reason to cast. reason: ratio loses information

	cout << "Enter two doubles:\n";
	cin >> val1 >> val2;

	if (val1 > val2) {
		cout << val1 << " is bigger than " << val2;
	}
	else if (val1 < val2) {
		cout << val2 << " is bigger than " << val1;
	}
	else {
		cout << "values are equal";
	}
	
	cout << "\nsum is: " << val1 + val2 << "\n";
	cout << "difference is: " << val1 - val2 << "\n";
	cout << "product is: " << val1 * val2 << "\n";
	cout << "ratio is: " << val1 / val2 << "\n";

	keep_window_open();
    return 0;
}

