#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {

    int e;
    int s;
    int l;
    int dist_a;
    int dist_b;

    cin >> e;
    cin >> s;
    cin >> l;

    dist_a = abs(e-s) + abs(s-l) + abs(e-l);
    dist_b = abs(e-l) + abs(l-s) + abs(s-e);

    cout << min(dist_a, dist_b) << endl;

    return 0;
}