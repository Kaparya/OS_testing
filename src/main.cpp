#include <iostream>

#include "operations.hpp"

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << sum(a, b);
    return 0;
}