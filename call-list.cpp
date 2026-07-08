#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    int n;
    int k;
    string current_name;

    vector<string> students = {};

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> current_name;
        students.push_back(current_name);
    };

    sort(students.begin(), students.end());

    cout << students[k-1] << endl;

    return 0;
}