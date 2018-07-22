// ch3.cpp
//

#include "stdafx.h"
#include "../../include/std_lib_facilities.h"

void tt1()
{
	string name;
	double age;

	cout << "Enter your name\n";
	cin >> name;
	cout << "Enter your age\n";
	cin >> age;

	cout << "Hello, " << name << ". You're " << age << " years old which is " << age * 12 << " months.\n";
}

void tt2()
{
	cout << "Please enter a positive integer value: ";
	int n;
	int a = 5;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n*n
		<< "\nhalf of n == " << n / 2
		//<< "\nsquare root of n == " << sqrt(n) // sqrt actually doesn't exist for int
		<< "\n'a' is " << a << " and 'n' is " << n << " so the next value should theoretically be equal to 'a': " << a / n * n + a % n //see, this is the sort of math mumbo jumbo i've been talking about
		<< '\n';
}

void tt3()
{
	string previous = " "; // previous word; initialized to gnot a wordh
	string current; // current word
	int counter = 0;
	while (cin >> current) { // read a stream of words
		if (previous == current) { // check if the word is the same as last
			cout << "repeated word: " << current << '\n';
			counter++;
		}
		
		previous = current;
	}
	cout << "repeated word counter: " << counter << '\n';

}


// TIL if you're gonna reference anything, you better have the declarations at the top. php is the superior language here
int main()
{
	//TODO: helper function, preferrably in a separate file in include/,
	//range-based for to ask the user if they wanna run the function or quit
	//the program. it'd pick off of a list of "known" functions and that
	//doesn't really have to be generated, can just manually list it out.
	//prompts gotta be automated tho. would make this much more presentable.

	//tt1();
	//tt2();
	tt3();

	keep_window_open();
	return 0;
}