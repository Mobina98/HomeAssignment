#include <iostream>
#include <string>

std::string hello() {
    std::cout << "Hello, please enter your name: ";
    std::string input;
    std::getline(std::cin, input);
    return "Hello, " + input + "!";
}

int main() {
    std::string greeting = hello();
    std::cout << greeting << std::endl;
    return 0;
}