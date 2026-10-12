#include <iostream>
#include <vector>
using namespace std;

bool dfs(int u, vector<vector<int>>& adj,
         vector<int>& visited, vector<int>& path) {
    visited[u] = 1;
    path[u] = 1;

    for (int v : adj[u]) {
        if (!visited[v]) {
            if (dfs(v, adj, visited, path))
                return true;
        }
        else if (path[v]) {
            return true;
        }
    }

    path[u] = 0;
    return false;
}

int main() {
    int V = 4;
    vector<vector<int>> adj(V);

    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(0);
    adj[2].push_back(3);

    vector<int> visited(V, 0), path(V, 0);
    bool cycle = false;

    for (int i = 0; i < V; i++) {
        if (!visited[i] && dfs(i, adj, visited, path)) {
            cycle = true;
            break;
        }
    }

    cout << (cycle ? "Cycle Found" : "No Cycle");
    return 0;
}