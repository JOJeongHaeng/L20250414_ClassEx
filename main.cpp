#include <iostream>
#include <vector>

#include "World.h"
#include "Slime.h"
#include "Player.h"
#include "Goblin.h"
#include "Boar.h"

using namespace std;

int main()
{
	UWorld* MyWorld = new UWorld();

	delete MyWorld;
	MyWorld = nullptr;

	return 0;
}