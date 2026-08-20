//currency convertor
#include<iostream>
using namespace std;

int main() {
    int choice;
    float inr ;

    cin >> choice;
    cin >> inr;


    switch(choice) {
        
        case 1:
            cout << inr * 0.012;
            break;

        case 2:
            cout << inr * 0.011;
            break;

        case 3:
            cout << "Invalid";
    }

    return 0;
}
