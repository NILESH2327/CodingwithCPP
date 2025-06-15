#include <iostream>
#include <vector>

using namespace std;

// Function to display the Tic-Tac-Toe board
void displayBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

// Function to check if a player has won
bool checkWin(const vector<vector<char>>& board, char player) {
    // Check rows, columns, and diagonals
    // Implement your logic here
    // Return true if the player has won, otherwise false
    return false;
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' ')); // Initialize an empty 3x3 board
    char currentPlayer = 'X'; // Start with Player X

    while (true) {
        // Display the board
        displayBoard(board);

        // Get player input (row and column)
        int row, col;
        cout << "Player " << currentPlayer << ", enter row (1-3) and column (1-3): ";
        cin >> row >> col;

        // Validate input and update the board
        // Implement your logic here

        // Check for a win
        if (checkWin(board, currentPlayer)) {
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        // Check for a draw (all cells filled)
        bool isDraw = true;
        for (const auto& row : board) {
            for (char cell : row) {
                if (cell == ' ') {
                    isDraw = false;
                    break;
                }
            }
        }
        if (isDraw) {
            cout << "It's a draw!" << endl;
            break;
        }

        // Switch players
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
