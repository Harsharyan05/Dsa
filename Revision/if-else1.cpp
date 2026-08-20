// Problem :- Take three integers and find the largest using only if-else.
#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;

    if(a >= b){
        if(a >=c)
            cout << "Largest= " << a;
        else
            cout << "Largest= " << c;  
    }
    else {
        if(b >= c)
            cout << "Largest= " << b;
        else
            cout << "Largest= " << c;
    }

    return 0;
}