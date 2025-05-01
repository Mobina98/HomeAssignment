#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include <iostream>

#include "voice.h"

class Transformer {
public:
    Transformer(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
                const int &damage, const int &ammo, const int &move_speed, const Voice &voice);

    Transformer(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
                const int &damage, const int &ammo, const int &move_speed);

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

    bool transform() const;

    bool attack() const;

    bool move() const;

    bool jump() const;

    virtual bool ultimate();


    static bool phrase();

private:
    std::string _name;

    unsigned int _health;

    std::string _gun_type;

    unsigned int _damage;
    unsigned int _move_speed;
    unsigned int _ammo;
    std::string _fraction;

    Voice *_voice;
};


#endif //TRANSFORMER_H