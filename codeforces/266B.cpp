#include <iostream>
#include <string>

using namespace std;

int main() {

    int n, t;
    cin >> n >> t;
    cin.ignore();
    string sequence;
    getline(cin, sequence);

    for (int i = 0; i < t; i++) {

        for (size_t j = 0; j < n-1; j++) {
            if (sequence[j] == 'B' && sequence[j+1] == 'G') {
                sequence[j] = 'G';
                sequence[j+1] = 'B';
                j++;
            }
        }
    }

    cout << sequence << endl;

    return 0;
}