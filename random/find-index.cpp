#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    double num;
    vector<double> nums;

    double x;

    cout << "Type the value you want to find in the list" << endl;
    cin >> x;

    cout << "Type values to the vector" << endl;

    while (cin >> num) {
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end());
    auto it = lower_bound(nums.begin(), nums.end(), x);
    int index = it - nums.begin();

    if (it != nums.end() && *it == x) {
        cout << "Value found! Index: " << index << endl;
    }
    else {
        cout << "Value not found" << endl;
    }

    return 0;
}