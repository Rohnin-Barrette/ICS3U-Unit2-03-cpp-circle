// !/usr/bin/env python3
// Copyright [2021] Rohnin Barrette"  [legal/copyright]
// Created by: Rohnin Barrette
// Created on: Sept 2021
// This program calculates the circumcfrence of a circle using (tau)

#include <iostream>

int main() {
    // This program calculates the circumcfrence of a circle using (tau)
    const double TAU = 6.28;
    int radius;
    double circumference;

    // input
    std::cout << "Enter radius of the circle (mm): ";
    std::cin >> radius;

    // process
    circumference = TAU* radius;

    // output
    std::cout << "" << std::endl;
    std::cout << "Circumference is " << circumference << "mm" <<std::endl;
}
