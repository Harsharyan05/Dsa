#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int current = arr[0];
    int maximum = arr[0];

    for (int i = 1; i < n; i++) {

        current = max(arr[i], current + arr[i]);

        maximum = max(maximum, current);
    }

    cout << maximum;

    return 0;
}