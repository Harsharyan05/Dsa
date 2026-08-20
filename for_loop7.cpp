//Print the nth Fibonacci term
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, b = 1;

    if (n == 1) {
        cout << a;
    }
    else if (n == 2) {
        cout << b;
    }
    else {
        int next;
        for (int i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        cout << b;
    }

    return 0;
}
