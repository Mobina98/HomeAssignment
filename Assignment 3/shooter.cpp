#include <iostream>
#include "transformer.h"
#include "shooter.h"

Shooter::Shooter(const std::string &name, const std::string &fraction, const int &health,
                 const std::string &gun_type, const int &damage, const
                 int &ammo, const int &move_speed): Transformer(name, fraction, health, gun_type, damage, ammo,move_speed) {
    
    // Set all attributes using setter methods for proper initialization
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


// Method for the Shooter to defend (possibly reduces incoming damage)
// Returns true to indicate successful defense action 
bool Shooter::defend() {
    std::cout << get_name() << " defends" << std::endl;

    return true;
}


// Method for the Shooter to use their ultimate ability
bool Shooter::ultimate() {
    std::cout << get_name() << " take a second riffle" << std::endl;

    return true;
}


// Getter for the Shooter's current rage level 
unsigned int Shooter::get_rage() {
    return _rage;  // Returns the private _rage member variable  
}

// Setter for the Shooter's rage level 
void Shooter::set_rage(unsigned int rage) {
    this->_rage = rage;  // Updates the private _rage member variable
}

// Getter for the Shooter's current ultimate ability points  
unsigned int Shooter::get_points_to_ulta() {
    return _points_to_ulta;
}

// Setter for the Shooter's ultimate ability points
void Shooter::set_points_to_ulta(unsigned int points_to_ulta) {
    this->_points_to_ulta = points_to_ulta;  // Updates the private _points_to_ulta member variable  
}
