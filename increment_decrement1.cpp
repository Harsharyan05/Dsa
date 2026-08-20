#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;

    int x = ++a;
    int y = b++;
    int z = --a + b--;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}