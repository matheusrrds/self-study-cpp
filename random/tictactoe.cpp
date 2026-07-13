#include <iostream>

using namespace std;

int main() {

    char tictactoe[3][3] = {
        {'v', 'v', 'v'},
        {'v', 'v', 'v'},   
        {'v', 'v', 'v'},
    };

    int line;
    int column;
    int turn = 0;
    int player;

    while (true) {

        turn++;

        if (turn == 10) {
            cout << "It was a draw!" << endl;
            return 0;
        }

        if (turn%2 == 0) {
            player = 2;
        } else {
            player = 1;
        }

        cout << "Player " << player << " choose a line and a column" << endl;

        cin >> line >> column;

        if (player == 1) {
            tictactoe[line-1][column-1] = 'X';
        } else {
            tictactoe[line-1][column-1] = 'O';
        }


        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                cout << tictactoe[i][j] << " ";

            }

            cout << endl;
        }


        if (player == 1) {
            if (tictactoe[0][0] == 'X' && tictactoe[1][1] == 'X' && tictactoe[2][2] == 'X') {
                cout << "Player 1 won!";
                return 0;
            }
        } else {
            if (tictactoe[0][0] == 'O' && tictactoe[1][1] == 'O' && tictactoe[2][2] == 'O') {
                cout << "Player 2 won!";
                return 0;
        }}

        for (int i = 0; i < 3; i++) {
            if (player == 1) {
                if (tictactoe[i][0] == 'X' && tictactoe[i][1] == 'X' && tictactoe[i][2] == 'X') {
                    cout << "Player 1 won!";
                    return 0;
                }

                if (tictactoe[0][i] == 'X' && tictactoe[1][i] == 'X' && tictactoe[2][i] == 'X') {
                    cout << "Player 1 won!";
                    return 0;
                }
            } 
            
            else {
                if (tictactoe[i][0] == 'O' && tictactoe[i][1] == 'O' && tictactoe[i][2] == 'O') {
                    cout << "Player 2 won!";
                    return 0;
                }

                if (tictactoe[0][i] == 'O' && tictactoe[1][i] == 'O' && tictactoe[2][i] == 'O') {
                    cout << "Player 2 won!";
                    return 0;
                }
            }
        }

    }

    return 0;
}
