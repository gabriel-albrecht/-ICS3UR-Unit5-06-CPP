// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by Gabriel A
// Created on Jan 2021
// This program rounds decimal numbers

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>


int decimalRound(float &number, float place) {
    // rounds a decimal

    // process
    number = number * pow(10, place) + 0.5;
    number = static_cast<int>(number);
    number = number / pow(10, place);
}

int main() {
    // input the radius and height
    float numberFromUser;
    float placeFromUser;
    std::string numberString;
    std::string decimalString;

    // input
    while (true) {
        try {
            // input
            std::cout << "Enter a number, preferably one with decimals: ";
            std::cin >> numberString;
            numberFromUser = std::stof(numberString);
            std::cout << "Enter how many decimal places to round: ";
            std::cin >> decimalString;
            placeFromUser = std::stof(decimalString);
            std::cout << "" << std::endl;

            if (placeFromUser < 0) {
                std::cout << "Invalid input.\nTry again.\n" << std::endl;
            } else {
                decimalRound(numberFromUser, placeFromUser);
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "\nInvalid input.\nTry again.\n" << std::endl;
        }
    }

    // output
    std::cout << "The rounded number is " << numberFromUser << std::endl;
}
