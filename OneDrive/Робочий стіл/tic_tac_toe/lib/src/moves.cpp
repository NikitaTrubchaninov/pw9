#include "moves.h"
#include <iostream>

int move1() {
    int move;
    std::cout << "enter num (1-9): ";
    std::cin >> move;
    while (move < 1 || move > 9 || h1[move] != '-') {
        std::cout << "incorrect, try again: ";
        std::cin >> move;
    }
    return move;
}

int move2() {
    int move;
    std::cout << "enter num (1-16): ";
    std::cin >> move;
    while (move < 1 || move > 16 || h2[move] != '-') {
        std::cout << "incorrect, try again: ";
        std::cin >> move;
    }
    return move;
}

int move3() {
    int move;
    std::cout << "enter num (1-25): ";
    std::cin >> move;
    while (move < 1 || move > 25 || h3[move] != '-') {
        std::cout << "incorrect, try again: ";
        std::cin >> move;
    }
    return move;
}