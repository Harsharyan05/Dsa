#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;

    int p = --a;
    int q = ++b;
    int r = p - q;

    cout << a << " " << b << " " << p << " " << q << " " << r;
    return 0;
}