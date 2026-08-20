//Check whether a number belongs to Fibonacci series
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, b = 1;
    if (n ==0 || n ==1) {
        cout << "Yes";
        return 0;;
    }

    int next = a + b;

    while (next < n) {
        a = b;
        b = next;
        next = a + b; 
    }

    if (next == n)
        cout << "Yes";
    else
        cout << "No";
        
    return 0;    
}
