#ifndef YATCH_H
#define YATCH_H

#include "Location.h"
#include <iostream>
using namespace std;

class Yatch
{
private:
	int serialNo;
	Location longitude, latitude;

public:
	static int count;
	Yatch();
	void getPos();
	void displayPos(Location longitude, Location latitude);
	Location getLat();
	Location getLong();
};
#endif 