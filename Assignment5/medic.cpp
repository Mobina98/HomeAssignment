#include <iostream>
#include "medic.h"


Medic::Medic(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
             const int &damage, const int &ammo, const int &move_speed): Transformer(name, fraction, health, gun_type,
    damage, ammo, move_speed) {
    set_name(name);
    set_health(health);
    set_gun_type(gun_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    set_medicines(100);
    set_points_to_ulta(0);
}

bool Medic::heal() const {
    std::cout << get_name() << " use medicines to heal" << std::endl;

    std::cout << get_class_name() << " Method: " << __func__ << std::endl;

    return true;
}

bool Medic::ultimate() {
    std::cout << get_name() << "returns to alive" << std::endl;

    std::cout << get_class_name() << " Method: " << __func__ << std::endl;

    return true;
}

bool Medic::attack() const {
    std::cout << get_name() << "punch with uppercut" << std::endl;

    std::cout << get_class_name() << " Method: " << __func__ << std::endl;

    return true;
}

unsigned int Medic::get_medicines() const {
    return _medicines;
}

void Medic::set_medicines(unsigned int medicines) {
    _medicines = medicines;
}

unsigned int Medic::get_points_to_ulta() const {
    return _points_to_ulta;
}

void Medic::set_points_to_ulta(unsigned int points_to_ulta) {
    _points_to_ulta = points_to_ulta;
}