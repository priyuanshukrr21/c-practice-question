
#include <bits/stdc++.h>
using namespace std;

bool dfs(int u, vector<vector<int>>& g,
         vector<int>& color) {
    color[u] = 1;

    for (int v : g[u]) {
        if (color[v] == 1)
            return true;

        if (color[v] == 0 && dfs(v, g, color))
            return true;
    }

    color[u] = 2;
    return false;
}

int main() {
    int n = 4;
    vector<vector<int>> g(n);

    g[0] = {1};
    g[1] = {2};
    g[2] = {0, 3};

    vector<int> color(n, 0);
    bool cycle = false;

    for (int i = 0; i < n; i++) {
        if (color[i] == 0 && dfs(i, g, color)) {
            cycle = true;
            break;
        }
    }

    cout << (cycle ? "Cycle Found" : "No Cycle") << '\n';
}
