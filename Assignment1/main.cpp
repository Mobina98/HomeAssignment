#include <iostream>
#include "hello.h"
int main() {
    setlocale(LC_ALL, "English");

    std::cout << "Hello World!\n";

    while (true) {
        std::string input = hello();
        std::cout << "Hello " + input + "!\n";
    }

    return 0;
}
