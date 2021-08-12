#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
using namespace std;

enum Race {HUMAN, ELF, ORC, DWARF, TROLL};

class Player
{
private:
	string name;
	Race race;
	int hitPoints;
	int magicPoints;
public:
	// constructor
	Player(string name, Race race, int hitPoints, int magicPoints);
	// getter functions
	string getName() const;
	Race getRace() const;
	string whatRace() const;
	int getHP() const;
	int getMP() const;
	// setters
	void setName(string name);
	void setRace(Race race);
	void setHP(int hitPoints);
	void setMP(int magicPoints);
	string attack();
};

#endif 
