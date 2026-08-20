//Sum of even numbers from 1 to N
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 2; i <= n; i += 2) {
        sum = sum + i;
    }

    cout << sum;
    return 0;
}
