#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    bool duplicate = false;

    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            if(arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }

        if(duplicate)
            break;
    }

    if(duplicate)
        cout << "Duplicate Found";
    else
        cout << "No Duplicate";

    return 0;
}