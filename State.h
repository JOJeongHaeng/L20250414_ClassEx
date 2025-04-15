#pragma once
#include <string>

class AState
{
public:
	std::string statename;

	int GetHP();
	void SetHP(int hp);

	int GetMP();
	void SetMP(int mp);

private:

	int HP = 100;
	int MP;
};