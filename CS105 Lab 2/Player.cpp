#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

// constructor
Player::Player(string name, Race race, int hitPoints, int magicPoints)
{
	this->name = name;
	this->race = race;
	this->hitPoints = hitPoints;
	this->magicPoints = magicPoints;
}

// getter functions
string Player::getName() const
{
	return name;
}

Race Player::getRace() const
{
	return race;
}

string Player::whatRace() const
{
	string result = "";

	if (race == HUMAN)
		result = "Human";
	else if (race == ELF)
		result = "Elf";
	else if (race == ORC)
		result = "Orc";
	else if (race == DWARF)
		result = "Dwarf";
	else if (race == TROLL)
		result = "Troll";

	return result;
}

int Player::getHP() const
{
	return hitPoints;
}

int Player::getMP() const
{
	return magicPoints;
}

// setters
void Player::setName(string name)
{
	this->name = name;
}

void Player::setRace(Race race)
{
	this->race = race;
}

void Player::setHP(int hitPoints)
{
	this->hitPoints = hitPoints;
}
void Player::setMP(int magicPoints)
{
	this->magicPoints = magicPoints;
}

string Player::attack()
{
	return "Undefined attack type";
}