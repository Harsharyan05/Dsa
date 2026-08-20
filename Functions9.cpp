// Power of 2
#include<iostream>
using namespace std;

bool powerOf2(int n) {

    return n > 0 &&  (n&(n-1)) == 0;

}

int main() {
    int n;
    cin >> n;

    if(powerOf2(n))
        cout << "Yes";
    else
        cout << "No";
            
}
