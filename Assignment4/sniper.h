#ifndef SNIPER_H
#define SNIPER_H

#include "transformer.h"
#include <iostream>

class Sniper : public Transformer
{
public:
    Sniper(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
           const int &damage, const int &ammo, const int &move_speed);

    ~Sniper() = default;

    static bool scope();

    static bool hide();

    bool ultimate() override;

    unsigned int get_mind_control();
    void set_mind_control(unsigned int mind_control);

    unsigned int get_points_to_ulta();
    void set_points_to_ulta(unsigned int points_to_ulta);

    // Surcharge des opérateurs de flux
    friend std::ostream& operator<<(std::ostream& os, const Sniper& sniper);
    friend std::istream& operator>>(std::istream& is, Sniper& sniper);

private:
    unsigned int _mind_control{};
    unsigned int _points_to_ulta{};
};

#endif // SNIPER_H
