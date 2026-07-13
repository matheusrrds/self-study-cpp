#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

    double a,b,c, grt;
    cin >> a >> b >> c;
    vector<double> sides = {a,b,c};

    sort(sides.begin(), sides.end());
    reverse(sides.begin(), sides.end());

    grt = sides[0];
    b = sides[1];
    c = sides[2];

    if (grt >= b + c) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } 
    else if (pow(grt, 2) == (pow(b, 2) + pow(c, 2))){
        cout << "TRIANGULO RETANGULO" << endl;
    }
    else if (pow(grt, 2) > (pow(b, 2) + pow(c, 2))){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    } else if (pow(grt, 2) < (pow(b, 2) + pow(c, 2))) {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    
    if (grt == b && grt == c) {
        cout << "TRIANGULO EQUILATERO" << endl;
    } 
    else if (grt == b || grt == c || b == c) {
        cout << "TRIANGULO ISOSCELES" << endl;
    }


    return 0;
}