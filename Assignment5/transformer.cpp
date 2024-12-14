/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment5: Transformers classes
 */

#include "transformer.hpp"

/*Transformer::Transformer(std::string name, uint level, uint strength, uint fuel, uint ammo) {
	_name = name;
	_level = level;
	_strength = strength;
	_fuel = fuel;
	_ammo = ammo;
	std::cout << "Transformer " << name << " has been created!\n";
}*/
Transformer::Transformer(const std::string &name, const uint &level, const uint &strength, const uint &fuel, const uint &ammo) :
    _name(name),
    _level(level),
    _strength(strength),
    _fuel(fuel),
    _ammo(ammo)
{
    std::cout << "Transformer " << name << " has been created!\n";
}

Transformer::Transformer(const std::string &name) :
    Transformer(name, 0, 0, 0, 0)
{}

Transformer::Transformer() :
    Transformer("Untitled", 0, 0, 0, 0)
{}

Transformer::~Transformer() {
    std::cout << "Transformer " << _name << " has been eliminated\n";
}



bool Transformer::operator<(const Transformer& other) const {
    return _strength < other.getStrength();
}

bool Transformer::operator>(const Transformer& other) const {
    return _strength > other.getStrength();
}


void Transformer::transform() {
    std::cout << "Method 'Transform' of class 'Transformer'\n";
    std::cout << "TRANSFORMING OF Transformer ZZZZZZ...\n\n";
}

void Transformer::openFire() {
    std::cout << "Method 'openFire' of class 'Transformer'\n";
    std::cout << "Transformer, FIRE! FIRE! BAHBAHBAH...\n\n";
}

void Transformer::ulta() {
    std::cout << "Method 'ulta' of class 'Transformer'\n";
    std::cout << "MEGA ULTA OF Transformer! ZHAAAAAAZH.....\n\n";
}



void Transformer::setName(const std::string &name) {
    _name = name;
}

void Transformer::setLevel(const uint &level) {
    _level = level;
}

void Transformer::setStrength(const uint &strength) {
    _strength = strength;
}

void Transformer::setFuel(const uint &fuel) {
    _fuel = fuel;
}

void Transformer::setAmmo(const uint &ammo) {
    _ammo = ammo;
}



std::string Transformer::getName() const {
    return _name;
}

uint Transformer::getLevel() const {
    return _level;
}

uint Transformer::getStrength() const {
    return _strength;
}

uint Transformer::getFuel() const {
    return _fuel;
}

uint Transformer::getAmmo() const {
    return _ammo;
}

std::ostream& operator<<(std::ostream& os, const Transformer& trans) {
    os << trans.getName() << ' ';
    os << trans.getLevel() << ' ';
    os << trans.getStrength() << ' ';
    os << trans.getFuel() << ' ';
    os << trans.getAmmo();

    return os;
}


bool Transformer::fire() {
    return true;
}

bool Transformer::move() {
    return true;
}

bool Transformer::jump() {
    return true;
}