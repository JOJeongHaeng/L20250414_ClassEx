#pragma once

#include "Transform.h"
#include "State.h"

class APlayer : public ATransform, public AState
{
public:
	void Attack();
	int GetMoney();
	void SetMoney(int money);

private:
	int Money = 0;
};
