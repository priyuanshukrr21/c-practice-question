#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int LIS(vector<int>& arr) {
    vector<int> tails;

    for (int x : arr) {
        auto it = lower_bound(tails.begin(), tails.end(), x);

        if (it == tails.end())
            tails.push_back(x);
        else
            *it = x;
    }

    return tails.size();
}

int main() {
    vector<int> arr = {10, 9, 2, 5, 3, 7, 101, 18};

    cout << LIS(arr);
    return 0;
}