#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>

using namespace std;

int main() {

    int n;
    int f;
    int day;

    vector<int> days = {};
    string line;

    cin >> n >> f;

    cin.ignore();

    getline(cin, line);

    stringstream ss(line);

    while (ss >> day) {
        days.push_back(day);
    }

    long long left = 1;
    long long right = 1e9;
    long long m;
    long long ans;

    while (left <= right) {

        long long result = 0;

        m = left + (right - left) / 2;

        for (int day : days) {

            result = result + (m/day);

        }

        if (result > f) {

            ans = m;
            right = m-1;

        } else if (result < f) {

            left = m + 1;

        } else {
            ans = m;
            right = m-1;
        }
    }

    cout << ans << endl;

    return 0;
}