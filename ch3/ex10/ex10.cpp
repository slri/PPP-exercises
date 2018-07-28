// ex10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../include/std_lib_facilities.h"


int main()
{
	string operation;
	double val1, val2;

	cout << "Write operator and 2 numbers:\n";
	cin >> operation >> val1 >> val2;

	if (operation == "+" || operation == "plus") { //to achieve this in a less painful way we could map it, but that's too advanced
		cout << val1 + val2;
	}
	else if (operation == "-" || operation == "minus") {
		cout << val1 - val2;
	}
	else if (operation == "*" || operation == "mul") {
		cout << val1 * val2;
	}
	else if (operation == "/" || operation == "div") {
		cout << val1 / val2;
	}

	cout << "\n";

	keep_window_open();
    return 0;
}

