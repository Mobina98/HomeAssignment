/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment3: Transformers classes
 */

#include "autobot.hpp"

Autobot::Autobot(const std::string &name, const std::string &color, const uint &powerOfBlaster, const uint &capacityOfBlaster) :
	Transformer(name),
	_color(color),
	_weapon(powerOfBlaster, capacityOfBlaster)
{
	std::cout << "Autobot " << name << " has been created!\n";
}

Autobot::Autobot(const std::string &name) :
	Autobot(name, "Unknown", 0, 0)
{}

Autobot::Autobot() :
	Autobot("Untitled", "Unknown", 0, 0)
{}



void Autobot::setPowerOfBlaster(const uint &powerOfBlaster) {
	_weapon.setPower(powerOfBlaster);
}

void Autobot::setCapacityOfBlaster(const uint &capacityOfBlaster) {
	_weapon.setCapacity(capacityOfBlaster);
}

void Autobot::setColor(const std::string &color) {
	_color = color;
}


uint Autobot::getPowerOfBlaster() {
	return _weapon.getPower();
}

uint Autobot::getCapacityOfBlaster() {
	return _weapon.getCapacity();
}

std::string Autobot::getColor() {
	return _color;
}