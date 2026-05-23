#include "../include/Staff.h"
#include <iostream>

using namespace std;

Staff::Staff(string n)
{
    name = n;
}

void Staff::manageMenu()
{
    cout << "----- Staff Panel -----" << endl;
    cout << "Staff Name: " << name << endl;
    cout << name << " is managing the cafe menu..." << endl;
    cout << "Menu can be added / updated / removed." << endl;
    cout << "----------------------" << endl;
}