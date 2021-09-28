#ifndef BOOK_H
#define BOOK_H

#include "Media.h"
using namespace std;

class Book :public Media
{
private:
	string author;
public:
	Book(string title, float price, string author);
	void display();
};

#endif