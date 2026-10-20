#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> intervals = {
        {1, 3}, {2, 6}, {8, 10}, {15, 18}
    };

    sort(intervals.begin(), intervals.end());

    vector<vector<int>> result;

    for (auto interval : intervals) {
        if (result.empty() ||
            result.back()[1] < interval[0]) {
            result.push_back(interval );
        } else {
            result.back()[1] =
                max(result.back()[1], interval[1]);
        }
    }

    for (auto interval : result) {
        cout << "[" << interval[0] << ","
             << interval[1] << "] ";
    }

    return 0;
}