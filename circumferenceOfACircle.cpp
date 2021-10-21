// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on September 2021
// This program calculates the circumference of a circle
// with user input

#include <iostream>

int main() {
    // this function calculates circumference of a circle
    const double TAU = 6.28;
    int radius;
    double circumference;

    // input
    std::cout << "Enter radius of the circle here (mm): ";
    std::cin >> radius;

    // process
    circumference = TAU*radius;

    // output
    std::cout << "" << std::endl;
    std::cout << "Circumference is " << circumference << " mm" << std::endl;
    
    std::cout << "\ndone" << std::endl;
}
