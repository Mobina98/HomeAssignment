/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment4: Transformers classes
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


bool Autobot::operator<(const Autobot& other) const {
    return _weapon.getPower() < other.getPowerOfBlaster();
}

bool Autobot::operator>(const Autobot& other) const {
    return _weapon.getPower() > other.getPowerOfBlaster();
}



void Autobot::setPowerOfBlaster(const uint &powerOfBlaster) {
    _weapon.setPower(powerOfBlaster);
}

void Autobot::setCapacityOfBlaster(const uint &capacityOfBlaster) {
    _weapon.setCapacity(capacityOfBlaster);
}

void Autobot::setColor(const std::string &color) {
    _color = color;
}


uint Autobot::getPowerOfBlaster() const {
    return _weapon.getPower();
}

uint Autobot::getCapacityOfBlaster() const {
    return _weapon.getCapacity();
}

std::string Autobot::getColor() const {
    return _color;
}


std::ostream& operator<<(std::ostream& os, const Autobot& atbot) {
    os << atbot.getName() << ' ';
    os << atbot.getPowerOfBlaster() << ' ';
    os << atbot.getCapacityOfBlaster() << ' ';
    os << atbot.getColor();

    return os;
}