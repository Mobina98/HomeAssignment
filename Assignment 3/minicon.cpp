/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment3: Transformers classes
 */

#include "minicon.hpp"
#include "weapon.h"

Minicon::Minicon(const std::string &name, const uint &level, Weapon &blaster, const uint &strength,
const uint &fuel, const uint &ammo) : Transformer(name, level, blaster, strength, fuel, ammo)
{
	setEnergy(1);
	setSize(3);
	std::cout << "Minicon " << name << " has been created!\n";
}


bool Minicon::work() {
	return true;
}


void Minicon::setEnergy(const uint &energy) {
	_energy = energy;
}

void Minicon::setSize(const uint &size) {
	_size = size;
}


uint Minicon::getEnergy() {
	return _energy;
}

uint Minicon::getSize() {
	return _size;
}