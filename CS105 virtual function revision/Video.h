#ifndef VIDEO_H
#define VIDEO_H

#include "Media.h"
using namespace std;

class Video :public Media
{
private:
	int runningTime;
public:
	Video(string titel, float price, int runningTime);
	void display();
};

#endif