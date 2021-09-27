#ifndef CALORIE_H
#define CALORIE_H

#include <iostream>
using namespace std;

class Calorie
{
private:
	float caloriesDeficit;
	float caloriesConsumed;
	float caloriesExpended;
	int daysCounted;
public:
	static int count;
	Calorie();
	int getData() const;
	int getSpent() const;
	void setData(int c, int s);
	int getDeficit() const;
};

#endif 

