#pragma once
#include "Actor.h"

class Monster : public AActor
{
public:

	Monster() {};
	~Monster() {};
	int MonsterGold;
	struct MonsterMove
	{

	};
	void MonsterAttack();
	void DropGold();

private:

};

