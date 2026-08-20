// Reverse of a Number
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

int main() {
    int n;
    cin >> n;
    cout << reverseNum(n);
}
