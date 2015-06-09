// Chapter17.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stack>
#include <queue>

using namespace std;
using MyStack = stack<int>;
using MyQueue = queue<int>;

int _tmain(int argc, _TCHAR* argv[])
{
	MyStack myStack;
	myStack.emplace(0);
	myStack.push(1);
	myStack.push(2);

	cout << "Top of the stack: " << myStack.top() << endl;

	myStack.pop();
	cout << "Top of the stack: " << myStack.top() << endl;

	MyQueue myQueue;
	myQueue.emplace(0);
	myQueue.emplace(1);
	myQueue.emplace(2);

	cout << "Front of the queue: " << myQueue.front() << endl;

	return 0;
}

