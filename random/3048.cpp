#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    int posb = -1;
    int posa = -1;

    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];

        if (numbers[i] == 2 && posb == -1) {
            posb = i;
        } else if (numbers[i] == 1 && posa == -1) {
            posa = i;
        }
    }

    int start_a;
    int start_b;
    int a = 1;
    int b = 2;

    int current = a;
    int counter = 1;


    for (int i = posa; i < n; i++) {

        if (numbers[i] != current) {
            current = numbers[i];
            counter++;
        }
    }

    start_a = counter;

    counter = 1;
    current = b;

    for (int i = posb; i < n; i++) {

        if (numbers[i] != current) {
            current = numbers[i];
            counter++;
        }
    }

    start_b = counter;

    int ans = max(start_a, start_b);

    cout << ans << endl;

    return 0;
}