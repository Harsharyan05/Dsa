//Scholarship Eligibility

#include <iostream>
using namespace std;
int main() {

    double cgpa, attendance;
    int m1,m2,m3,m4,m5;

    cin >> cgpa >> attendance;
    cin >> m1,m2,m3,m4,m5;

    if (attendance < 75) {
        cout << "Not Eligible for Scholarship";
    }
    else if (m1 < 50 || m2 < 50 || m3 < 50 || m4 < 50 || m5 < 50) {
        cout << "Not Eligible for Scholarship";
    }
    else if (cgpa >= 9.5) {
        cout << "Full Scholarship";
    }
    else if (cgpa >= 9.0) {
        cout << "75% Scholarship";
    }
    else if (cgpa >= 8.0) {
        cout << "50% Scholarship";
    }
    else if (cgpa >= 7.0) {
        cout << "25% Scholarship";
    }
    else {
        cout << "Not Eligible for Scholarship";
    }
    
    return 0;
}