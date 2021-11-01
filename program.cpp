// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This is program

#include <iostream>
#include <string>

main() {
    // this function uses a try statement
    std::string integer1;
    std::string integer2;
    std::string integer3;
    int age;
    int looking;
    int rich;

    // input
    std::cout << "Enter your age(use numbers): ";
    std::cin >> integer1;
    std::cout << "Are you really good loking (1-yes or 0-no): ";
    std::cin >> integer2;
    std::cout << "Are you rich (1-yes or 0-no): ";
    std::cin >> integer3;

    std::cout << "" << std::endl;

    // process & output
    try {
        age = std::stoi(integer1);
        looking = std::stoi(integer2);
        rich = std::stoi(integer3);
        if (rich > 1 || rich < 0 || looking < 0 || looking > 1) {
            std::cout << "Please follow the instructions!" <<
            "You need to enter 1 or 0" << std::endl;
        } else {
            if (age > 25 && age < 40 && looking == 1
                || rich == 1 && age > 25 && age < 40) {
                std::cout << "Both grandmothets will say:" << std::endl;
                std::cout << "You are accepted"
                << "to date my grandchild!" << std::endl;
                std::cout << "You can choose!" << std::endl;
            } else if (age > 40 && looking == 1 || rich == 1 && age > 40) {
                std::cout << "Grandmother#1 will say:" << std::endl;
                std::cout << "You are too old!" << std::endl;
                std::cout << "Grandmother#2 will say:" << std::endl;
                std::cout << "You are accepted"
                << "to date my grandchild!" << std::endl;
            } else if (age < 25 && looking == 1 || rich == 1 && age < 25) {
                std::cout << "Grandmother#1 will say:" << std::endl;
                std::cout << "You are too young!" << std::endl;
                std::cout << "Grandmother#2 will say:" << std::endl;
                std::cout << "You are accepted"
                << "to date my grandchild!" << std::endl;
            } else if (age > 25 && age < 40 && looking != 1 && rich != 1) {
                std::cout << "Grandmother#1 will say:" << std::endl;
                std::cout << "You are accepted"
                << "to date my grandchild!" << std::endl;
                std::cout << "Grandmother#2 will say:" << std::endl;
                std::cout << "Sorry, but you not rich"
                << "or good lokind!" << std::endl;
            } else {
                std::cout << "Both grandmothets will say:" << std::endl;
                std::cout << "Sorry, you can't" << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Please follow the instructions! Use numbers" << std::endl;
    }
    std::cout << "Good luck!" << std::endl;
}
