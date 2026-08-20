// FAHRENHEIT TO CELSIUS
#include<iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;

    cout<<"Enter temperature in fehrenheit:";
    cin>> fahrenheit;

    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout<<" Temperature in celsius = " <<celsius <<endl;

    return 0;
}