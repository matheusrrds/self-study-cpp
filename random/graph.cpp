#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<vector<int>> graph(n);

    graph[0].push_back(1);
    graph[1].push_back(0);

    graph[1].push_back(3);
    graph[3].push_back(1);

    for (int i = 0; i < n; i++) {
        for (int neighbor : graph[i]) {
            cout << "Graph " << i << " Neighbor: " << neighbor << endl;
        }
    }

    return 0;
}