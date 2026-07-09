#include <iostream>

using namespace std;

int main() {

    int days;
    int months;
    int years;
    int remaining_days;

    cin >> days;
    
    years = days / 365;
    days = days - (365*years);
    months = days / 30; 
    remaining_days = days % 30;

    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << remaining_days << " dia(s)" << endl;

    return 0;
}