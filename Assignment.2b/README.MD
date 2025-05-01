# Assignment 2b - Reverse Polish Notation Calculator

## Author Information
- **Name:** Mobina Ahmadimasoud
- **Group:** 24.B83-mm
- **Email:** st067173@student.spbu.ru

## Program Description
This program implements a calculator for expressions in Reverse Polish Notation (RPN). In RPN, operators follow their operands, which eliminates the need for parentheses and makes evaluation straightforward using a stack.

### Implementation Details
- The program uses a pointer-based stack implementation
- Supports basic arithmetic operations: +, -, *, /
- Handles floating-point numbers
- Includes error checking for:
  - Division by zero
  - Insufficient operands
  - Invalid input tokens
  - Stack overflow

## Building the Program
```
make
```

## Running the Program
```
./myProg
```

## Example Usage
```
Enter input in R.PNotation: 5 3 +
Result: 8

Enter input in R.PNotation: 7 2 * 4 +
Result: 18

Enter input in R.PNotation: 10 5 / 2 *
Result: 4
```

## Cleaning Up
To remove compiled files:
```
make clean
```