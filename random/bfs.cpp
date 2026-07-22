#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {

    int n;
    int begin = 0;
    cin >> n;

    vector<vector<int>> graph(n);

    graph[0].push_back(1);
    graph[1].push_back(0);

    graph[1].push_back(3);
    graph[3].push_back(1);

    queue<int> q;
    vector<int> distance(n, -1);
    vector<bool> visited(n, false);

    visited[begin] = true;
    distance[begin] = 0;
    q.push(begin);

    while (!q.empty()) {

        int u = q.front();
        q.pop();

        for (int v : graph[u]) {
            if (!visited[v]) {
                visited[v] = true;
                distance[v] = distance[u] + 1;
                q.push(v);
            }
        }

    }

    return 0;
}