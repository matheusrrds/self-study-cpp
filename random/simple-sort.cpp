#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    vector<int> nums = {a, b, c};
    
    sort(nums.begin(), nums.end());

    for (size_t i = 0; i < 3; i++) {
        cout << nums[i] << endl;
    }

    cout << endl << a << endl << b << endl << c << endl;

    return 0;
}