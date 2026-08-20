#include<iostream>
using namespace std;

int main() {

    int n,m;

    cin >> n;

    int arr1[100];

    for(int i = 0; i<n; i++)
    cin >> arr1[i];

    cin >> m;

    int arr2[100];

    for(int i = 0; i < n; i++)
    cin >> arr2[i];

    for(int i = 0; i < m; i++){

        for(int j = 0; j < m; j++){

            if(arr1[i]==arr2[j]){

                cout << arr1[i]<< " ";
                arr2[j]=-1;
                break;
            }
        }
    }
}