// TextAdventureGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Player.h"
#include "GameLoop.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Player player;
	GameLoop::WelcomePlayer(player);

	bool isPlaying = true;
	while (isPlaying)
	{
		isPlaying = GameLoop::RunGame();
	}

	return 0;
}

