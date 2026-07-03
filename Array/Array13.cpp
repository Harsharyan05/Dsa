#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    int copy[100];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++)
        copy[i] = arr[i];
        
    for(int i = 0; i < n; i++)
        cout << copy[i] << " ";
        
    return 0;    
}