#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, size;
    char side;
    cin >> n;
    vector<pair<int, int>> feetpair(61, {0,0});

    for (int i = 0; i < n; i++) {
        cin >> size >> side;

        if (side == 'D') feetpair[size].first++;
        else feetpair[size].second++;
    }

    int ans = 0;

    for (int i = 0; i < feetpair.size(); i++) {
        ans += min(feetpair[i].first, feetpair[i].second);
    }

    cout << ans << endl;

    return 0;
}