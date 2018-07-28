// ex9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../include/std_lib_facilities.h"


int main()
{
	string value;

	cout << "Spell out a number:\n";
	cin >> value;

	if (value == "one") { //switches only work on enum and integral types, not strings
		cout << 1;
	}
	else if (value == "two") {
		cout << 2;
	}
	else if (value == "three") {
		cout << 3;
	}
	else if (value == "four") {
		cout << 4;
	}
	else {
		cout << "not a number i know";
	}

	cout << "\n";

	keep_window_open();
    return 0;
}

