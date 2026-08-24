#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = n;

    for (int i = 0; i < n; i++) {
        ans ^= i;
        ans ^= arr[i];
    }

    cout << "Missing = " << ans;

    return 0;
}