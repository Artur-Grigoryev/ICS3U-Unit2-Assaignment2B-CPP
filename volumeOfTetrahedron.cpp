// Copyright (c) 2021 St. Mother Teresa HS All rights reserved.
//
// Created by: Artur Grigoryev
// Created on: May 2021
// This program calcuates volume tetrahedron

#include <math.h>
#include <iostream>

int main() {
    // Define variable
    int edge;
    // Ask user for input value
    std::cout << "Enter the value (mm): ";
    // Assign input to variable
    std::cin >> edge;
    // Calculate the volume
    float volume = (pow(edge, 3)) / (6 * sqrt(2));
    // Print formatted output
    std::cout << "This is the volume: " << volume << "mm³" << std::endl;
}
