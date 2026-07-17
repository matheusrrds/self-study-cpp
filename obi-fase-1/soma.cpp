#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> sequence(n);
    vector<long long> pref(n+1);
    pref[0] = 0;

    int num;

    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }

    map<long long, int> freq;
    freq[0] = 1;

    for (int i = 1; i < n+1; i++) {
        pref[i] = pref[i-1] + sequence[i-1];
    }

    long long ans = 0;
    long long currentsum = 0;
    
    for (int i = 0; i < n; i++) {
    
        currentsum += sequence[i];

        ans += freq[currentsum - k];

        freq[currentsum]++;
        
    }
    cout << ans << endl;

    return 0;
}