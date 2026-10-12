#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarraySum(vector<int>& arr) {
    int current = arr[0];
    int best = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        current = max(arr[i], current + arr[i]);
        best = max(best, current);
    }

    return best;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << maxSubarraySum(arr);
    return 0;
}