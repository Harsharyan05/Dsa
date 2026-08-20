// Restaurant Billing System
#include <iostream>
using namespace std;

int main() {

    int choice, quantity;
    int total = 0;

    cout << "------ MENU ------" << endl;
    cout << "1. Pizza      Rs.250" << endl;
    cout << "2. Burger     Rs.120" << endl;
    cout << "3. Sandwich   Rs.150" << endl;
    cout << "4. Pasta      Rs.180" << endl;
    cout << "5. Coffee     Rs.80" << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    cout << "Enter Quantity: ";
    cin >> quantity;

    switch(choice) {

        case 1:
            total = quantity * 250;
            break;

        case 2:
            total = quantity * 120;
            break;

        case 3:
            total = quantity * 150;
            break;

        case 4:
            total = quantity * 180;
            break;

        case 5:
            total = quantity * 80;
            break;

        default:
            cout << "Invalid Choice";
            return 0;
    }

    cout << "Total Bill = Rs. " << total;

    return 0;
}
