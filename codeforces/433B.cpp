#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n,m;
    cin >> n;
    vector<long long> costs(n);
    vector<long long> unpref(n+1);
    unpref[0] = 0;

    for (int i = 0; i < n; i++) {
        cin >> costs[i];
    }

    for (int i = 1; i < n+1; i++) {
        unpref[i] = unpref[i-1] + costs[i-1];
    }

    vector<long long> ordcosts = costs;
    sort(ordcosts.begin(), ordcosts.end());
    vector<long long> ordpref(n+1);
    ordpref[0] = 0;

    for (int i = 1; i < n+1; i++) {
        ordpref[i] = ordpref[i-1] + ordcosts[i-1];
    }

    cin >> m;

    for (int i = 0; i < m; i++) {
    
        int type, l, r;
        long long ans;
        cin >> type >> l >> r;

        if (type == 1) {
            ans = unpref[r] - unpref[l-1];
            cout << ans << endl;
        } else {
            ans = ordpref[r] - ordpref[l-1];
            cout << ans << endl;
        }

    }

    return 0;
}