#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string sequence;
    deque<char> stack;
    deque<char> stackcopy;

    getline(cin, sequence);

    if (sequence.size() % 2 != 0) {
        cout << "No" << endl;
        return 0;
    }

    if (sequence.size() == 2 && sequence[0] == sequence[1]) {
        cout << "Yes" << endl;
        return 0;
    }

    if (sequence.size() == 2 && sequence[0] != sequence[1]) {
        cout << "No" << endl;
        return 0;
    }

    for (char symb : sequence) {

        if (stack.size() < 2 || stackcopy.empty()) {
            stack.push_back(symb);
            stackcopy.push_back(symb);
            continue;
        }

        if (stackcopy.back() == symb) {
            stackcopy.pop_back();
            continue;
        }

        stackcopy.push_back(symb);
    }

    if (stackcopy.empty()) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    
    return 0;
}

// a quantidade de caracter tem q ser par
// se um simbolo aparece tem q aparecer o mesmo simbolo dps pra desenroscar