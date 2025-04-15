#pragma once
#include "State.h"
#include "Transform.h"

class AMonster : public AState, public ATransform
{
public:
	void Attack();
	void Move();
	int Die(int Gold);
};

