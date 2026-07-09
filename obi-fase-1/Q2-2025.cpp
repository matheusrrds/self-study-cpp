#include <iostream>

using namespace std;

int main() {

    int a;
    int b;
    int c;
    int d;
    int temp = 1;
    int x = 1;
    string ans = "N";

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    while (temp > 0) {

        temp = c - x * d;

        if (a <= temp && temp <= b) {
            ans = "S";
            break;
        }

        x++;
    }

    cout << ans << endl;

    return 0;
}