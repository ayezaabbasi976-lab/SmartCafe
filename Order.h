#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include <string>
#include <stdexcept>
#include "MenuItem.h"

using namespace std;

class Order
{
private:
    vector<MenuItem> items;
    vector<int> quantity;

public:
    void addItem(MenuItem item, int qty);
    void removeItem(string itemName);
    void displayOrder();
    double calculateTotal();
    void searchItem(string itemName);
    void showByCategory(string category);
};

#endif