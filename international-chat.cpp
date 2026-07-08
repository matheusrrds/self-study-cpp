#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    int n;
    int k;

    cin >> n;

    for (int i = 0; i < n; i++) {

        string ans;
        string oldlang = "";
        string lang = "";

        cin >> k;

        for (int j = 0; j < k; j++) {

            if (j == 0) {
                cin >> oldlang;
                ans = oldlang;
            } else {

                cin >> lang;

                if (lang != oldlang) {
                    ans = "ingles";
                }

                oldlang = lang;

            }
        }
        cout << ans << endl;
    }
    return 0;
}