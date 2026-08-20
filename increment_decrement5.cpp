#include<iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 9;

    int c = a++;
    int d = --b;

    a = d++;
    b = ++c;

    cout << a << " " << b << " " << c << " " << d;

    return 0;
}