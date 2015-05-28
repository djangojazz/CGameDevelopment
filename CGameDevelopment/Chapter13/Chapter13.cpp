// Chapter13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void StringIterators()
{
	using namespace std;

	string myString{ "This is my string!" };
	for (string::iterator iter = myString.begin(); iter != myString.end(); ++iter)
	{
		cout << *iter << endl;
	}
}

void StringReverseIterators()
{
	using namespace std;

	string myString{ "This is my string!" };
	for (string::reverse_iterator iter = myString.rbegin(); iter != myString.rend(); ++iter)
	{
		cout << *iter << endl;
	}
}

void StringConstIterators()
{
	using namespace std;

	string myString{ "This is my string!" };
	for (string::const_iterator iter = myString.cbegin(); iter != myString.cend(); ++iter)
	{
		cout << *iter << endl;
	}

	/*for (string::const_reverse_iterator iter = myString.crbegin(); iter != myString.crend(); ++iter)
	{
		cout << *iter << endl;
	}*/
}

void RangeBasedLooping()
{
	string myString{ "This is my string!" };
	for (char &letter : myString)
	{
		cout << letter << endl;
	}
}

void RangeBasedConstLooping()
{
	string myString{ "This is my string!" };
	for (const char &letter : myString)
	{
		cout << letter << endl;
	}
}

void AutoLooping()
{
	string myString{ "This is my string!" };
	for (auto &letter : myString)
	{
		cout << letter << endl;
	}
}

void AutoConstLooping()
{
	string myString{ "This is my string!" };
	for (const auto &letter : myString)
	{
		cout << letter << endl;
	}
}

void StringFinder()
{
	string myString{ "This is my string!" };
	
	size_t found = myString.find("is");
	if (found != string::npos)
	{
		cout << "\" is \" found at position: " << found << endl;
	}

	found = myString.find("is", found + 1);
	if (found != string::npos)
	{
		cout << "is found at position: " << found << endl;
	}

}

#include <sstream>
#include <iomanip>
#include <ios>
void StringStreamExample()
{
	stringstream myStringStream;

	myStringStream << "Hi" << endl;

	cout << "width: " << myStringStream.width() << endl;
	myStringStream << 123 << endl;
	myStringStream << setw(10) << 123 << endl;
	myStringStream << setw(0) << 123 << endl;

	myStringStream << 123.567 << endl;
	myStringStream << setprecision(4) << 123.567 << endl;
	myStringStream << fixed << setprecision(2) << 123.567 << endl;
	myStringStream << defaultfloat << setprecision(0) << 123.567 << endl;

	myStringStream << 110 << endl << showbase;
	myStringStream << hex << 110 << endl;
	myStringStream << oct << 110 << endl;
	myStringStream << dec << 110 << endl << noshowbase;

	string myString = myStringStream.str();
	cout << myString;
}

int _tmain(int argc, _TCHAR* argv[])
{
	using string = basic_string<char>;
	using u16string = basic_string<char16_t>;
	using u32string = basic_string<char32_t>;
	using wstring = basic_string <wchar_t>;

	StringStreamExample();

	return 0;
}

