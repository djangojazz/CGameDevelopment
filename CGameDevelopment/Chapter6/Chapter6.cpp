// Chapter6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void IfTrue()
{
	if (true)
	{
		cout << "Print This!" << endl;
	}
}

void IfElse()
{
	if (false)
	{
		cout << "Print This When False!" << endl;
	}
	else
	{
		cout << "Print This When True!" << endl;
	}
}

void IfElseIfElse()
{
	if (false)
	{
		cout << "Print This When False!" << endl;
	}
	else if (true)
	{
		cout << "Print This When When Else if Is True!" << endl;
	}
	else
	{
		cout << "Print This If All False!";
	}
}

void ForLoop()
{
	for (unsigned int i = 0; i < 10; i++)
	{
		cout << "Loop Iteration: " << i << endl;
	}
}

void ForLoopOverArray()
{
	unsigned int array[10];

	for (unsigned int i = 0; i < 10; i++)
	{
		array[i] = i * 2;
		cout << "Loop Iteration: " << array[i] << endl;
	}
}

void WhileLoop()
{
	unsigned int array[10];
	unsigned int count = 0;
	while (count < 10)
	{
		array[count] = count * 2;
		cout << "Loop Iteration: " << array[count++] << endl;
	}
}

void DoWhileLoop()
{
	unsigned int array[10];
	unsigned int count = 0;

	do
	{
		array[count] = count * 2;
		cout << "Loop Iteration: " << array[count++] << endl;
	} while (count < 10);
}

enum class Colors
{
	Red,
	Green,
	Blue,
	Black
};

void SwitchStatement(Colors color)
{
	
	switch (color)
	{
		case Colors::Red:
			{
				cout << "The color is Red!" << endl;
			}
			break;
		case Colors::Green:
			{
				cout << "The color is Green!" << endl;
			}
			break;
		case Colors::Blue:
			{
				cout << "The color is Blue!" << endl;
			}
			break;
		default:
			{
				cout << "Unknown color!" << endl;
			}
			break;
	}
}

void ContinueAndBreak()
{
	unsigned int array[10];
	unsigned int count = 0;

	do
	{
		if ((count % 2) == 0)
		{
			++count;
			continue;
		}

		array[count] = count;
		cout << "Loop Iteration: " << array[count++] << endl;

		if (count == 10)
		{
			break;
		}

	} while (true);
}

int _tmain(int argc, _TCHAR* argv[])
{
	ContinueAndBreak();
	return 0;
}

