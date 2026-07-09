#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    int heightc;
    int count = 0;
    int heightg = -1;
    
    cin >> n;
    vector<int> heights(n);

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    for (int j = n-1; j >= 0; j--) {
        heightc = heights[j];

        if (heightc > heightg) {
            heightg = heightc;
        } else {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}