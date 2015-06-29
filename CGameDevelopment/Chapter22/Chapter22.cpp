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

struct MemoryAllocationHeader
{
	void* pStart{ nullptr };
	void* pNextFree{ nullptr };
	size_t size{ 0 };
};

namespace
{
	const unsigned int ONE_MEGABYTE = 1024 * 1024;
	char pMemoryHeap[ONE_MEGABYTE];
	const size_t SIZE_OF_MEMORY_HEADER = sizeof(MemoryAllocationHeader);
}

void* operator new(size_t size)
{
	MemoryAllocationHeader* pHeader = reinterpret_cast<MemoryAllocationHeader*>(pMemoryHeap);
while (pHeader != nullptr && pHeader->pNextFree != nullptr)
{
	pHeader = reinterpret_cast<MemoryAllocationHeader*>(pHeader->pNextFree);
}

pHeader->pStart = reinterpret_cast<char*>(pHeader) + SIZE_OF_MEMORY_HEADER;
pHeader->pNextFree = reinterpret_cast<char*>(pHeader->pStart) + size;
pHeader->size = size;

return pHeader->pStart;
}

void operator delete(void* pMemory)
{
	MemoryAllocationHeader* pLast = nullptr;
	MemoryAllocationHeader* pCurrent = reinterpret_cast<MemoryAllocationHeader*>(pMemoryHeap);
	while (pCurrent != nullptr && pCurrent->pStart != pMemory)
	{
		pLast = pCurrent;
		pCurrent = reinterpret_cast<MemoryAllocationHeader*>(pCurrent->pNextFree);
	}

	if (pLast != nullptr)
	{
		pLast->pNextFree = reinterpret_cast<char*>(pCurrent->pNextFree);
	}

	pCurrent->pStart = nullptr;
	pCurrent->pNextFree = nullptr;
	pCurrent->size = 0;
}

void PrintAllocations()
{
	MemoryAllocationHeader* pHeader = reinterpret_cast<MemoryAllocationHeader*>(pMemoryHeap);

	while (pHeader != nullptr)
	{
		std::cout << pHeader << std::endl;
		std::cout << pHeader->pStart << std::endl;
		std::cout << pHeader->pNextFree << std::endl;
		std::cout << pHeader->size << std::endl;

		pHeader = reinterpret_cast<MemoryAllocationHeader*>(pHeader->pNextFree);

		std::cout << std::endl << std::endl;
	}
}

void RunMemoryAllocations()
{
	memset(pMemoryHeap, 0, SIZE_OF_MEMORY_HEADER);
	PrintAllocations();
	Simple* pSimple1 = new Simple();

	PrintAllocations();
	Simple* pSimple2 = new Simple();

	PrintAllocations();
	Simple* pSimple3 = new Simple();

	PrintAllocations();

	delete pSimple2;
	pSimple2 = nullptr;

	PrintAllocations();

	pSimple2 = new Simple();

	PrintAllocations();

	delete pSimple2;
	pSimple2 = nullptr;

	PrintAllocations();

	delete pSimple3;
	pSimple3 = nullptr;

	PrintAllocations();

	delete pSimple1;
	pSimple1 = nullptr;

	PrintAllocations();
}

int _tmain(int argc, _TCHAR* argv[])
{
	/*using UniqueSimplePtr = unique_ptr<Simple>;
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
	cout << pIntArray2.get() << endl;*/

	RunMemoryAllocations();

	cout << "Test Out" << endl;

	return 0;
}

