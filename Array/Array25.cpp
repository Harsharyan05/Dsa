#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[100];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++){

        bool printed=false;

        for(int k=0;k<i;k++){

            if(arr[k]==arr[i]){
                printed=true;
                break;
            }
        }

        if(printed)
            continue;

        for(int j=i+1;j<n;j++){

            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }

    }

}