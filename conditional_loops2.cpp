// NUMBERS BETWEEN THE CHAR
#include<iostream>
using namespace std;

int main() {
    int num;

    cout <<"Enter the number:";
    cin>> num;

    if (num>=0 && num<=10) {
        cout << "A" <<endl;
    }
    else if (num>=11 && num<=20) {
        cout << "B" <<endl;
    }
    else if (num>=21 && num<=30) {
        cout << "C" <<endl;
    }
    else {
        cout << "None of the above" << endl;
    }

    return 0;
}

