// TextAdventureGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

struct Player
{
	string m_name;
};

void WelcomePlayer(Player& player)
{
	cout << "Welcome to Text Adventure!" << endl << endl;
	cout << "What is your name?" << endl << endl;

	cin >> player.m_name;

	cout << endl << "Hello " << player.m_name << endl;
}

void GivePlayerOptions()
{
	cout << "What would you like to do? (Enter a corresponding number)" << endl << endl;
	cout << "1: Quit" << endl << endl;
}

void GetPlayerInput(string& playerInput)
{
	cin >> playerInput;
}

enum class PlayerOptions
{
	Quit,
	None
};

PlayerOptions EvaluateInput(string& playerInput)
{
	PlayerOptions chosenOption = PlayerOptions::None;

	if (playerInput.compare("1") == 0)
	{
		cout << "You have chose to Quit!" << endl << endl;
		chosenOption = PlayerOptions::Quit;
	}
	else 
	{
		cout << "I do not recognize that option, try again!" << endl << endl;
	}

	return chosenOption;
}

bool RunGame()
{
	bool shouldEnd = false;

	GivePlayerOptions();

	string playerInput;
	GetPlayerInput(playerInput);

	shouldEnd = EvaluateInput(playerInput) == PlayerOptions::Quit;

	return !shouldEnd;
}

int _tmain(int argc, _TCHAR* argv[])
{
	Player player;
	WelcomePlayer(player);

	bool isPlaying = true;
	while (isPlaying)
	{
		isPlaying = RunGame();
	}

	return 0;
}

