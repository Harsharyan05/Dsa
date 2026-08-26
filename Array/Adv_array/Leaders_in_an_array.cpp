// An element is a leader if every element to its right is smaller.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
    cin >> arr[i];

    int maximum = arr[n - 1];

    cout << maximum << " ";
    for (int i = n - 2; i >= 0; i--) {
        if(arr[i] > maximum) {
            maximum = arr[i];
            cout << maximum << " ";
        }
    }

    return 0;
}