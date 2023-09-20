#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;  // Import the entire std namespace to avoid using "std::" prefix

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));  // Seed the random number generator with the current time

    int random_number = rand() % 100 + 1;  // Generate a random number between 1 and 100

    int guess;            // Initialize a variable to store the user's guess
    int guess_count = 0;  // Initialize a variable to count the number of guesses made

   cout << "Welcome to the Guess the Number game!" << endl;
    cout << "I've picked a random number between 1 and 100." << endl;
    cout << "Your goal is to guess it!" << endl;

    while (true) {
        cout << "Enter your guess: ";  // Ask the user to enter their guess
        cin >> guess;                   // Read the user's input
        guess_count++;                  // Increment the guess count

        if (guess == random_number) {
            // If the guess is correct, congratulate the user and display the number of attempts
            cout << "Congratulations! You guessed the correct number ("
                 << random_number << ") in " << guess_count << " attempts." << endl;
            break;  // Exit the game loop
        } else if (guess < random_number) {
            // If the guess is too low, provide feedback
            cout << "Too low! Try a higher number." << endl;
        } else {
            // If the guess is too high, provide feedback
            cout << "Too high! Try a lower number." << endl;
        }
    }

    return 0;  // End the program
}
