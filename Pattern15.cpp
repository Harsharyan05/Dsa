//Full Pyramid
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;

    while(i <= n) {

        int space = n - i;

        while(space) {
            cout << " ";
            space--;
        }
        int star = 2 * i - 1;
        
        while(star) {
            cout << "*";
            star--;
        }

        cout << endl;
        i++;
    }
    return 0;
}
