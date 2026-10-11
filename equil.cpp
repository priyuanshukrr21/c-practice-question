#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++) {
        int need = target - arr[i];

        if (mp.count(need)) {
            cout << mp[need] << " " << i;
            return 0;
        }

        mp[arr[i]] = i;
    }

    cout << "No solution";
    return 0;
}