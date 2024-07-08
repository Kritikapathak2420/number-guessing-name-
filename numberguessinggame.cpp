#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // seed random number generator
    int numberToGuess = rand() % 100 + 1; // generate random number between 1 and 100
    int numberOfTries = 0;

    std::cout << "Welcome to the number-guessing game!\n";
    std::cout << "I'm thinking of a number between 1 and 100.\n";

    while (true) {
        int guess;
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        numberOfTries++;

        if (guess < numberToGuess) {
            std::cout << "Too low! Try again.\n";
        } else if (guess > numberToGuess) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You found the number in " << numberOfTries << " tries.\n";
            break;
        }
    }

    return 0;
}
