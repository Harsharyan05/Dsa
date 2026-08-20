// Binary to Decimal
#include<iostream>
#include<cmath>
using namespace std;

int decimal(int n) {

    int ans = 0;
    int i = 0;

    while(n) {
        int digit = n % 10;

        if(digit)
        ans += pow(2,i);

        i++;
        n /= 10;
    }

    return ans;
}

int main() {
    int n;
    cin >>n;
    cout << decimal(n);
}
