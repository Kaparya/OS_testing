#include "operations.hpp"

#include <iostream>

int main() {
    long double lhs, rhs;
    std::cout << "Input first number: ";
    std::cin >> lhs;
    std::cout << "Input second number: ";
    std::cin >> rhs;
    int operation;
    std::cout << "0. +\n1. -\n2. *\n3. /\n";
    std::cout << "Input number of operation: ";
    std::cin >> operation;
    long double result;
    switch (operation) {
        case 0:
            result = sum(lhs, rhs);
            break;
        case 1:
            result = subtraction(lhs, rhs);
            break;
        case 2:
            result = multiplication(lhs, rhs);
            break;
        case 3:
            result = division(lhs, rhs);
            break;
        default:
            std::cout << "Wrong number of operation!" << std::endl;
            return -1;
    }
    std::cout << result << std::endl;
    return 0;
}
