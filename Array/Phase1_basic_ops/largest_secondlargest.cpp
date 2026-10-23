//Q2. Find the largest and second-largest distinct element
//Concepts: Traversal, comparisons, updating variables, handling duplicate maximum values.


#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest &&
                 arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second-largest distinct element";
    } else {
        cout << "Largest = " << largest << endl;
        cout << "Second largest = " << secondLargest << endl;
    }

    return 0;
}
