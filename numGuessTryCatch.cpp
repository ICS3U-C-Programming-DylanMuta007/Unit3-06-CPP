// Copyright (c) 2025 Dylan Mutabazi All rights reserved
// Created by Dylan Mutabazi
// Created March 2025
// This program makes the user guess a randomnumber between 0 and 9
// With try catch

#include <iostream>
#include <random>
#include <string>

int main() {
    int randomNumber;
    std::string numberAsString;

    // Generates random number between 0 - 9
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);

    // Creates a variable and asks for user input
    int numberAsInteger;
    std::cout << "Guess a number between 0- 9: ";
    std::cin >> numberAsString;
    std::cout << "" << std::endl;

    try {
        // Converts numbAsString into an integer
        // and assigns it to numberAsInteger
        numberAsInteger = std::stoi(numberAsString);

        // Checks if given number is the same as the random number
        if (numberAsInteger == randomNumber) {
            std::cout << "Good job";
            std::cout << "" << std::endl;
        } else {
            std::cout << "Sorry your number was ";
            std::cout << randomNumber;
            std::cout << "" << std::endl;
        }
    // Catches invalid input
    } catch (std::invalid_argument) {
        std::cout << numberAsString << " : is not an int. \n";
    }
    // outro display
    std::cout << "" << std::endl;
    std::cout << "Thanks for playing. \n";
    std::cout << "" << std::endl;
}
