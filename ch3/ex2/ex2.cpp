// ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../include/std_lib_facilities.h"

int main()
{
	double miles = 0;
	
	cout << "Enter the number of miles you want converted:\n";
	cin >> miles;

	cout << (miles * 1.609);

	keep_window_open();
    return 0;
}