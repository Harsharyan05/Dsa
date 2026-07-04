#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[100];

    int ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        ans ^= arr[i];
    }

    cout << ans;

    return 0;
}