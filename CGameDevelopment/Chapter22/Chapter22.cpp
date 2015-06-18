// Chapter22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <memory>

using namespace std;

void function2(int variable1)
{
	int variable2{ variable1 };
}

void function1(int variable)
{
	function2(variable);
}

class Simple
{
private:
	int variable{ 0 };

public:
	Simple()
	{
		cout << "Constructed" << endl;
	}
	~Simple()
	{
		cout << "Destroyed" << endl;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	using UniqueSimplePtr = unique_ptr<Simple>;
	UniqueSimplePtr pSimple1{ new Simple() };
	cout << pSimple1.get() << endl;

	UniqueSimplePtr pSimple2;
	pSimple2.swap(pSimple1);
	cout << pSimple1.get() << endl;
	cout << pSimple2.get() << endl;

	using IntSharedPtr = shared_ptr<int>;
	IntSharedPtr pIntArray1{ new int[16] };
	IntSharedPtr pIntArray2{ pIntArray1 };

	cout << endl << pIntArray1.get() << endl;
	cout << pIntArray2.get() << endl;

	return 0;
}

