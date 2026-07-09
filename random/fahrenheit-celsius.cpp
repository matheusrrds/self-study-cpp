#include <iostream>

using namespace std;

int main() {

    double fahrenheit;
    double celsius;
    
    cout << "Type the Fahrenheit temperature: " << endl;
    cin >> fahrenheit;

    celsius = 5*(fahrenheit - 32) / 9;

    cout << "The corresponding Celsius temperature is: " << celsius << "°C" << endl;
     
    return 0;
}