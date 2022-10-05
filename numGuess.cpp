// Copyright (c) 2022 Patrice Pat-Odita All rights reserved.

// Created by: Patrice Pat-Odita
// Created on: Oct 5,2022
// This program asks the user to guess my favorite
// number and if they get it wrong they are told so.
#include <iostream>

int main() {
    // this function allows user to guess programmers favorite number
    const int FAVORITE_NUMBER = 5;
    int numberGuessed;

    // input number from user
    std::cout << "Guess my favorite number from 0-9: ";
    std::cin >> numberGuessed;
    std::cout << "" << std::endl;

    // Check to see if input is correct or wrong
    if (numberGuessed == FAVORITE_NUMBER) {
    // display output
    std::cout << "YOU GOT IT RIGHT!";
    } else {
    std::cout << "You got it wrong, my favorite number is "
    << FAVORITE_NUMBER << "\n";
    }
}
