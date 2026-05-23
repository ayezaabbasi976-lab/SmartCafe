#include "../include/Customer.h"
#include<iostream>

using namespace std;

Customer::Customer(string n, int id)
{
    name = n;
    customerID = id;
}

void Customer::placeOrder()
{
    cout << "----- Order Confirmation -----" << endl;
    cout << "Customer Name: " << name << endl;
    cout << "Customer ID: " << customerID << endl;
    cout << name << " has placed an order successfully!" << endl;
    cout << "-----------------------------" << endl;
}