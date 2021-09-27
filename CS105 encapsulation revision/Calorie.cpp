#include "Calories.h"
#include <iostream>
using namespace std;

int Calorie::count = 1;

Calorie::Calorie()
{
	count++;
}
int Calorie::getData() const
{
	return caloriesConsumed;
}
int Calorie::getSpent() const
{
	return caloriesExpended;
}
void Calorie::setData(int c, int s)
{
	this->caloriesExpended = s;
	this->caloriesConsumed = c;
}
int Calorie::getDeficit() const
{
	return caloriesConsumed - caloriesExpended;
}