// SUM OF EVEN NUMBERS
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<< "Enter n:";
    cin>>n;

    int i = 1; 
    int sum = 0;

    while (i<=n) {
        if (i%2 ==0) {
            sum = sum + i;
        }
        i++;
    }

    cout << "Sum of even numbers =" << sum <<endl;

    return 0;
}