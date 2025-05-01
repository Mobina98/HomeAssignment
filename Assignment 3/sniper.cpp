#include <iostream>
#include "sniper.h"
#include "transformer.h"


Sniper::Sniper(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
               const int &damage, const int &ammo, const int &move_speed): Transformer(
    name, fraction, health, gun_type, damage, ammo,
    move_speed) {
    set_name(name);
    set_health(health);
    set_gun_type(gun_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    set_mind_control(70);
    set_points_to_ulta(0);
}


bool Sniper::scope() {
    std::cout << "Sniper use scope" << std::endl;
    return true;
}

bool Sniper::hide() {
    std::cout << "Sniper use camouflage" << std::endl;
    return true;
}

bool Sniper::ultimate() {
    std::cout << get_name() << " take a breath and shoot headshot" << std::endl;
    return true;
}

unsigned int Sniper::get_mind_control() {
    return _mind_control;
}

void Sniper::set_mind_control(unsigned int mind_control) {
    this->_mind_control = mind_control;
}

unsigned int Sniper::get_points_to_ulta() {
    return _points_to_ulta;
}

void Sniper::set_points_to_ulta(unsigned int points_to_ulta) {
    this->_points_to_ulta = points_to_ulta;
}
