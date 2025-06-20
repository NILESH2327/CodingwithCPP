#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Generate a random secret number between 1 and 100
    srand(static_cast<unsigned>(time(nullptr)));
    int secretNumber = rand() % 100 + 1;

    // Ask the user to select the level of difficulty
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Choose your difficulty level:" << endl;
    cout << "1. Easy (10 chances)" << endl;
    cout << "2. Medium (7 chances)" << endl;
    cout << "3. Hard (5 chances)" << endl;

    int choice;
    cin >> choice;

    int maxChances;
    switch (choice) {
        case 1:
            maxChances = 10;
            break;
        case 2:
            maxChances = 7;
            break;
        case 3:
            maxChances = 5;
            break;
        default:
            cout << "Invalid choice. Exiting the game." << endl;
            return 0;
    }

    // Let the player guess the number
    int guess;
    for (int chances = 1; chances <= maxChances; ++chances) {
        cout << "Enter your guess (between 1 and 100): ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Try a higher number." << endl;
        } else {
            cout << "Try a lower number." << endl;
        }
    }

    cout << "The secret number was: " << secretNumber << endl;

    return 0;
}
