#pragma once

#include <vector>

class APlayer;
class ASlime;
class AGoblin;
class ABoar;


//World has a Player.

class UWorld
{
public:
	std::vector<APlayer*> Players;
	std::vector<ASlime*> Slimes;
	std::vector<AGoblin*> Goblins;
	std::vector<ABoar*> Boars;

public:
	UWorld();
	~UWorld();

	void Initialize();
	void Terminate();
};