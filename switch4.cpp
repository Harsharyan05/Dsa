//Simple ATM Menu
#include<iostream>
using namespace std;

int main() {

    int choice;
    int balance = 5000;
    int amount;

    cin >> choice;

    // Options to select 
    
    switch(choice) {

        case 1:
            cout << "Balance = " << balance;
            break;

        case 2:
            cin >> amount;
            balance -= amount;
            cout << balance;
            break;
            
        case 3:
            cin >> amount;
            balance += amount;
            cout << balance;
            break;
            
        case 4:
            cout << "Thank You";
            break;
            
        default:
            cout << "Invalid";    
    }

    return 0;
}
