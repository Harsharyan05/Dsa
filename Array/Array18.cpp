//Count Positive, Negative and Zero
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n; 

    int arr[100];

    int pos = 0;
    int neg = 0;
    int zero = 0;

    for(int i = 0; i < n; i++)
    cin >> arr[i];

    for(int i = 0; i < n; i++){

        if(arr[i] > 0)
        pos++;

        else if(arr[i] < 0)
        neg++;

        else
        zero++;
    }

    cout << "Positive = " << pos << endl;
    cout << "Negative = " << neg << endl;
    cout << "Zero = " << zero;

    return 0;
}
