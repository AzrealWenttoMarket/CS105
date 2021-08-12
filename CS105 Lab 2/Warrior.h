#ifndef WARRIOR_H
#define WARRIOR_H
#include "Player.h"

class Warrior : public Player
{
public:
	Warrior(string name, Race race) : Player(name, race, 300, 0)
	{

	}
	string attack()const
	{
		return "I will destroy you with my sword!";
	}
};

#endif