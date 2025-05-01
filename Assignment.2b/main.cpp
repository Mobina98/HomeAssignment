//Mobina Ahmadimasoud, st067173@student.spbu.ru, 24.B83
#include "header.h"

int main() 
{
    const int maxSize = 100;
    double* stack = new double[maxSize];  // Using a pointer for the stack
    int top = -1;  // Stack pointer/index
    
    std::string input;
    
    std::cout << "Enter input in R.PNotation: "; 
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::string token;

    while (iss >> token) 
    {
        if (token == "+" || token == "-" || token == "*" || token == "/") 
        {
            if (top < 1) 
            {
                std::cout << "not enough operands for operation " << token << std::endl;
                delete[] stack;  // Free memory before returning
                return 0;
            }

            double b = stack[top--];
            double a = stack[top--];

            double result = 0;
            switch (token[0]) 
            {
                case '+': result = a + b; break;
                case '-': result = a - b; break;
                case '*': result = a * b; break;
                case '/': 
                    if (b == 0) {
                        std::cout << "Error: Division by zero" << std::endl;
                        delete[] stack;  // Free memory before returning
                        return 0;
                    }
                    result = a / b; 
                    break;
            }

            stack[++top] = result;
        } 
        else 
        {
            try {
                double number = std::stod(token);
                if (top >= maxSize - 1) {
                    std::cout << "Stack overflow" << std::endl;
                    delete[] stack;  // Free memory before returning
                    return 0;
                }
                stack[++top] = number;
            } catch (const std::invalid_argument&) {
                std::cout << "Invalid token: " << token << std::endl;
                delete[] stack;  // Free memory before returning
                return 0;
            }
        }
    }

    if (top != 0) 
    {
        std::cout << "incorrect input" << std::endl;
        delete[] stack;  // Free memory before returning
        return 0;
    }

    std::cout << "Result: " << stack[top] << std::endl;
    
    // Free the allocated memory
    delete[] stack;
    return 0;
}