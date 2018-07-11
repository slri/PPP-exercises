// ch3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../include/std_lib_facilities.h"

int main() {
	string name;
	double age;

	cout << "Enter your name\n";
	cin >> name;
	cout << "Enter your age\n";
	cin >> age;

	cout << "Hello, " << name << ". You're " << age << " years old which is " << age * 12 << " months.\n";
	keep_window_open();
	return 0;
}
