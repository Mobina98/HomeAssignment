/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment3: Transformers classes
 */

#ifndef TRANSFORMER
#define TRANSFORMER
#include <iostream>
#include <string>
#include "weapon.h"

class Transformer {
public:
    Transformer(const std::string &name, const uint &level, Weapon &weapon, const uint &strength,
                const uint &fuel, const uint &ammo);
    Transformer(const std::string &name, Weapon &weapon, const uint &strength,
                const uint &fuel, const uint &ammo);


    Transformer(const std::string &name);

    ~Transformer();

    void setName(const std::string &name);

    void setLevel(const uint &level);

    void setStrength(const uint &strength);

    void setFuel(const uint &fuel);

    void setAmmo(const uint &ammo);

    std::string getName();

    uint* getLevel();

    uint getStrength();

    uint getFuel();

    uint getAmmo();

    Weapon get_weapon() const;

    void set_weapon(const Weapon &weapon);

    bool fire();
    bool move();

    bool jump();

private:
    std::string _name;
    uint* _level;
    Weapon _weapon;
    uint _strength;
    uint _fuel;
    uint _ammo;
};

#endif