// ch3.cpp
//

#include "stdafx.h"
#include "../../include/std_lib_facilities.h"

void ageInMonths()
{
	string name;
	double age;

	cout << "Enter your name\n";
	cin >> name;
	cout << "Enter your age\n";
	cin >> age;

	cout << "Hello, " << name << ". You're " << age << " years old which is " << age * 12 << " months.\n";
}

void operatorsAndSqareRoot()
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

void repeatedWordCounter()
{
	string previous = " "; // previous word; initialized to "not a word"
	string current; // current word
	int counter = 0;
	while (cin >> current) { // read a stream of words, don't forget to Ctrl + Z on windows
		if (previous == current) { // check if the word is the same as last
			cout << "repeated word: " << current << '\n';
			counter++;
		}
		
		previous = current;
	}
	cout << "repeated word counter: " << counter << '\n';
	// operator == when comparing 2 *identical* strings will yield true
}

int testTypehintAndNaming() //main function actually has to be all lowercase and when you typehint a return value you have to return exactly that
{
	string s = "Goodbye, cruel world! ";
	cout << s << '\n';

	return 0;
}

void unsafeCharConversion()
{
	double d = 0;
	while (cin >> d) { // repeat the statements below
					   // as long as we type in numbers
		int i = d; // try to squeeze a double into an int
		char c = i; // try to squeeze an int into a char
		int i2 = c; // get the integer value of the character
		cout << "d==" << d // the original double
			<< " i==" << i // converted to int
			<< " i2==" << i2 // int value of char
			<< " char(" << c << ")\n"; // the char
	} //50 and -22222 produce the same char (2), how???
}

// TIL if you're gonna reference anything, you better have the declarations at the top
int main()
{
	//ageInMonths();
	//operatorsAndSqareRoot();
	//repeatedWordCounter();
	//testTypehintAndNaming();
	unsafeCharConversion();

	keep_window_open();
	return 0;
}