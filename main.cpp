#include <iostream>
#include "Player.h"
#include "Monster.h"

using namespace std;

int main()
{
	APlayer* MyPlayer = new APlayer;
	AMonster* Goblin = new AMonster;
	AMonster* wildboar = new AMonster;

	MyPlayer->SetHP(200);
	MyPlayer->SetMP(100);
	
	Goblin->SetHP(50);

	wildboar->SetMP(100);

	return 0;
}