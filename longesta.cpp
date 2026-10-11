#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {10, 9, 2, 5, 3, 7, 101, 18};
    vector<int> dp;

    for (int x : arr) {
        auto it = lower_bound(dp.begin(), dp.end(), x);

        if (it == dp.end())
            dp.push_back(x);
        else
            *it = x;
    }

    cout << "LIS Length = " << dp.size();
    return 0;
}