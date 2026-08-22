// Best Time to Buy and Sell Stock

#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++)
    cin >> arr[i];

    int minimum = arr[0];
    int profit = 0;

    for(int i = 1; i < n; i++){
        profit = max(profit, arr[i] - minimum);
        minimum = min(minimum, arr[i]); 
    }

    cout << "Maximum Profit = " << profit;
    return 0;

}    