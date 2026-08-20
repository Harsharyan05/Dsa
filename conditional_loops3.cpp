// SUM OF NUMBERS
#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter n:";
    cin>>n;

    int i = 1;
    int sum = 0;

    while (i<=n) {
        sum = sum + i;
        i++;
    }

    cout << "Sum = " << sum <<endl;

    return 0;
}