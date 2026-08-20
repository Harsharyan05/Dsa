// Mini Banking system
#include<iostream>
using namespace std;

int main() {

    int balance = 5000;
    int choice;
    int amount;

    while(true) {

        cout << "\n======= BANK MENU =========\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter Amount to Deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Current Balance = " << balance << endl;
                break;
            
            case 2:
                cout << "Enter Amount to Withdraw: ";
                cin >> amount;
                
                if (amount <= balance) {
                    balance -= amount;
                    cout << "Current Balance = " << balance << endl;
                }

                else {
                    cout << "Insufficient Balance" << endl;
                }
                break;
                
            case 3:
                cout << "Current Balance = " << balance << endl;
                break;
                
            case 4:
                cout << "Thank You for Banking !" << endl;
                return 0;
                
            default:
                cout << "Invalid Choice" << endl;    

        }
    }

    return 0;
}
