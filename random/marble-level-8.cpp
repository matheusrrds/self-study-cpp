#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int numcase = 0;
    int n,q;

    while (true) {

        cin >> n >> q;
        numcase++;

        if (n==0 && q==0) {
            return 0    ;
        }

        vector<int> nums;
        int num;

        for (int i = 0; i < n; i++) {
            cin >> num;
            nums.push_back(num);
        }

        sort(nums.begin(), nums.end());
        cout << "CASE# " << numcase << ":" << endl;

        for (int i = 0; i < q; i++) {
            
            int x;
            cin >> x;

            auto it = lower_bound(nums.begin(), nums.end(), x);

            int index = it - nums.begin();

            if (it != nums.end() && *it == x) {
                cout << x << " found at " << index+1 << endl;
            }
            else {
                cout << x << " not found" << endl;
            }
        }
    }
    return 0;
}
