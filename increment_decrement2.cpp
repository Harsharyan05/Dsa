#include<iostream>
using namespace std;

int main() {
    int a = 7;
    int b = 4;

    int x = ++a;
    int y = b--;
    int z = x + y;

    cout << a << " " << b << " " << x << " " << y << " " << z;

    return 0;
}