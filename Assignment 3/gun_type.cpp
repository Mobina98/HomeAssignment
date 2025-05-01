#include <iostream>
#include "gun_type.h"

std::string Gun::get_gun_type() const {
    return _gun_type;
}

void Gun::set_gun_type(std::string gun_type) {
    _gun_type = std::move(gun_type);
}

unsigned int Gun::get_ammo() const {
    return _ammo;
}

void Gun::set_ammo(const unsigned int ammo) {
    _ammo = ammo;
}

unsigned int Gun::get_damage() const {
    return _damage;
}

void Gun::set_damage(const unsigned int damage) {
    _damage = damage;
}

Gun::Gun(const std::string &gun_type, const unsigned int &damage, const unsigned int &ammo) {
    set_gun_type(gun_type);
    set_damage(damage);
    set_ammo(ammo);

    std::cout << "Gun was created\n";
}

AKM::AKM(const std::string &name, const unsigned int &damage, const unsigned int &ammo): Gun(name, damage, ammo) {
    set_gun_type(name);
    set_ammo(damage);
    set_damage(ammo);
}

AWP::AWP(const std::string &name, const unsigned int &damage, const unsigned int &ammo): Gun(name, damage, ammo) {
    set_gun_type(name);
    set_ammo(damage);
    set_damage(ammo);
}

Bazooka::Bazooka(const std::string &name, const unsigned int &damage,
                 const unsigned int &ammo): Gun(name, damage, ammo) {
    set_gun_type(name);
    set_ammo(damage);
    set_damage(ammo);
}

Arm::Arm(const std::string &name, const unsigned int &damage, const unsigned int &ammo): Gun(name, damage, ammo) {
    set_gun_type(name);
    set_ammo(damage);
    set_damage(ammo);
}