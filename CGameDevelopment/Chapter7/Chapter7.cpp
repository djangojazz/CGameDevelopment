// Chapter7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "HelloWorld.h"
#include <iostream>

namespace Player
{
	void PrintName()
	{
		std::cout << "My name is Brett!" << std::endl;
	}
}

namespace Vehicle
{
	void PrintName()
	{
		std::cout << "I am a car!" << std::endl;
	}
}

using namespace Player;

int _tmain(int argc, _TCHAR* argv[])
{
	PrintName();

	Vehicle::PrintName();

	return 0;
}

