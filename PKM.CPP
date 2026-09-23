#include <iostream>
using namespace std;

int majorityElement(int arr[], int n) {
    int candidate = 0;
    int count = 0;

    // Find candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
        else if (arr[i] == candidate) {
            count++;
        }
        else {
            count--;
        }
    }

    // Verify candidate
    count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2)
        return candidate;

    return -1;
}

int main() {
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int n = 7;

    int result = majorityElement(arr, n);

    if (result != -1)
        cout << "Majority Element: " << result;
    else
        cout << "No Majority Element";

    return 0;
}