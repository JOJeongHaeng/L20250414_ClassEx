#pragma once
#include "Transform.h"
#include "State.h"

class AGoblin : public ATransform, public AState
{
	void Attack();
	void run();
};

