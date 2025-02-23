/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment3: Transformers classes
 */

#include "transformer.hpp"
#include "weapon.h"


Transformer::Transformer(const std::string &name, const uint &level, Weapon &weapon, const uint &strength,
                         const uint &fuel, const uint &ammo) : _name(name),_weapon(weapon),
                                                               _strength(strength), _fuel(fuel), _ammo(ammo) {

    _level = new uint(level);
    std::cout << "Transformer " << name << " has been created!\n";
}

Transformer::Transformer(const std::string &name, Weapon &weapon, const uint &strength,
                         const uint &fuel, const uint &ammo) : _name(name), _weapon(weapon),
                                                               _strength(strength), _fuel(fuel), _ammo(ammo) {
    std::cout << "Transformer " << name << " has been created!\n";
}


Transformer::~Transformer() {
    delete _level;
    std::cout << "Transformer " << _name << " has been eliminated\n";
}


void Transformer::setName(const std::string &name) {
    _name = name;
}

void Transformer::setLevel(const uint &level) {
    _level = new uint(level);
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


std::string Transformer::getName() {
    return _name;
}

uint* Transformer::getLevel() {
    return _level;
}

uint Transformer::getStrength() {
    return _strength;
}

uint Transformer::getFuel() {
    return _fuel;
}

uint Transformer::getAmmo() {
    return _ammo;
}

Weapon Transformer::get_weapon() const {
    return _weapon;
}

void Transformer::set_weapon(const Weapon &weapon) {
    _weapon = weapon;
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