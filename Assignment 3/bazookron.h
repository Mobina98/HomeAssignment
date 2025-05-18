#ifndef BAZOOKRON_H
#define BAZOOKRON_H
#include "transformer.h"


// Bazookron class publicly inherits from Transformer (a base class)
class Bazookron : public Transformer {
public:  // Public members (accessible from outside the class)
    Bazookron(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
              const int &damage, const int &ammo, const int &move_speed);

    ~Bazookron() = default;

    // Simulates aiming the weapon
    bool guide_gun();

    // Ultimate ability (marked 'override' to ensure it replaces Transformer's version)
    bool ultimate() override;

    // Getter: Returns current weapon stabilization 
    unsigned int get_stabilization() const;

    // Setter: Updates stabilization value
    void set_stablization(unsigned int stabilization);

    // Getter: Returns points needed to activate ultimate ability
    unsigned int get_points_to_ulta() const;

    // Setter: Updates ultimate ability points
    void set_points_to_ulta(unsigned int points_to_ulta);

private:
    unsigned int _stabilization;
    unsigned int _points_to_ulta;
};

// Prevents multiple inclusions of this header file
#endif //BAZOOKRON_H
