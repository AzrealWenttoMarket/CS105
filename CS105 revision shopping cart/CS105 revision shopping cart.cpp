// CS105 revision shopping cart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Item* array[100];
    int entries = 0;
    int amount;
    float cost;
    string itemName;
    char choice;
    float sum = 0;

    cout << "How many items do you wish to add to your cart? ";
    do
    {
        cout << "Please enter item details: " << endl;
        cout << "Item name for item " << entries + 1 << ": ";
        getline(cin, itemName);
        
        cout << "Item price for item " << entries + 1 << ": ";
        cin >> cost;
        cout << "Item amount for item " << entries + 1 << ": ";
        cin >> amount;

        array[entries] = new Item;
        array[entries]->setItem(itemName, amount, cost);
        entries++;

        cout << "Would you like to add another item? (Y/N)";
        cin >> choice;
        cin.ignore();
    } while (toupper(choice) == 'Y');

    cout << "In the cart: " << endl;
    for (int i = 0; i < entries; i++)
    {
        cout << "For item " << i + 1 << ": " << endl;
        cout << "Item name: " << array[i]->getName() << endl;
        cout << "Item amount: " << array[i]->getQuantity() << endl;
        cout << "Item price: " << array[i]->getPrice() << endl;

        sum += array[i]->getPrice() * array[i]->getQuantity();
    }

    cout << "Cart total: " << sum;

    return 0;
}