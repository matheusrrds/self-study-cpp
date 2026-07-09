#include <iostream>

using namespace std;

int main() {

    int n;
    int a;
    int b;
    int distance = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {

        cin >> a >> b;

        pair<int, int> travel = {a,b};
        auto[hours, speed] = travel;

        distance += hours * speed;
    }

    cout << distance << endl;

}