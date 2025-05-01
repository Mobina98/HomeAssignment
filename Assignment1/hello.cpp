#include <iostream>

std::string hello() {
    setlocale(LC_ALL, "russian");
    std::string input;
    std::getline(std::cin, input);
    return input;
}
