// Electricity Bill Generator
#include<iostream>
using namespace std;

int main() {
    
    int choice, units;
    double bill = 0;

    cout << "1. Domestic\n";
    cout << "2. Commmercial\n";
    cout << "3. Industrail\n";

    cout << "Enter Choice: ";
    cin >> choice;

    cout << "Enter Units: ";
    cin >> units;

    switch(choice) {
        case 1: 
            bill = units * 6;
            cout << "Bill = Rs. " << bill;
            break; 

        case 2:
            bill = units * 9;
            cout << "Bill = Rs. " << bill;
            break;

        case 3:
            bill = units * 12;
            cout << "Bill = Rs." << bill;
            break;    

        default:
            cout << "Invalid choice";    
    }

    return 0;
}
