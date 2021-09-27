// CS105 encapsulation revision.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calories.h"

using namespace std;

int main()
{
    const int size = 7;
    Calorie* arr[7];
    int consumed;
    int spent;


    cout << "Please enter the amount of calories consumed in the past week: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Calories on day " << i << ": ";
        cin >> consumed;
        cout << "Calories spent for day " << i << ": ";
        cin >> spent;

        arr[i] = new Calorie;
        arr[i]->setData(consumed, spent);
    }

    cout << "Data has been succesfully entered." << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "For day " << i + i << ": " << endl;
        cout << "Calories consumed = " << arr[i]->getData() << "\nCalories spent = " << arr[i]->getSpent();
        cout << "\nDeficit: " << arr[i]->getDeficit() << endl;
    }


    return 0;
}
