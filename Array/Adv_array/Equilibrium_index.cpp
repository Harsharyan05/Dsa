// sum of elements on left = sum of elements on right

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[100];

    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    int leftSum = 0;

    for (int i = 0; i < n; i++) {
        int rightSum = total - leftSum -arr[i];

        if (leftSum == rightSum) {
            cout << i;
            return 0;
        }

        leftSum += arr[i];
    }

    cout << -1;


    return 0;
}