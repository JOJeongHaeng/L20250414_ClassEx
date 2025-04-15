#include <iostream>
#include "World.h"
#include "Player.h"
#include "Goblin.h"
#include "Boar.h"
#include "Slime.h"

UWorld::UWorld()
{
	Initialize();
}

UWorld::~UWorld()
{
	Terminate();
}

void UWorld::Initialize()
{
	for (int i = 0; i < 1; i++)
	{
		Players.push_back(new APlayer());
	}

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		int Type = rand() % 3;
		if (Type == 0)
		{
			Slimes.push_back(new ASlime());
		}
		else if (Type == 1)
		{
			Goblins.push_back(new AGoblin());
		}
		else if (Type == 2)
		{
			Boars.push_back(new ABoar());
		}
	}
}

void UWorld::Terminate()
{
	for (auto Player : Players)
	{
		delete Player;
	}
	Slimes.clear();

	for (auto Slime : Slimes)
	{
		delete Slime;
	}
	Slimes.clear();

	for (auto Goblin : Goblins)
	{
		delete Goblin;
	}
	Goblins.clear();

	for (auto Boar : Boars)
	{
		delete Boar;
	}
	Boars.clear();
}
