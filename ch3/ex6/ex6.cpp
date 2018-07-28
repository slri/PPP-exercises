// ex6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../include/std_lib_facilities.h"


int main()
{
	int a, b, c, swap;

	cout << "Enter three ints:\n";
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

	cout << a << b << c << "\n";

	keep_window_open();
	return 0;
}

