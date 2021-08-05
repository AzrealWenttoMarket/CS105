#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
using namespace std;

class Location
{
private:
	int degrees;
	float minutes;
	char direction;
public:
	void setPos();
	int getDeg(int degrees);
	float getMin(float minutes);
	char getDirect(char direction);
};
#endif