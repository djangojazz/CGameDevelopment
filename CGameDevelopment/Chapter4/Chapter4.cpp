// Chapter4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void _ArraysByReference()
{
	int intArray[5] = { 0, 1, 2, 3, 4 };
	cout << "Value: " << *intArray << endl;
	cout << "Value: " << *(intArray + 1) << endl;
	cout << "Value: " << *(intArray + 2) << endl;
	cout << "Value: " << *(intArray + 3) << endl;
	cout << "Value: " << *(intArray + 4) << endl;
}

void _Cstring()
{
	char* cStyleString = "CStyleString";
	char* cStyleString2 = "CStyleString";
	char cStyleString3[13];
	char* cStyleString4 = "String";

	cout << cStyleString << endl;
	cout << endl;
	cout << "NULL terminator" << endl;
	cout << (cStyleString[12] == '\0') << endl;
	cout << endl;
	cout << "strlen" << endl;
	cout << strlen(cStyleString) << endl;
	cout << endl;
	cout << "strcmp" << endl;
	cout << strcmp(cStyleString, cStyleString2) << endl;
	cout << endl;
	cout << "strcpy_s" << endl;
	cout << strcpy_s(cStyleString3, cStyleString);
	cout << cStyleString3 << endl;
	cout << endl;
	cout << "strcat_s" << endl;
	cout << strcpy_s(cStyleString3, "CStyle");
	strcat_s(cStyleString3, cStyleString4);
	cout << cStyleString3 << endl;
}

void _TextAdventureGame()
{
	cout << "Welcome to Text Adventure!" << endl << endl;
	cout << "What is your name?" << endl << endl;

	char playerName[1024];
	cin >> playerName;

	cout << endl << "Hello " << playerName << endl;
}

void _TextAdventureGame2()
{
	cout << "Welcome to Text Adventure!" << endl << endl;
	cout << "What is your name?" << endl << endl;

	string playerName;
	cin >> playerName;

	cout << endl << "Hello " << playerName << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	_TextAdventureGame2();

	return 0;
}

