// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Joseph Kwon
// Created on: Oct 11 2022
// This program checks if an integer is a positive, negative, or zero

#include <iostream>

int main() {
    // initializing variables
    int secretNumber, userInteger;

    int guess;

    // Asking for user for an integer
    std::cout << "This program checks if your integer ";
    std::cout << "is a negative, positive, or zero \n";
    std::cout << "Enter your integer \n\n >> ";
    std::cin >> userInteger;
    std::cout << "\n"
              << std ::endl;

    // process, check if the user's guess matches the number
    // output string if statement is true
    if (userInteger >= 1) {
        std::cout << "Your integer is a positive";

        // process, check if the user's guess does not match the number
    } else if (userInteger <= -1) {
        std::cout << "Your integer is a negative";

    } else {
        std::cout << "Your integer has to be a zero";
    }
}
