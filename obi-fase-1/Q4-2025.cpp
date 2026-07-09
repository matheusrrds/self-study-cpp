#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    int liked;

    cin >> n;
    vector<int> likeds(n);

    for (int i = 0; i < n; i++) {
        cin >> liked;
        likeds[i] = liked;
    }

    int h = *max_element(likeds.begin(), likeds.end());
    int glass = h;

    for (int i = 0; i < glass; i++) {

        for (int j = 0; j < n; j++) {

            if (h - likeds[j] > 0) {

                if (j != n-1) {

                    cout << 0 << " ";
                } else {
                    cout << 0 << endl;
                }

            } else {
                if (j != n-1) {
                    cout << 1 << " ";
                } else {
                    cout << 1 << endl;
                }
            }
        }

        h--;

    }

    return 0;
}