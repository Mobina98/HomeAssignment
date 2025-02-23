#include "weapon.h"



Weapon::Weapon(const std::string &name){
    setName(name);
}

void Weapon::setName(const std::string &name) {
    _name = name;
}

std::string Weapon::getName() const {
    return _name;
}