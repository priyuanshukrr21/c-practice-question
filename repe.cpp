
#include <bits/stdc++.h>
using namespace std;

int longestSubstring(string s) {
    vector<int> last(256, -1);
    int left = 0, ans = 0;

    for (int right = 0; right < s.size(); right++) {
        unsigned char c = s[right];

        if (last[c] >= left)
            left = last[c] + 1;

        last[c] = right;
        ans = max(ans, right - left + 1);
    }

    return ans;
}

int main() {
    string s = "abcabcbb";
    cout << longestSubstring(s) << '\n';
    return 0;
}
