// CS105 virtual function revision.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Media.h"
#include "Video.h"
#include "Book.h"

using namespace std;

int main()
{
	const int size = 100;
	Media* myArr[size];
	char choice;
	char reply;
	string temp;
	float price;
	string author;
	int runTime;

	int counter = 0;

	cout << "\t***Media Library Data Repository***" << endl;
	
	do
	{
		cout << "Would you like to enter a book or video? (B/V) ";
		cin >> choice;
		cin.ignore();

		if (toupper(choice) == 'B')
		{
			cout << "Book title: ";
			getline(cin, temp);
			cout << "Book price: ";
			cin >> price;
			cout << "Book author: ";
			getline(cin, author);

			myArr[counter] = new Book(temp, price, author);
		}
		else if (toupper(choice) == 'V')
		{
			cout << "Video title: ";
			getline(cin, temp);
			cout << "Video price: ";
			cin >> price;
			cout << "Video run time: ";
			cin >> runTime;

			myArr[counter] = new Video(temp, price, runTime);
		}

		counter++;
		cout << "Do you wish to add anoher item? (Y/N) ";
		cin >> reply;
	} while (toupper(reply) == 'Y');




	cout << "\n\nContents of library: " << endl;
	cout << "********************";
	for (int i = 0; i < counter; i++)
	{
		myArr[i]->display();
		cout << "\n***************************\n";
	}
}