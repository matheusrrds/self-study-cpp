#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;
    int problems = 0;
    int level;
    
    vector<int> levels(n);

    for (int i = 0; i < n; i++) {
        cin >> levels[i];
    }

    sort(levels.begin(), levels.end());

    for (int i = 0; i < levels.size(); i++) {
        auto it = lower_bound(levels.begin() + i+1, levels.end(), levels[i]);

        problems += abs(levels[i] - *it);
        levels.erase(it);
    }

    cout << problems << endl;

    return 0;
}