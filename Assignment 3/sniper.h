#ifndef SNIPER_H
#define SNIPER_H
#include "transformer.h"


class Sniper : public Transformer {
public:
    Sniper(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
           const int &damage, const int &ammo, const int &move_speed);

    ~Sniper() = default;

    // Static Methods
    // Static because scoping behavior is universal to all snipers
    static bool scope();

    static bool hide();

    bool ultimate() override;

    // Gets current focus level
    unsigned int get_mind_control();

    // Sets focus level
    void set_mind_control(unsigned int mind_control);

    // Gets ultimate charge progress
    unsigned int get_points_to_ulta();

    // Sets ultimate charge
    void set_points_to_ulta(unsigned int points_to_ulta);

private:
    unsigned int _mind_control{};  // Aim stability metric
    unsigned int _points_to_ulta{};  // Ultimate ability charge
};


#endif //SNIPER_H
