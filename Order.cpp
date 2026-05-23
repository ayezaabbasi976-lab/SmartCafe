#include "../include/Order.h"
#include <iostream>

using namespace std;

void Order::addItem(MenuItem item, int qty)
{
    items.push_back(item);
    quantity.push_back(qty);

    cout << item.getName() << " added successfully!" << endl;
}

void Order::removeItem(string itemName)
{
    for(int i = 0; i < items.size(); i++)
    {
        if(items[i].getName() == itemName)
        {
            items.erase(items.begin() + i);
            quantity.erase(quantity.begin() + i);

            cout << itemName << " removed from order!" << endl;
            return;
        }
    }

    cout << "Item not found!" << endl;
}

void Order::displayOrder()
{
    cout << "\n----- ORDER DETAILS -----" << endl;

    if(items.empty())
    {
        cout << "No items in order!" << endl;
        return;
    }

    for(int i = 0; i < items.size(); i++)
    {
        cout << "Item: " << items[i].getName() << endl;
        cout << "Price: " << items[i].getPrice() << endl;
        cout << "Quantity: " << quantity[i] << endl;
        cout << "------------------------" << endl;
    }
}

double Order::calculateTotal()
{
    if(items.empty())
    {
        throw runtime_error("Order is Empty!");
    }

    double total = 0;

    for(int i = 0; i < items.size(); i++)
    {
        total += items[i].getPrice() * quantity[i];
    }

    return total;
}

void Order::searchItem(string itemName)
{
    for(int i = 0; i < items.size(); i++)
    {
        if(items[i].getName() == itemName)
        {
            cout << "Item Found!" << endl;
            items[i].display();
            return;
        }
    }

    cout << "Item not found!" << endl;
}

void Order::showByCategory(string category)
{
    cout << "\nItems in category: " << category << endl;

    for(int i = 0; i < items.size(); i++)
    {
        if(items[i].getCategory() == category)
        {
            items[i].display();
        }
    }
}