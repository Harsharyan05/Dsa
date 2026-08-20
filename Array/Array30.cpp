#include<iostream>
using namespace std;

int main(){

    int n,m;

    cin>>n;

    int arr1[100];

    for(int i=0;i<n;i++)
        cin>>arr1[i];

    cin>>m;

    int arr2[100];

    for(int i=0;i<m;i++)
        cin>>arr2[i];

    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";

    for(int i=0;i<m;i++){

        bool found=false;

        for(int j=0;j<n;j++){

            if(arr2[i]==arr1[j]){

                found=true;
                break;

            }

        }

        if(!found)
            cout<<arr2[i]<<" ";

    }

}