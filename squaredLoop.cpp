// Copyright (c) 2021 Jenoe Balote All Rights Reserved
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program runs a factorial loop for positive integers

#include <iostream>
#include <string>
#include <cmath>

int main() {
    // this function runs the "factorial loop" program
    std::string stringInteger;
    int numberInteger;
    int total;
    int loopCounter = 0;

    // input
    std::cout << "Welcome!" << std::endl;
    std::cout << "Enter a positive integer: ";
    std::cin >> stringInteger;

    // process
    try {
        numberInteger = std::stoi(stringInteger);
        if (numberInteger >= 0) {
            for (loopCounter = 0; loopCounter <= numberInteger; loopCounter++) {
                total = pow(loopCounter, 2);
                std::cout << loopCounter << "² = " << total << std::endl;
            }
        } else if (numberInteger < 0) {
            std::cout << "That integer is a negative number!" << std::endl;
        }
    }
    catch (std::invalid_argument) {
    // output
        std::cout << "" << stringInteger <<" is invalid data." << std::endl;
    }
    std::cout << ""<< std::endl;
    std::cout << "Thanks for participating!"<< std::endl;
}
