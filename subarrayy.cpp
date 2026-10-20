
#include <bits/stdc++.h>
using namespace std;

long long maxSubarray(vector<int>& a) {
    long long current = a[0];
    long long best = a[0];

    for (int i = 1; i < a.size(); i++) {
        current = max((long long)a[i],
                      current + a[i]);
        best = max(best, current);
    }

    return best;
}

int main() {
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubarray(a) << '\n';
}
