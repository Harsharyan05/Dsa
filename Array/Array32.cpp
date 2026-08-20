#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[100];

    for(int i=0; i<n; i++)
        cin >> arr[i];

    int k;
    cin >> k;
    
    k = k%n;

    int temp[100];

    for(int i = 0; i<n; i++){

        temp[(i+k)%n]=arr[i];
    }

    for(int i=0; i<n; i++)
        cout << temp[i] << " ";
}