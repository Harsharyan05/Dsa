//ATM Withdrawal system 

#include <iostream>
using namespace std;

int main() {

    int pin, amount;
    double balance;

    cin >> pin >> balance >> amount;

    if (pin != 1234) {
        cout << "Invalid Pin";
    }
    else if (amount <= 0) {
        cout << "Invalid Amount";
    }
    else if (amount % 100 != 0) {
        cout << "Amount must be multiple of 100";
    }
    else if(amount > balance) {
        cout << "Insufficient Balance";
    }
    else if (balance - amount < 500) {
        cout << "Minimum Balance requirement violated";
    }
    else {
        balance -= amount;

        cout << "Withdrawal Successful\n";
        cout << "Remaining Balance = " << balance;
    }

    return 0;
}