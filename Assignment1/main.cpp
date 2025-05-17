#include <iostream>
#include "hello.h"
int main() {
    std::cout << "Hello World!\n";
    while (true) {
        std::string input = hello();
        std::cout << "Hello " + input + "!\n";
    }

}
