/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment2b: Reverse Polish Notation
 */

#include "revpolnot.hpp"

void push(double *stack, double **p, double el) { // Add an element to the stack and move the pointer
	*p = *p + 1;
	**p = el;
}

double pop(double *stack, double **p) { // Removing an element from the stack and returning it
	double res = **p;
	*p = *p - 1;
	return res;
}

bool issign(std::string c) {
	return (c == "+" || c == "-" || c == "*" || c == "/");
}

double calc(std::stringstream& stream) { // The main function of the algorithm reverse polish notation
	double *stack = new double[1000]; // Declaration stack
	double *p = (stack - 1); // The pointer points to the top of the stack

	std::string c;
	while (stream >> c) {
		if (!issign(c)) { // If the symbol is a number, then push on the top
			double el = (double)(std::stoi(c));
			push(stack, &p, el);
		} else { // Otherwise, we take two elements and perform the operation
			double a = pop(stack, &p);
			double b = pop(stack, &p);

			double res = 0.;
			if (c == "+")
				res = b + a;
			else if (c == "-")
				res = b - a;
			else if (c == "*")
				res = b * a;
			else res = b / a;
			push(stack, &p, res);
		}
	}

	double result = *p;
	delete[] stack;
	return result;
}