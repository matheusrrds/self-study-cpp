#include <iostream>

using namespace std;

int main() {

    double sales = 95000;
    double state_tax = 4.0/100 * sales;
    double county_tax = 2.0/100 * sales;
    double total_tax = state_tax + county_tax;

    cout << "Total sales: " << sales << endl
         << "State tax: " << state_tax << endl
         << "Total tax: " << total_tax << endl
    ;

    return 0;
}