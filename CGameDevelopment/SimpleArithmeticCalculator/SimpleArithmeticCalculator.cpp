// SimpleArithmeticCalculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, const char * argv[])
{
	cout << "Enter your first number: " << endl;
	int number1 = 0;
	cin >> number1;

	cout << "Enter your second number: " << endl;
	int number2 = 0;
	cin >> number2;

	int result = number1 % number2;
	cout << "The result of adding your two numbers is: " << result << endl;
	return 0;
}

