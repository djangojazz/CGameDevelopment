// Chapter15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <list>
#include <iostream>

using namespace std;

class ListNode
{
private:
	void* m_Data = nullptr;
	ListNode* m_Last = nullptr;
	ListNode* m_Next = nullptr;

public:
	ListNode(void* data)
		: m_Data{ data }
	{
	}

	void* GetData()
	{
		return m_Data;
	}

	void SetLast(ListNode* last)
	{
		m_Last = last;
	}

	ListNode* GetLast()
	{
		return m_Last;
	}

	void SetNext(ListNode* next)
	{
		m_Next = next;
	}

	ListNode* GetNext()
	{
		return m_Next;
	}
};

void OurList()
{
	unsigned int firstData = 1;
	ListNode first(&firstData);

	unsigned int secondData = 2;
	ListNode second(&secondData);

	unsigned int thirdData = 3;
	ListNode third(&thirdData);

	first.SetNext(&second);
	second.SetLast(&first);
	second.SetNext(&third);

	third.SetLast(&second);

	for (ListNode* iter = &first; iter != nullptr; iter = iter->GetNext())
	{
		unsigned int* number = static_cast<unsigned int*>(iter->GetData());
		cout << *number << endl;
	}
}

bool Descending(int first, int second)
{
	return first > second;
}

using MyList = list<int>;

int _tmain(int argc, _TCHAR* argv[])
{
	//OurList();

	MyList myList = { 0, 1, 2 };
	myList.push_back(3);
	myList.push_back(4);
	//MyList::const_iterator iter = myList.cbegin();
	//++iter;
	//iter = myList.insert(iter, 5);
	//myList.erase(iter);

	myList.sort(Descending);
	for (auto& value : myList)
	{
		cout << value << endl;
	}

	cout << endl;

	myList.sort();
	for (auto& value : myList)
	{
		cout << value << endl;
	}

	cout << endl;

	return 0;
}

