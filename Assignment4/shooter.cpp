#include <iostream>
#include "transformer.h"
#include "shooter.h"

Shooter::Shooter(const std::string &name, const std::string &fraction, const int &health,
                 const std::string &gun_type, const int &damage, const
                 int &ammo, const int &move_speed): Transformer(name, fraction, health, gun_type, damage, ammo,
                             move_speed)
{
    set_name(name);
    set_health(health);
    set_gun_type(gun_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    set_rage(0);
    set_points_to_ulta(0);
}


bool Shooter::defend()
{
    std::cout << get_name() << " defends" << std::endl;

    return true;
}


bool Shooter::ultimate()
{
    std::cout << get_name() << " take a second riffle" << std::endl;

    return true;
}


unsigned int Shooter::get_rage()
{
    return _rage;
}

void Shooter::set_rage(unsigned int rage)
{
    this->_rage = rage;
}

unsigned int Shooter::get_points_to_ulta()
{
    return _points_to_ulta;
}

void Shooter::set_points_to_ulta(unsigned int points_to_ulta)
{
    this->_points_to_ulta = points_to_ulta;
}