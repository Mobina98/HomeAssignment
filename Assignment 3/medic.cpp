#include <iostream>
#include "medic.h"


// Medic constructor - inherits from Transformer class
Medic::Medic(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
             const int &damage, const int &ammo, const int &move_speed): Transformer(name, fraction, health, gun_type,
    damage, ammo, move_speed) {
    
    // Set all character attributes
    set_name(name);
    set_health(health);
    set_gun_type(gun_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    set_medicines(100);       // Start with 100 medical supplies
    set_points_to_ulta(0);    // Ultimate ability starts at 0 points
}

// Attempts to heal (always returns true in this implementation)
bool Medic::heal() const {
    std::cout << get_name() << " use medicines to heal" << std::endl;

    return true;
}

// Activates the medic's ultimate ability
bool Medic::ultimate() {
    std::cout << get_name() << "returns to alive" << std::endl;
    return true;
}

// Returns current medicine count
unsigned int Medic::get_medicines() const {
    return _medicines;
}

// Updates medicine supply
void Medic::set_medicines(unsigned int medicines) {
    _medicines = medicines;
}

// Returns points needed for ultimate
unsigned int Medic::get_points_to_ulta() const {
    return _points_to_ulta;
}

// Sets ultimate ability progress
void Medic::set_points_to_ulta(unsigned int points_to_ulta) {
    _points_to_ulta = points_to_ulta;
}
