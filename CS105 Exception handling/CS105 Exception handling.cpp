// CS105 Exception handling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Imaginery.h"
using namespace std;

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c4 = c1 + c2;
    Complex c5 = c1 - c2;
    Complex c3 = c1 * c2;
    Complex c6 = c1 / c2;
    c3.printMult();
    c4.printPlus();
    c5.printSub();
    c6.printDiv();
}