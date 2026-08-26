// Rotate an array to the right by k positions.

#include <iostream>
using namespace std;

void reverseArray(int arr[], int left, int right) {

    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {

    int n, k;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> k;

    k = k % n;

    reverseArray(arr, 0, n - 1);
    reverseArray(arr, 0, k - 1);
    reverseArray(arr, k, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;    
}