#include "../include/MenuItem.h"

MenuItem::MenuItem(string n,double p,string c)
{
    name=n;
    price=p;
    category=c;
}

void MenuItem::display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Category: "<<category<<endl;
}
double MenuItem::getPrice()
{
    return price;
}
string MenuItem::getName()
{
    return name;
}
string MenuItem::getCategory()
{
    return category;
}