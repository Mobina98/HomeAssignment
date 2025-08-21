#include <iostream>
#include "transformer.h"
#include "voice.h"

// Definition of the Transformer class constructor that includes a Voice object
// This is an overloaded constructor that takes 8 parameters
Transformer::Transformer(const std::string &name, const std::string &fraction, const int &health,
                         const std::string &gun_type, const int &damage, const
                         int &ammo, const int &move_speed, const Voice &voice) {
    set_name(name); // Initialize the new object's properties using setter methods 
    set_health(health);
    set_gun_type(gun_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    _voice = new Voice(voice);  // Dynamically allocate a new Voice object as a copy of the provided 'voice' parameter
    std::cout << name << " was created" << std::endl;  // Print a message to the console confirming the object's creation
}

// Definition of the Transformer class constructor that does NOT include a Voice object
// This is an overloaded constructor that takes 7 parameters
Transformer::Transformer(const std::string &name, const std::string &fraction, const int &health,
                         const std::string &gun_type, const int &damage, const
                         int &ammo, const int &move_speed) {
    set_name(name);  // Initialize the new object's properties using setter methods
    set_health(health);
    set_gun_type(gun_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    _voice = nullptr;  // Set the voice pointer to nullptr (meaning it doesn't point to any Voice object)
    std::cout << name << " was created" << std::endl;  // Print a message to the console confirming the object's creation
}

// Definition of the Transformer class destructor
// This is automatically called when a Transformer object is destroyed
Transformer::~Transformer() {
    delete _voice; // Delete the dynamically allocated Voice object to free the memory (if it exists) 
    _voice = nullptr;  // Set the pointer to nullptr to avoid a dangling pointer
    std::cout << get_name() << " was destroyed" << std::endl; // Print a message to the console confirming the object's destruction 
}

// Implementation of the transform() action method
// 'const' means this method does not modify the object's member variables
bool Transformer::transform() const {
    std::cout << get_name() << " transforms" << std::endl;  // Print an action message to the console

    return true;  // Return true to indicate the action was successful
}

// Implementation of the attack() action method
bool Transformer::attack() const {
    std::cout << get_name() << " attacks with " << get_gun_type() << std::endl;  // Print an action message that includes the gun type

    return true;
}

// Implementation of the move() action method
bool Transformer::move() const {
    std::cout << get_name() << " moves" << std::endl;

    return true;
}

// Implementation of the jump() action method
bool Transformer::jump() const {
    std::cout << get_name() << " jumps" << std::endl;
    return true;
}

// Implementation of the ultimate() action method
// This method is not 'const' because it might modify the object's state in the future
bool Transformer::ultimate() {
    std::cout << "Transformer ultimates" << std::endl;

    return true;
}

// Implementation of the phrase() action method
bool Transformer::phrase() {
    std::cout << "Today you will die!" << std::endl;

    return true;
}

// Getter method for the _name member variable
std::string Transformer::get_name() const {
    return _name;
}

// Setter method for the _name member variable
// std::move is used for optimization (moves the string instead of copying it)
void Transformer::set_name(std::string name) {
    _name = std::move(name);
}

// Getter method for the _health member variable
unsigned int Transformer::get_health() const {
    return _health;
}

// Setter method for the _health member variable
void Transformer::set_health(unsigned int health) {
    _health = health;
}

// Getter method for the _gun_type member variable
std::string Transformer::get_gun_type() const {
    return _gun_type;
}

// Setter method for the _gun_type member variable
void Transformer::set_gun_type(std::string gun_type) {
    _gun_type = std::move(gun_type);
}

// Getter method for the _damage member variable
unsigned int Transformer::get_damage() const {
    return _damage;
}

// Setter method for the _damage member variable
void Transformer::set_damage(unsigned int damage) {
    _damage = damage;
}

// Getter method for the _move_speed member variable
unsigned int Transformer::move_speed() const {
    return _move_speed;
}

// Setter method for the _move_speed member variable
void Transformer::set_move_speed(unsigned int move_speed) {
    _move_speed = move_speed;
}

// Getter method for the _ammo member variable
unsigned int Transformer::get_ammo() const {
    return _ammo;
}

// Setter method for the _ammo member variable
void Transformer::set_ammo(unsigned int ammo) {
    _ammo = ammo;
}

// Getter method for the _fraction member variable
std::string Transformer::get_fraction() const {
    return _fraction;
}

// Setter method for the _fraction member variable
void Transformer::set_fraction(std::string fraction) {
    _fraction = std::move(fraction);
}

// Getter method for the _voice pointer
// Returns a pointer to the Voice object (or nullptr if it doesn't exist)
Voice *Transformer::get_voice() const {
    return _voice;
}

// Setter method for the _voice pointer
// Check if a Voice object already exists
void Transformer::set_voice(const Voice &voice) {
    if (_voice != nullptr) {
        *_voice = voice;  // If it does, assign the new voice to the existing object (dereference the pointer)
        return;
    }
    _voice = new Voice(voice);  // If no Voice object exists, dynamically allocate a new one as a copy of the provided voice
}
