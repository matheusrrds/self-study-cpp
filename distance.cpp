#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double x1;
    double y1;
    double x2;
    double y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    double dx = pow((x1-x2), 2);
    double dy = pow((y1-y2), 2);
    double distance = sqrt(dx + dy);

    cout << fixed << setprecision(4);

    cout << distance << endl;

}