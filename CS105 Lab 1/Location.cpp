#include "Location.h"
#include <iostream>
using namespace std;

void Location::setPos()
{
	cout << "Input degrees between 0 - 180: ";
	cin >> degrees;
	if (degrees < 0 || degrees > 180)
	{
		cout << "Please enter a value between 0 and 180.";
	}

	cout << "Input minutes between 0 and 60: ";
	cin >> minutes;
	if (minutes < 0 || minutes > 60)
	{
		cout << "Please enter a value between 0 and 60.";
	}

	cout << "Input heading (N/W/S/E): ";
	cin >> direction;
	if (direction != 'N' || direction != 'W' || direction != 'S' || direction != 'E')
	{
		cout << "Please enter a valid direction (N/W/S/E)";
	}
}
int getDeg(int degrees)
{
	return degrees;
}
float getMin(float minutes)
{
	return minutes;
}
char getDirect(char direction)
{
	return direction;
}