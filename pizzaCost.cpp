// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Sep. 29, 2023
// This program calculates the total cost of a pizza per diameter,
// including tax.

#include <iomanip>
#include <iostream>

int main() {
    // Declare variables
    float diameter;
    const float RENT = 2.25;
    const int LABOUR = 2;
    const float HST = 0.13;
    const float MATERIALS = 1.5;

    // Get diameter from user
    std::cout << "This program calculates the total price of a pizza ";
    std::cout << "per diameter including tax." << std::endl;
    std::cout << "Please enter a diameter (inch): ";
    std::cin >> diameter;

    // Calculate total cost of pizza
    float subtotal = diameter * MATERIALS + RENT + LABOUR;
    float tax = subtotal * HST;
    float total = tax + subtotal;

    // Display total cost of pizza
    std::cout << std::fixed << std::setprecision(2) << std::setfill('0') << "$" << total << "\n";
}
