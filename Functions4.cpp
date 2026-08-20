//Decimal to Binary
#include<iostream>
using namespace std;

void binary(int n) {

    int arr[32];
    int i = 0;

    while (n>0) {

        arr[i] = n % 2;
        n /= 2;
        i++;

    }

    for(int j = i-1; j >= 0; j--)
        cout << arr[j];
}

int main() {

    int n;
    cin >> n;

    binary(n);
}
