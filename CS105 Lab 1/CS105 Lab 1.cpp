// CS105 Lab 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Yatch.h"
#include <iostream>
using namespace std;

void printLine();

int main()
{
    Yatch y1, y2, y3;

    printLine();

}

// printline func to make cout faster
void printLine()
{
    cout << "\n";

    for (int i = 0; i < 50; i++)
    {
        cout << "*";
    }

    cout << "\n";
}