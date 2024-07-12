#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Initialize random seed
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int userGuess;
    int attempts = 0;

    cout << "Guess the Number Game" << endl;
    cout << "I have generated a random number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    // Loop until the user guesses the number
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (userGuess != randomNumber);

    return 0;
}
