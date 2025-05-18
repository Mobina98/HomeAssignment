#include <iostream>
#include "gun_type.h"

// Returns the type of gun (e.g., "AKM", "AWP")
std::string Gun::get_gun_type() const {
    return _gun_type;
}

// Sets the gun type (uses std::move for efficiency with strings)
void Gun::set_gun_type(std::string gun_type) {
    _gun_type = std::move(gun_type);
}

// Returns current ammo count
unsigned int Gun::get_ammo() const {
    return _ammo;
}

// Updates ammo count (const to ensure value isn't modified)
void Gun::set_ammo(const unsigned int ammo) {
    _ammo = ammo;
}

// Returns damage per shot
unsigned int Gun::get_damage() const {
    return _damage;
}

// Updates damage value
void Gun::set_damage(const unsigned int damage) {
    _damage = damage;
}

// Constructor: Initializes gun with type, damage, and ammo
Gun::Gun(const std::string &gun_type, const unsigned int &damage, const unsigned int &ammo) {
    set_gun_type(gun_type);
    set_damage(damage);
    set_ammo(ammo);

    std::cout << "Gun was created\n";
}

// AKM constructor: Calls Gun's constructor, then initializes properties
AKM::AKM(const std::string &name, const unsigned int &damage, const unsigned int &ammo): Gun(name, damage, ammo) {
    set_gun_type(name);
    set_ammo(damage);
    set_damage(ammo);
}

// AWP constructor: Identical structure to AKM
AWP::AWP(const std::string &name, const unsigned int &damage, const unsigned int &ammo): Gun(name, damage, ammo) {
    set_gun_type(name);
    set_ammo(damage);
    set_damage(ammo);
}

// Bazooka constructor
Bazooka::Bazooka(const std::string &name, const unsigned int &damage,
                 const unsigned int &ammo): Gun(name, damage, ammo) {
    set_gun_type(name);
    set_ammo(damage);
    set_damage(ammo);
}

// Arm constructor
Arm::Arm(const std::string &name, const unsigned int &damage, const unsigned int &ammo): Gun(name, damage, ammo) {
    set_gun_type(name);
    set_ammo(damage);
    set_damage(ammo);
}
