#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s = "abcabcbb";
    vector<int> last(256, -1);

    int left = 0, best = 0;

    for (int right = 0; right < s.size(); right++) {
        unsigned char ch = s[right];

        if (last[ch] >= left)
            left = last[ch] + 1;

        last[ch] = right;
        best = max(best, right - left + 1);
    }

    cout << "Longest Length = " << best;
    return 0;
}