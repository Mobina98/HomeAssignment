#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>


class Weapon {
public:
    Weapon(const std::string&);
    ~Weapon() = default;

    std::string getName() const;
    void setName(const std::string &name);

private:
    std::string _name;
};



#endif //WEAPON_H