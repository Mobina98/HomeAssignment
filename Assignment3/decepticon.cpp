/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment3: Transformers classes
 */

#include "decepticon.hpp"

Decepticon::Decepticon(const std::string &name, const uint &sharpnessOfBlade, const uint &lengthOfBlade) :
	Transformer(name),	
	_sword(sharpnessOfBlade, lengthOfBlade)
{
	std::cout << "Decepticon " << name << " has been created!\n";
}

Decepticon::Decepticon(const std::string &name) :
	Decepticon(name, 0, 0)
{}

Decepticon::Decepticon() :
	Decepticon("Untitled", 0, 0)
{}


void Decepticon::setSharpnessOfBlade(const uint &sharpnessOfBlade) {
	_sword.setSharpness(sharpnessOfBlade);
}

void Decepticon::setLengthOfBlade(const uint &lengthOfBlade) {
	_sword.setLength(lengthOfBlade);
}


uint Decepticon::getSharpnessOfBlade() {
	return _sword.getSharpness();
}

uint Decepticon::getLengthOfBlade() {
	return _sword.getLength();
}