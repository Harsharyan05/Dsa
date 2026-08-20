//Inverted Pyramid
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = n;

    while(i >= 1) {

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
        i--;
    }

    return 0;
}
