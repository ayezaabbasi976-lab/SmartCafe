#ifndef MENUITEM_H
#define MENUITEM_H

#include<iostream>
using namespace std;

class MenuItem{

private:
    string name;
    double price;
    string category;

public:
string getCategory();
string getName();
double getPrice();
      
    MenuItem(string n,double p,string c);

    void display();

};

#endif
