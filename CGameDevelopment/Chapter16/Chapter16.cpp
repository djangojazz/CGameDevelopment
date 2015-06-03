// Chapter16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <set>
#include <map>
#include <string>
#include <iostream>
#include <unordered_set>
#include <unordered_map>

using namespace std;
using MySet = set<int>;
using MyMap = map<int, string>;
using MyPair = pair<int, string>;
using MyUnorderedSet = unordered_set<int>;
using MyUnorderedMap = unordered_map<int, string>;
using MyPair = pair<int, string>;

void SetIterators(MySet mySet)
{
	for (MySet::iterator iter = mySet.begin(); iter != mySet.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << endl << endl;

	for (MySet::reverse_iterator iter = mySet.rbegin(); iter != mySet.rend(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << endl << endl;

	for (MySet::const_iterator iter = mySet.cbegin(); iter != mySet.cend(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << endl << endl;

	for (MySet::const_reverse_iterator iter = mySet.crbegin(); iter != mySet.crend(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << endl << endl;

	for (auto iter = mySet.begin(); iter != mySet.end(); ++iter)
	{
		cout << *iter << endl;
	}

	for (auto iter = mySet.cbegin(); iter != mySet.cend(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << endl << endl;

	for (MySet::iterator iter = mySet.begin(); iter != mySet.end(); ++iter)
	{
		//*iter = 5;
		cout << *iter << endl;
	}

	cout << endl << endl;

	for (MySet::const_iterator iter = mySet.cbegin(); iter != mySet.cend(); ++iter)
	{
		//*iter = 5;
		cout << *iter << endl;
	}
}

void FindInSet(MySet mySet, int n)
{
	for (auto iter = mySet.begin(); iter != mySet.end(); ++iter)
	{
		if (*iter == n)
		{
			cout << "Found: " << *iter << endl;
		}
	}

	for (auto& number : mySet)
	{
		if (number == n)
		{
			cout << "Found : " << number << endl;
		}
	}

	MySet::iterator found = find(mySet.begin(), mySet.end(), n);
	if (found != mySet.end())
	{
		cout << "Found : " << *found << endl;
	}
}

void SetIterators(MyMap myMap)
{
	for (const auto& node : myMap)
	{
		cout << "First: " << node.first << " Second: " << node.second << endl;
	}

	cout << endl << endl;

	for (MyMap::iterator iter = myMap.begin(); iter != myMap.end(); ++iter)
	{
		cout << "First: " << iter->first << " Second: " << iter->second << endl;
	}

	cout << endl << endl;

	for (MyMap::reverse_iterator iter = myMap.rbegin(); iter != myMap.rend(); ++iter)
	{
		cout << "First: " << iter->first << " Second: " << iter->second << endl;
	}

	cout << endl << endl;

	for (MyMap::const_iterator iter = myMap.cbegin(); iter != myMap.cend(); ++iter)
	{
		cout << "First: " << iter->first << " Second: " << iter->second << endl;
	}

	cout << endl << endl;

	for (MyMap::const_reverse_iterator iter = myMap.crbegin(); iter != myMap.crend(); ++iter)
	{
		cout << "First: " << iter->first << " Second: " << iter->second << endl;
	}

	cout << endl << endl;

	for (auto iter = myMap.begin(); iter != myMap.end(); ++iter)
	{
		cout << "First: " << iter->first << " Second: " << iter->second << endl;
	}

	for (auto iter = myMap.cbegin(); iter != myMap.cend(); ++iter)
	{
		cout << "First: " << iter->first << " Second: " << iter->second << endl;
	}

	cout << endl << endl;

	for (MyMap::iterator iter = myMap.begin(); iter != myMap.end(); ++iter)
	{
		//*iter = 5;
		cout << "First: " << iter->first << " Second: " << iter->second << endl;
	}

	cout << endl << endl;

	for (MyMap::const_iterator iter = myMap.cbegin(); iter != myMap.cend(); ++iter)
	{
		//*iter = 5;
		cout << "First: " << iter->first << " Second: " << iter->second << endl;
	}
}

void FindInSet(MyMap myMap)
{
	for (auto iter = myMap.begin(); iter != myMap.end(); ++iter)
	{
		if (iter->first == 2)
		{
			cout << "Found: " << iter->second << endl;
		}
	}

	for (auto& pair : myMap)
	{
		if (pair.first == 2)
		{
			cout << "Found: " << pair.second << endl;
		}
	}

	MyMap::iterator found = myMap.find(2);
	if (found != myMap.end())
	{
		cout << "Found First: " << found->first << " Second: " << found->second << endl;
	}
}

class TreeNode
{
private:
	int m_value;

	TreeNode* m_pLeft = nullptr;
	TreeNode* m_pRight = nullptr;
public:
	TreeNode(int value)
		: m_value{ value }
	{}

	TreeNode* Find(int searchValue)
	{
		TreeNode* pResult = nullptr;

		if (m_value == searchValue)
		{
			pResult = this;
		}
		else if (m_pLeft != nullptr && m_value > searchValue)
		{
			pResult = m_pLeft->Find(searchValue);
		}
		else if (m_pRight != nullptr && m_value < searchValue)
		{
			pResult = m_pRight->Find(searchValue);
		}

		return pResult;
	}
};

void SetIterators(MyUnorderedSet myUnorderedSet)
{
	for (MyUnorderedSet::iterator iter = myUnorderedSet.begin(); iter != myUnorderedSet.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << endl << endl;

	for (MyUnorderedSet::reverse_iterator iter = myUnorderedSet.rbegin(); iter != myUnorderedSet.rend(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << endl << endl;

	for (MyUnorderedSet::const_iterator iter = myUnorderedSet.cbegin(); iter != myUnorderedSet.cend(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << endl << endl;

	for (MyUnorderedSet::const_reverse_iterator iter = myUnorderedSet.crbegin(); iter != myUnorderedSet.crend(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << endl << endl;

	for (auto iter = myUnorderedSet.begin(); iter != myUnorderedSet.end(); ++iter)
	{
		cout << *iter << endl;
	}

	for (auto iter = myUnorderedSet.cbegin(); iter != myUnorderedSet.cend(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << endl << endl;

	for (MyUnorderedSet::iterator iter = myUnorderedSet.begin(); iter != myUnorderedSet.end(); ++iter)
	{
		//*iter = 5;
		cout << *iter << endl;
	}

	cout << endl << endl;

	for (MyUnorderedSet::const_iterator iter = myUnorderedSet.cbegin(); iter != myUnorderedSet.cend(); ++iter)
	{
		//*iter = 5;
		cout << *iter << endl;
	}
}

void FindInSet(MyUnorderedSet myUnorderedSet)
{
	for (auto iter = myUnorderedSet.begin(); iter != myUnorderedSet.end(); ++iter)
	{
		if (*iter == 2)
		{
			cout << "Found: " << *iter << endl;
		}
	}

	for (auto& number : myUnorderedSet)
	{
		if (number == 2)
		{
			cout << "Found : " << number << endl;
		}
	}

	MyUnorderedSet::iterator found = myUnorderedSet.find(2);
	if (found != myUnorderedSet.end())
	{
		cout << "Found : " << *found << endl;
	}
}

void ExceptionExample()
{
	if (true)
	{
		throw - 1;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	/*MySet mySet = { 2, 1, 0 };
	mySet.emplace(4);
	mySet.insert(3);

	SetIterators(mySet);
	FindInSet(mySet, 3);

	MyMap myMap = { { 2, "Two" }, { 1, "One" }, { 0, "Zero" } };
	myMap.emplace(3, "Three");
	MyPair node{ 4, "Four" };
	myMap.insert(node);

	SetIterators(myMap);
	FindInSet(myMap);*/

	MyUnorderedSet myUnorderedSet = { 2, 1, 0 };
	myUnorderedSet.emplace(4);
	myUnorderedSet.insert(3);

	MyUnorderedMap myUnorderedMap = { { 2, "Two" }, { 1, "One" }, { 0, "Zero" } };
	myUnorderedMap.emplace(3, "Three");
	MyPair node{ 4, "Four" };
	myUnorderedMap.insert(node);

	MyUnorderedSet::iterator found = find(myUnorderedSet.begin(), myUnorderedSet.end(), 2);
	if (found != myUnorderedSet.end())
	{
		cout << "Found : " << *found << endl;
	}

	found = myUnorderedSet.find(2);
	if (found != myUnorderedSet.end())
	{
		cout << "Found : " << *found << endl;
	}

	try
	{
		string& myString = myUnorderedMap.at(5);
		cout << "Found : " << myString << endl;
	}
	catch (const std::out_of_range& outOfRange)
	{
		cout << "Out of range error: " << outOfRange.what() << endl;
	}

	string& myString = myUnorderedMap[2];
	cout << "Found : " << myString << endl;

	/*SetIterators(myUnorderedSet);
	FindInSet(myUnorderedSet);

	try
	{
		ExceptionExample();
	}
	catch (int errorValue)
	{
		cout << "Error: " << errorValue << endl;
	}
*/
	return 0;
}

