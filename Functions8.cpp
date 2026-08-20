// Armstrong Number using Functions
#include<iostream>
using namespace std;

bool armstrong(int n){

    int temp=n;

    int sum=0;

    while(temp){

        int digit=temp%10;

        sum+=digit*digit*digit;

        temp/=10;

    }

    return sum==n;

}

int main(){

    int n;

    cin>>n;

    if(armstrong(n))
        cout<<"Yes";

    else
        cout<<"No";

}
