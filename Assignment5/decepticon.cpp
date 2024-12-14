/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment5: Transformers classes
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


bool Decepticon::operator<(const Decepticon& other) const {
    return (_sword.getSharpness() * _sword.getLength()) < (other.getSharpnessOfBlade() * other.getLengthOfBlade());
}

bool Decepticon::operator>(const Decepticon& other) const {
    return (_sword.getSharpness() * _sword.getLength()) > (other.getSharpnessOfBlade() * other.getLengthOfBlade());
}


void Decepticon::transform() {
    std::cout << "Method 'transform' of class 'Decepticon'\n";
    std::cout << "TRANSFORMING OF Decepticon ZZZZZZ...\n\n";
}

void Decepticon::openFire() {
    std::cout << "Method 'openFire' of class 'Decepticon'\n";
    std::cout << "Decepticon, FIRE! FIRE! BAHBAHBAH...\n\n";
}

void Decepticon::ulta() {
    std::cout << "Method 'ulta' of class 'Decepticon'\n";
    std::cout << "MEGA ULTA OF Decepticon! ZHAAAAAAZH.....\n\n";
}



void Decepticon::setSharpnessOfBlade(const uint &sharpnessOfBlade) {
    _sword.setSharpness(sharpnessOfBlade);
}

void Decepticon::setLengthOfBlade(const uint &lengthOfBlade) {
    _sword.setLength(lengthOfBlade);
}


uint Decepticon::getSharpnessOfBlade() const {
    return _sword.getSharpness();
}

uint Decepticon::getLengthOfBlade() const {
    return _sword.getLength();
}

std::ostream& operator<<(std::ostream& os, const Decepticon& dec) {
    os << dec.getName() << ' ';
    os << dec.getSharpnessOfBlade() << ' ';
    os << dec.getLengthOfBlade();

    return os;
}