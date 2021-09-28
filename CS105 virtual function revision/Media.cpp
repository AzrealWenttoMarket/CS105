#include "Media.h"
#include <iostream>
using namespace std;

Media::Media(string title, float price)
{
	this->title = title;
	this->price = price;
}
void Media::display()
{
	cout << "Title of media: " << endl;
	cout << "Price of Media: " << endl;
}