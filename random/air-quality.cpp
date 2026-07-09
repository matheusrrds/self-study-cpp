#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {

    double n;
    double average;
    double acumulator = 0;
    int counter = 0;
    int dangerous = 0;

    cin >> n;

    while (n >= 0) {
        acumulator += n;
        
        if (n > 50.0) {
            dangerous++;
        }
        counter++;
 
        cin >> n;
    }
    
    if (counter == 0) {
        cout << "Nenhuma medição registrada" << endl;
    } else {
        average = acumulator / counter;

        cout << "Foram registradas " << counter << " medições válidas" << endl;
        cout << "Média de poluição: " << fixed << setprecision(2) << average << endl;
        cout << "Níveis críticos (> 50.0) detectados: " << dangerous << " vezes" << endl;
    }

    return 0;
}