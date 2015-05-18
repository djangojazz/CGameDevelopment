// Chapter9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "extern.h"

class StaticCounter
{
private:
	static int m_counter;

public:
	void IncrementCounter()
	{
		++m_counter;
	}
	void Print()
	{
		std::cout << m_counter << std::endl;
		int* address = &m_counter;
	}
};

int StaticCounter::m_counter = 0;

class StaticCounterMethod
{
private:
	static int m_counter;

public:
	static void IncrementCounter()
	{
		++m_counter;
	}
	static void Print()
	{
		std::cout << m_counter << std::endl;
		int* address = &m_counter;
	}
};

int StaticCounterMethod::m_counter = 0;

int globalVariable = 0;

namespace
{
	const unsigned int MAX_LOOPS = 10;
}

class ConstantExample
{
	friend class ConstantExampleFriend;

private:
	int		m_counter;
	mutable int m_countGets;

	int GetCounter() const;

public:
	ConstantExample() : m_counter(0), m_countGets(0) {}
	void IncrementCounter();
};

inline int ConstantExample::GetCounter() const
{
	++m_countGets;
	return m_counter;
}

inline void ConstantExample::IncrementCounter()
{
	++m_counter;
}

class ConstantExampleFriend
{
public:
	int GetCounter(const ConstantExample& constantExample)
	{
		return constantExample.GetCounter();
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	ConstantExample example;
	ConstantExampleFriend exampleFriend;
	int count = exampleFriend.GetCounter(example);

	std::cout << count << std::endl;

	return 0;
}