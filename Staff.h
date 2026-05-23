#ifndef STAFF_H
#define STAFF_H

#include "Person.h"
#include <string>

using namespace std;

class Staff : public Person
{
public:
    Staff(string n);

    void manageMenu();
};

#endif