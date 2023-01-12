// Copyright (c) 2022 Feyi Akomolafe
//
// Created by: Feyi Akomolafe
// Created on: Nov 2022
// This program finds the volume of a cylinder

#include <math.h>

#include <iostream>

float cylinderVolumeCalculation(int radius, int height) {
    // This function finds the volume of the cylinder
    float volume;

    if (height <= 0 || radius <= 0) {
        volume = -1;
        return volume;
    } else {
        volume = M_PI * (radius * radius) * height;
        return volume;
    }
}

int main() {
    // This function gets the radius and height from the user
    std::string radius_from_user;
    std::string height_from_user;
    int radius;
    int height;
    float volume;

    // Input
    std::cout << "Enter the radius of the cylinder (mm): ";
    std::cin >> radius_from_user;
    std::cout << "" << std::endl;
    std::cout << "Enter the height of the cylinder (mm): ";
    std::cin >> height_from_user;
    std::cout << "" << std::endl;

    try {
        radius = std::stoi(radius_from_user);
        height = std::stoi(height_from_user);
        // Call function
        volume = cylinderVolumeCalculation(radius, height);

        if (volume == -1) {
            std::cout << "Invalid Input" << std::endl;
        } else {
            std::cout << "The volume of a cylinder with the radius of "
                      << radius << " mm and the height of " << height << " mm is "
                      << volume << " mm³.";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
