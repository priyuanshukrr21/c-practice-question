#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, vector<vector<int>>& adj,
         vector<int>& visited, vector<int>& path) {
    visited[node] = 1;
    path[node] = 1;

    for (int next : adj[node]) {
        if (!visited[next]) {
            if (dfs(next, adj, visited, path))
                return true;
        } else if (path[next]) {
            return true;
        }
    }

    path[node] = 0;
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