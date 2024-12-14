/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment2b: Reverse Polish Notation
 */
#include <iostream>
#include "revpolnot.hpp"

int main() {
	std::string input;
	std::getline(std::cin, input);
	
	std::stringstream stream(input);

	double result = calc(stream);

	std::cout << "RESULT OF CALCULATION: " << result << '\n';
}