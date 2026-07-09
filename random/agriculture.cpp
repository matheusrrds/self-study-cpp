#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {

    int l;
    int c;
    int counter = 0;
    int dangerous = 0;
    double acumulator = 0;
    double average;
    double temperature;
    vector<double> temperatures;

    cin >> l;
    cin >> c;

    for (size_t i = 0; i < l; i++) {
        for (size_t j = 0; j < c; j++) {
            cin >> temperature;
            temperatures.push_back(temperature);

            acumulator += temperature;
            counter++;
        }
    }

    if (counter != 0) {
        average = acumulator / counter;
    } else {
        cout << "Nem uma medida fora passada." << endl;
        return 0;
    }

    for (double temperatur : temperatures) {
        if (temperatur > average) {
            dangerous++;
        }
    }

    cout << "Temperatura média da fazenda: " << fixed << setprecision(2) << average << "°C" << endl;
    cout << "Setores em risco (acima da média): " << dangerous << endl;

    return 0;
}