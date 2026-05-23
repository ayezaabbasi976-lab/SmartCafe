#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Person.h"

class Customer : public Person
{
private:
    int customerID;

public:
    Customer(string n, int id);
    void placeOrder();
};

#endif