//Mobina Ahmadimasoud, st067173@student.spbu.ru, 24.B83
#include "header.h"

int main() 
{
    // Define maximum stack size and allocate memory dynamically
    const int maxSize = 100;           // Maximum capacity of the stack
    double* stack = new double[maxSize]; // Heap-allocated stack (array of doubles)
    int top = -1;                      // Stack pointer (initialized to -1 = empty)

    // Read user input
    std::string input;                 // Store the entire input expression
    std::cout << "Enter input in R.PNotation: "; 
    std::getline(std::cin, input);     // Read full line (spaces included)

    // Parse input token by token
    std::istringstream iss(input);     // Convert string to a stream
    std::string token;                 // Temporary storage for each token (number/operator)

    // Process each token in the input
    while (iss >> token) 
    {
        // Handle operators
        if (token == "+" || token == "-" || token == "*" || token == "/") 
        {
            // Check if there are enough operands
            if (top < 1) 
            {
                std::cout << "not enough operands for operation " << token << std::endl;
                delete[] stack;  // Free memory before returning
                return 0;
            }

            // Pop the top two operands
            double b = stack[top--];
            double a = stack[top--];

            // Perform the operation
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

            // Push the result back onto the stack
            stack[++top] = result;
        } 
        // Handle numbers
        else 
        {
            try {
                // Convert token to a double
                double number = std::stod(token);
                // Check for stack overflow
                if (top >= maxSize - 1) {
                    std::cout << "Stack overflow" << std::endl;
                    delete[] stack;  // Free memory before returning
                    return 0;
                }
                // Push the number onto the stack
                stack[++top] = number;
            } 
            // Handle invalid tokens (non-numbers)
            catch (const std::invalid_argument&) {
                std::cout << "Invalid token: " << token << std::endl;
                delete[] stack;  // Free memory before returning
                return 0;
            }
        }
    }

    // Check if the stack has exactly one value (valid RPN result)
    if (top != 0) 
    {
        std::cout << "incorrect input" << std::endl;
        delete[] stack;  // Free memory before returning
        return 0;
    }

    // Print the final result
    std::cout << "Result: " << stack[top] << std::endl;
    
    // Free the allocated memory
    delete[] stack;
    return 0;
}
