//Currency Denomination
#include<iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter Amount: ";
    cin >> amount;
    
    int choice = 1;

    switch(choice) {


        case 1:
            cout << "500 Notes = " << amount / 500 << endl;
            amount = amount % 500;
        
        case 2:
            cout << "100 Notes = " << amount / 100 << endl;
            amount = amount % 100;
            
        case 3:
            cout << "50 Notes = " << amount / 50 << endl;
            amount = amount % 50;
            
        case 4:
            cout << "20 Notes = " << amount / 20 << endl;
            amount = amount % 20;
            
        case 5: 
            cout << "10 Notes = " << amount / 10 << endl;
            amount = amount % 10;
            
        case 6: 
            cout << "5 Coins = " << amount / 5 << endl;
            amount = amount % 5;

        case 7:
            cout << "2 Coins = " << amount / 2 << endl;
            amount = amount % 2;
            
        case 8:
            cout << "1 Coins = " << amount / 1 << endl;
            amount = amount % 1;
            
        default: 
            cout << "Invalid";    
            

            return 0;
    }
        
}
