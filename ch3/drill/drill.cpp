// drill.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../../include/std_lib_facilities.h"

int main()
{
	string first_name;
	int age;
	string friend_name;
	char friend_sex;

	cout << "Enter the first name and age of the person you want to write to, divided with a space\n";
	cin >> first_name >> age;

	if(age < 1 || age > 109) {
		simple_error("You're kidding!");
	}

	cout << "Enter friend's name and sex (m or f), divided with a space\n";
	cin >> friend_name >> friend_sex;

	cout << "Letter:\n"
		<< "Dear " << first_name << ",\n"
		<< "\tHow are you? I am fine. I miss you. The world is bleak without you around and I'm not just saying that because I'm thirsty.\n"
		<< "If you see " << friend_name << " please ask " << ((friend_sex == 'f') ? "her" : "him") << " to call me.\n"; //why does this not work, tell me
	
	if(age < 12) {
		cout << "Next year you will be " << age + 1;
	}
	else if (age == 17) {
		cout << "Next year you will be able to vote.";
	}
	else if (age > 70) {
		cout << "I hope you are enjoying retirement.";
	}

	cout << "\nYours sincerely,\n\n\nThat rusty old fork in your urethra.\n";

	keep_window_open();
    return 0;
}

