#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;

    int height[100];

    for (int i = 0; i < n; i++)
        cin >> height[i];

    int water = 0;

    for (int i = 0; i < n; i++) {

        int leftMax = height[i];
        int rightMax = height[i];

        for (int j = 0; j < i; j++)
            leftMax = max(leftMax, height[j]);

        for (int j = i + 1; j < n; j++)
            rightMax = max(rightMax, height[j]);

        int trapped = min(leftMax, rightMax) - height[i];

        water += trapped;
    }

    cout << water;

    return 0;
}