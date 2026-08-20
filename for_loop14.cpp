//Prime number in Range
#include<iostream>
using namespace std;

int main() {
    int a,b;

    cin >> a >> b;

    for(int num = a; num <= b; num ++) {

        if(num <= 1)
            continue;

        bool isPrime = true;
        
        for(int i = 2; i * i <= num; i++) {

            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << num << " ";
    }

    return 0;
}
