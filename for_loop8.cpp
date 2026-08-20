//Sum of first n Fibonacci numbers
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, b = 1;
    int sum = 0;

    if (n == 1) {
        cout << 0;
    }
    else if (n == 2) {
        cout << 1;
    }
    else {
        sum = a + b;    // 0 + 1 = 1

        for(int i = 3; i <= n; i++) {
            int next = a +b;
            sum = sum + next;
            a = b;
            b = next;
        }

        cout << sum; 
    }

    return 0;
}
