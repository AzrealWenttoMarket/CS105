// CS105 inheritence revision.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Grade.h"
#include "Info.h"
using namespace std;

int main()
{
    Grade* std = new Grade;
    Grade* std2 = new Grade;

    //std->readInfo();
    std->readGrade();

    //std->getYear();
    //std->displayInfo();
    std->displayGrade();

    cin.ignore();

    //std2->readInfo();
    std2->readGrade();

    //std2->getYear();
    //std2->displayInfo();
    std2->displayGrade();

    return 0;
}