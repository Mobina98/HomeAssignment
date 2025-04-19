#include <iostream>
#include "hello.h"

int main() {
    setlocale(LC_ALL, "russian");
    std::cout << "Hello World!\n";
    
    bool running = true;
    while (running) {
        std::string input = hello();
        
        // Exit condition - if user enters "exit"
        if (input == "exit") {
            running = false;
            std::cout << "Goodbye!\n";
        } else {
            std::cout << "Hello " + input + "!\n";
        }
    }
    
    return 0;
}