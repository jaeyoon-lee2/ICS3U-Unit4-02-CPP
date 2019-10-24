// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon Lee
// Created on: Oct 2019
// This program display sum of 1 to user integer

#include <iostream>

main() {
    // this function display sum of 1 to user integer
    int positiveInteger;
    int loopCounter = 1;
    int result = 1;

    // input
    std::cout << "Enter the number you use factorial: ";
    std::cin >> positiveInteger;

    // process
    do {
        result = result * loopCounter;
        loopCounter = loopCounter + 1;
    } while (loopCounter <= positiveInteger);

    std::cout << positiveInteger << "!(facotorial) is " << result
    << std::endl;
}
