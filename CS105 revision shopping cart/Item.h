#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
using namespace std;

class Item
{
private:
	string name;
	int quantity;
	float price;
public:
	void setItem(string n, int q, float p);
	float getPrice() const;
	int getQuantity() const;
	string getName() const;
};
#endif