#include <iostream>

using namespace std;

int main() {

    int n;
    int greatest = 0;
    int counter = 1;
    pair<int, int> values;

    while (counter <= 100) {

        cin >> n;
        
        if (n > greatest) {
            values = {n, counter};
            greatest = n;
        }
        
        counter++;
    }

    cout << values.first << endl;
    cout << values.second << endl;

    return 0;
}