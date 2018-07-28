// ex8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../include/std_lib_facilities.h"


int main()
{
	int value;

	cout << "Enter an integer:\n";
	cin >> value;

	if (value % 2 == 1) {
		cout << value << " is an odd number\n";
	}
	else {
		cout << value << " is an even number\n";
	}

	keep_window_open();
    return 0;
}

