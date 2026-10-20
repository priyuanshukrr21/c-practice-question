
#include <bits/stdc++.h>
using namespace std;

using P = pair<long long, int>;
const long long INF = LLONG_MAX / 4;

vector<long long> dijkstra(
    int n, vector<vector<pair<int, int>>>& g, int src) {

    vector<long long> dist(n, INF);
    priority_queue<P, vector<P>, greater<P>> pq;

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d != dist[u]) continue;

        for (auto [v, w] : g[u]) {
            if (d + w < dist[v]) {
                dist[v] = d + w;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

int main() {
    int n = 5;
    vector<vector<pair<int, int>>> g(n);

    auto addEdge = [&](int u, int v, int w) {
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    };

    addEdge(0, 1, 4);
    addEdge(0, 2, 1);
    addEdge(2, 1, 2);
    addEdge(1, 3, 1);
    addEdge(2, 4, 5);

    auto dist = dijkstra(n, g, 0);

    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        if (dist[i] == INF) cout << "INF";
        else cout << dist[i];
        cout << '\n';
    }
}
