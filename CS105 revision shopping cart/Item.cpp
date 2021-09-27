#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

void Item::setItem(string n, int q, float p)
{
	this->name = n;
	this->quantity = q;
	this->price = p;
}
float Item::getPrice() const
{
	return price;
}
int Item::getQuantity() const
{
	return quantity;
}
string Item::getName() const
{
	return name;
}