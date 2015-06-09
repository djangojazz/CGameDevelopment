// Chapter18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <bitset>
#include <iostream>

using namespace std;
namespace
{
	const unsigned int NUMBER_OF_BITS = 5;
}

using MyBitset = bitset<NUMBER_OF_BITS>;

void PrintBitset(const MyBitset& myBitset)
{
	for (unsigned int i = 0; i < myBitset.size(); ++i)
	{
		cout << static_cast<unsigned int>(myBitset[i]);
	}

	cout << endl << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	MyBitset defaultConstructor;
	MyBitset unsignedLongConstructor{ 0x17 };
	MyBitset stringConstructor{ string{ "11011" } };

	/*cout << boolalpha;

	cout << "Size of the bitset: " << stringConstructor.size() << endl;
	cout << "Number of set bits: " << stringConstructor.count() << endl;

	cout << "Is any bit set? " << stringConstructor.any() << endl;
	cout << "Are all bits set? " << stringConstructor.all() << endl;
	cout << "Are no bits set? " << stringConstructor.none() << endl;

	for (unsigned int i = 0; i < stringConstructor.size(); ++i)
	{
		cout << "Bit " << i << " value: " << stringConstructor[i] << endl;
		cout << "Bit " << i << " test: " << stringConstructor.test(i) << endl;
	}*/

	PrintBitset(stringConstructor);

	stringConstructor.set(1, false);

	PrintBitset(stringConstructor);

	stringConstructor.set(1);

	PrintBitset(stringConstructor);

	stringConstructor.set();

	PrintBitset(stringConstructor);

	stringConstructor.reset(0);

	PrintBitset(stringConstructor);

	stringConstructor.reset();

	PrintBitset(stringConstructor);

	stringConstructor.flip(4);

	PrintBitset(stringConstructor);

	stringConstructor.flip();

	PrintBitset(stringConstructor);

	cout << endl;

	return 0;
}

