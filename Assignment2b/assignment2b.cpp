#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include "assignment2b.h"


float calculatePolishEntry(std::string input) {
    const int stackMax = 100;
    float stack[stackMax];
    int top = -1;

    std::istringstream stream(input);
    std::string token;

    while (stream >> token) {
        if (std::isdigit(token[0]) || (token.length() > 1 && token[0] == '-' && std::isdigit(token[1]))) {
            stack[++top] = std::stof(token.c_str());
        }
        else {
            if (top < 1) {
                std::cerr << "Not enough operands. Program stops.\n";
                return -1;
            }
            float a = stack[top--];
            float b = stack[top--];
            switch (token[0]) {
                case '+': stack[++top] = b + a; break;
                case '-': stack[++top] = b - a; break;
                case '*': stack[++top] = b * a; break;
                case '/':
                    if (a == 0.0) {
                        std:: cerr << "Dividng by zero. Program stops\n";
                        return -1;
                    }
                stack[++top] = b / a; break;
            }
            /* In case of division or subtraction, I'll leave a hint: in the example "3 - 4"
                I thought it would be more correct to pass the operands as "3 4 -"
                Where the first will be the number from which they subtract, and the second as the subtrahend.
                Because doing the opposite will be intuitively unclear
            */
        }
    }
    return stack[top];
}

int main(){

  std::string input;
  std::cout << "Input polish notation: ";
  std::getline(std::cin, input);
  std::cout<<std::endl;
  float result = calculatePolishEntry(input);
  std::cout << "Result: " << result << "\n";
}