#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

Book::Book(string title, float price, string author) : Media(title, price)
{
	this->author = author;
}

void Book::display()
{
	cout << "Title of book: " << title;
	cout << "Price of book: " << price;
	cout << "Author of book: " << author;
}