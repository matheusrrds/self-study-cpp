#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void invalid_msg(double price) {
    cout << "Código inválido! O valor final é R$ " << fixed << setprecision(2) << price << endl;
}

int main() {

    string promocode;
    double price;

    getline(cin, promocode);
    cin >> price;

    if (promocode.length() != 8) {
        invalid_msg(price);
        return 0;
    }

    for (size_t i = 0; i < 5; i++) {
        promocode[i] = tolower(promocode[i]);
    }

    if (!(promocode.starts_with("promo"))) {
        invalid_msg(price);
        return 0;
    }

    if (!isdigit(promocode[7]) || ((promocode[7] - '0') % 2) != 0) {
        invalid_msg(price);
        return 0;
    }

    if (promocode.find(" ") != string::npos) {
        invalid_msg(price);
        return 0;
    }

    cout << "Código válido! O valor final com desconto é R$ " << fixed << setprecision(2) << price*0.8 << endl;

    return 0;
}