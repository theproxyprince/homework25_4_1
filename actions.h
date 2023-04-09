#pragma once
#include <iostream>
#include <vector>

struct Coordinates {
    int x;
    int y;

    void input() {
        int _x, _y;
        std::cout << "Input x and y: ";
        std::cin >> _x >> _y;
        x = _x;
        y = _y;
    }
};

struct fieldOfOperation {
    Coordinates coordinates;
};

std::vector<Coordinates> scalpel(Coordinates, Coordinates);
void hemostat(Coordinates);
void tweezers(Coordinates);
void suture(std::vector<Coordinates>);
