// ex7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../include/std_lib_facilities.h"


int main()
{
	string a, b, c, swap; //note: if the first char of the string is uppercase, it will always be before any string that starts with a lowercase char. example: Alabama Xanax alabama

	cout << "Enter three strings:\n";
	cin >> a >> b >> c;

	if (a > b) {
		swap = a;
		a = b;
		b = swap;
	}
	if (b > c) {
		swap = b;
		b = c;
		c = swap;

		if (a > b) {
			swap = a;
			a = b;
			b = swap;
		}
	}

	cout << a << " " << b << " " << c << "\n";

	keep_window_open();
	return 0;
}

