#include "Video.h"
#include <iostream>
#include <string>
using namespace std;

Video::Video(string titel, float price, int runningTime) : Media(title, price)
{
	this->runningTime = runningTime;
}

void Video::display()
{
	cout << "Title of video: " << title;
	cout << "Price of video: " << price;
	cout << "Run time of video: " << runningTime;
}