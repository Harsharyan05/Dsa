// Point Location and Quadrant Determination
#include <iostream>
using namespace std;

int main() {

    int x, y;
    cin >>  x >> y;

    if (x == 0 && y == 0) {
        cout << "Origin";
    }
    else if (x == 0) {
        cout << "Y-Axis";
    }
    else if (y == 0) {
        cout << "X-Axis";
    }
    else if (x > 0 && y > 0) {
        cout << "Quadrant I";
    }
    else if (x < 0 && y > 0) {
        cout << "Quadrant II";
    }
    else if (x < 0 && y < 0) {
        cout << "Quadrant III";
    }
    else {
        cout << "Quadrant IV";
    }
    return 0;
}