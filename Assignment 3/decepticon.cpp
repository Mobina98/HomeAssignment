/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment3: Transformers classes
 */

#include "decepticon.hpp"

Decepticon::Decepticon
(const std::string &name, const uint &level, Weapon &blaster, const uint &strength,
 const uint &fuel, const uint &ammo) : Transformer(name, level, blaster, strength, fuel, ammo) {
    setSharpnessOfBlade(1);
    setLengthOfBlade(3);
    std::cout << "Decepticon " << name << " has been created!\n";
}

bool Decepticon::agress() {
    return true;
}


void Decepticon::setSharpnessOfBlade(const uint &sharpnessOfBlade) {
    _sharpnessOfBlade = sharpnessOfBlade;
}

void Decepticon::setLengthOfBlade(const uint &lengthOfBlade) {
    _lengthOfBlade = lengthOfBlade;
}


uint Decepticon::getSharpnessOfBlade() {
    return _sharpnessOfBlade;
}

uint Decepticon::getLengthOfBlade() {
    return _lengthOfBlade;
}