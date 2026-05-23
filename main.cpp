#include "../include/MenuItem.h"
#include "../include/Order.h"
#include "../include/Customer.h"
#include "../include/Staff.h"

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "===== SMART CAFE SYSTEM STARTED =====" << endl;

    // Menu Items
    MenuItem item1("Coffee", 250, "Drinks");
    MenuItem item2("Burger", 500, "Fast Food");

    // Staff
    Staff s1("Ahmed");
    s1.manageMenu();

    // Customer
    Customer c1("Ali", 101);
    c1.placeOrder();

    // Order
    Order order;

    order.addItem(item1, 2);
    order.addItem(item2, 1);

    order.displayOrder();

    order.searchItem("Coffee");
    order.showByCategory("Drinks");

    // Billing system
    try
    {
        double subtotal = order.calculateTotal();
        double tax = subtotal * 0.05;
        double total = subtotal + tax;

        cout << "\n----- BILL -----" << endl;
        cout << "Subtotal: " << subtotal << endl;
        cout << "Tax (5%): " << tax << endl;
        cout << "Total: " << total << endl;
    }
    catch(exception &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    cout << "\n===== SYSTEM ENDED =====" << endl;

    return 0;
}