#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include <iostream>

#include "voice.h"

// 'public:' members are accessible from anywhere in the code
// Constructor declaration: Creates a Transformer with a Voice object
class Transformer {
public:
    Transformer(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
                const int &damage, const int &ammo, const int &move_speed, const Voice &voice);

    // Overloaded Constructor: Creates a Transformer without a Voice object
    Transformer(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
                const int &damage, const int &ammo, const int &move_speed);

    // Virtual Destructor: Ensures correct cleanup for derived classes (Sniper, Medic, etc.)
    virtual ~Transformer();

    std::string get_name() const;

    void set_name(std::string name);

    unsigned int get_health() const;

    void set_health(unsigned int health);

    std::string get_gun_type() const;

    void set_gun_type(std::string gun_type);

    unsigned int get_damage() const;

    void set_damage(unsigned int damage);

    unsigned int move_speed() const;

    void set_move_speed(unsigned int move_speed);

    unsigned int get_ammo() const;

    void set_ammo(unsigned int ammo);

    std::string get_fraction() const;

    void set_fraction(std::string fraction);

    Voice *get_voice() const;

    void set_voice(const Voice &voice);

    bool transform() const;    // Action method: Command the transformer to transform

    bool attack() const;    // Action method: Command the transformer to attack

    bool move() const;    // Action method: Command the transformer to move

    bool jump() const;    // Action method: Command the transformer to jump

    // Virtual Action method: Command the transformer to use its ultimate ability.
    // 'virtual' means derived classes can provide their own implementation.
    virtual bool ultimate();

    // Static Action method: A phrase that is common to all Transformers.
    // 'static' means this method is called on the class itself, not on an object instance.
    static bool phrase();

// 'private:' members are only accessible from within the class methods
private:
    std::string _name;

    unsigned int _health;

    std::string _gun_type;

    unsigned int _damage;
    unsigned int _move_speed;
    unsigned int _ammo;
    std::string _fraction;

    Voice *_voice;    // Member variable: A pointer to a Voice object
};


#endif //TRANSFORMER_H
