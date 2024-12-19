#include <iostream>

std::string hello() {
    setlocale(LC_ALL, "English");

    std::cout << __cplusplus << std::endl;

    std::string input;
    std::getline(std::cin, input);
    
    return input;
}
