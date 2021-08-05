#include "Yatch.h"
#include "Location.h"
#include <iostream>
using namespace std;

int Yatch::count = 1000;

Yatch::Yatch()
{

}
void Yatch::getPos()
{
	Location pos;
	for (int i = 0; i < 2; i++)
	{
		pos.getPos();

		if (pos.getDirect == 'N' || pos.getDirect == 'S')
			longitude = pos;
		else if (pos.getDirect == 'W' || pos.getDirect == 'E')
			latitude = pos;
	}
}
void Yatch::displayPos(Location longitude, Location latitude)
{

}
Location Yatch::getLat()
{
	return latitude;
}
Location Yatch::getLong()
{
	return longitude;
}