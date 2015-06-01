// Chapter14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <array>
#include <vector>
#include <iostream>

using namespace std;

const unsigned int ARRAY_SIZE = 5;

using MyArray = std::array<int, ARRAY_SIZE>;
using MyVector = vector<int>;

void FindInArray(MyArray myArray)
{
	for (unsigned int i = 0; i < ARRAY_SIZE; ++i)
	{
		if (myArray[i] == 2)
		{
			cout << "Found: " << myArray[i] << " at position: " << i << endl;
		}
	}

	for (auto iter = myArray.begin(); iter != myArray.end(); ++iter)
	{
		if (*iter == 2)
		{
			cout << "Found: " << *iter << endl;
		}
	}

	for (auto& number : myArray)
	{
		if (number != 2)
		{
			cout << "Found : " << number << endl;
		}
	}

	MyArray::iterator found = find(myArray.begin(), myArray.end(), 2);
	if (found != myArray.end())
	{
		cout << "Found : " << *found << endl;
	}
}

void FindInVector(MyVector myVector)
{
	for (unsigned int i = 0; i < myVector.size(); ++i)
	{
		if (myVector[i] == 2)
		{
			cout << "Found: " << myVector[i] << " at position: " << i << endl;
		}
	}

	for (auto iter = myVector.begin(); iter != myVector.end(); ++iter)
	{
		if (*iter == 2)
		{
			cout << "Found: " << *iter << endl;
		}
	}

	for (auto& number : myVector)
	{
		if (number == 2)
		{
			cout << "Found : " << number << endl;
		}
	}

	MyVector::iterator found = find(myVector.begin(), myVector.end(), 2);
	if (found != myVector.end())
	{
		cout << "Found : " << *found << endl;
	}
}

bool Descending(int first, int second)
{
	return first > second;
}

void SortVector()
{
	MyVector myVector = { 0, 1, 2, 3, 4 };

	sort(myVector.begin(), myVector.end(), Descending);
	for (auto& value : myVector)
	{
		cout << value << endl;
	}

	cout << endl;

	sort(myVector.begin(), myVector.end());
	for (auto& value : myVector)
	{
		cout << value << endl;
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	//int oldArray[ARRAY_SIZE] = { 0, 1, 2, 3, 4 };
	//std::array<int, ARRAY_SIZE> newArray = { 0, 1, 2, 3, 4 };

	//FindInArray(newArray);

	//MyVector myVector = { 0, 1, 2 };
	//myVector.push_back(3);
	//myVector.push_back(4);
	//MyVector::const_iterator iter = myVector.cbegin() + 1;
	//myVector.insert(iter, 5);
	//myVector.erase(iter);

	//FindInVector(myVector);

	SortVector();

	return 0;
}

