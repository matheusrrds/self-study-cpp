#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {

    string line;
    int counter = 0;
    deque<char> sequence;

    getline(cin, line);

    for (char paren : line) {

        if (sequence.empty()) {
            sequence.push_back(paren);
        } 
        else {

            if (paren == sequence.back()) {
                sequence.push_back(paren);
            }
            else if ((sequence.back() == '(' && paren == ')')) {
                counter += 2;
                sequence.pop_back();
            }
            else {
                sequence.push_back(paren);
            }

        }

    }

    cout << counter << endl;

    return 0;
}