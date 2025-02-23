/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment3: Transformers classes
 */

#include "autobot.hpp"

Autobot::Autobot(const std::string &name, const uint &level, Weapon &blaster, const uint &strength,
const uint &fuel, const uint &ammo) : Transformer(name, level, blaster, strength, fuel, ammo)
{
	set_power_of_blaster(100);
	setColor("black");
	std::cout << "Autobot " << name << " has been created!\n";
}


std::string Autobot::getColor() {
	return _color;
}

void Autobot::setColor(const std::string &color) {
	_color = color;
}

unsigned int Autobot::get_power_of_blaster() const {
	return _powerOfBlaster;
}

void Autobot::set_power_of_blaster(unsigned int power_of_blaster) {
	_powerOfBlaster = power_of_blaster;
}

bool Autobot::phrase(const std::string &phrase) {
	std::cout << "Autobot phrase " << phrase << "\n";
	return true;
}

bool Autobot::check() {
	std::cout << "Autobot check area\n";
	return true;
}