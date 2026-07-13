#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n,k;
    cin >> n >> k;
    vector<int> heights(n);
    vector<int> pref(n+1);
    pref[0] = 0;

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    for (int i = 1; i < n+1; i++) {
        pref[i] = pref[i-1] + heights[i-1];
    }

    long long minsum = 10e12;
    int index = 0;

    for (int i = 0; i < n-k+1; i++) {

        long long sum = pref[i+k] - pref[i];

        if (sum < minsum) {
            minsum = sum;
            index = i+1;
        }
    }

    cout << index << endl;
    return 0;
}

