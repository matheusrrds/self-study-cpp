#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<double> grades = {9.2, 9.0};

    grades.push_back(8.6);

    cout << "[";

    for (int i = 0; i < grades.size(); i++) {
        if (i+1 < grades.size()) {
        cout << grades[i] << "," << " ";
    } else {
        cout << grades[i] << "]" << endl;
    }
    }
}