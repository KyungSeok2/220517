#pragma once
#include "Actor.h"
class Player : public AActor
{
public:

	Player();
	~Player();

	float MP = 0;
	int MyGold = 0;
	struct PlayerMove
	{

	};
	void PlayerAttack();
	void Pickup();

private:

};

