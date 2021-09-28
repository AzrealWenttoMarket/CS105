#ifndef MEDIA_H
#define MEDIA_H

#include <string>
using namespace std;

class Media
{
protected:
	string title;
	float price;
public:
	Media(string title, float price);
	virtual void display();
};
#endif