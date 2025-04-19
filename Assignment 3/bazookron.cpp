#include <iostream>
#include "bazookron.h"


Bazookron::Bazookron(const std::string &name, const std::string &fraction, const int &health,
                     const std::string &gun_type,
                     const int &damage, const int &ammo, const int &move_speed): Transformer(
    name, fraction, health, gun_type, damage, ammo, move_speed) {
    // No need to set these properties again as they're already set by the base class constructor
    set_stabilization(100);
    set_points_to_ulta(0);
    std::cout << name << " was created" << std::endl;
}


bool Bazookron::guide_gun() {
    std::cout << get_name() << " adjusts the weapon to the target" << std::endl;
    return true;
}

bool Bazookron::ultimate() {
    std::cout << get_name() << " loads a 'baby' bomb into a bazooka" << std::endl;
    return true;
}

unsigned int Bazookron::get_stabilization() const {
    return _stabilization;
}

void Bazookron::set_stabilization(unsigned int stabilization) {
    this->_stabilization = stabilization;
}

unsigned int Bazookron::get_points_to_ulta() const {
    return _points_to_ulta;
}

void Bazookron::set_points_to_ulta(unsigned int points_to_ulta) {
    this->_points_to_ulta = points_to_ulta;
}