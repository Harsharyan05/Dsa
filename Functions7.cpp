// Palindrome using functions 
#include<iostream>
using namespace std;

int reverseNum(int n) {

    int rev = 0;
    
    while(n) {

        rev = rev * 10 + n % 10;
        n /= 10;

    }

    return rev;
}

bool palindrome(int n) {

    return n ==reverseNum(n);
}

int main() {
    int n;
    cin >> n;

    if (palindrome(n))
        cout << "Palindrome";

    else 
        cout << "Not Palindrome";    
}
