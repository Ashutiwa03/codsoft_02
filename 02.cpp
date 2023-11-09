#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int lowerLimit = 1;
    int upperLimit = 100;
    int targetNumber = lowerLimit + std::rand() % (upperLimit - lowerLimit + 1);
    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I'm thinking of a number between " << lowerLimit << " and " << upperLimit << "." << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < lowerLimit || guess > upperLimit) {
            std::cout << "Your guess is out of bounds. Try again." << std::endl;
        } else if (guess < targetNumber) {
            std::cout << "Too low! Try a higher number." << std::endl;
        } else if (guess > targetNumber) {
            std::cout << "Too high! Try a lower number." << std::endl;
        }
    } while (guess != targetNumber);

    std::cout << "Congratulations! You guessed the number " << targetNumber << " in " << attempts << " attempts." << std::endl;

    return 0;
}
