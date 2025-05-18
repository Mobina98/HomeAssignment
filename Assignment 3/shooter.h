#ifndef SHOOTER_H
#define SHOOTER_H
#include "transformer.h"


// Shooter class declaration - inherits publicly from Transformer
class Shooter : public Transformer {
public:
    Shooter(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
            const int &damage, const int &ammo, const int &move_speed);

    // 'override' keyword confirms we're overriding a base class virtual destructor
    ~Shooter() override = default;

    // Defense action - returns success status
    bool defend();

    // Ultimate ability activation - returns success status
    // Marked 'override' indicating this replaces a virtual method from Transformer
    bool ultimate() override;

    // Accessor for rage resource
    unsigned int get_rage();

    // Mutator for rage management
    void set_rage(unsigned int rage);

    // Accessor for ultimate ability progress
    unsigned int get_points_to_ulta();

    // Mutator for ultimate ability tracking
    void set_points_to_ulta(unsigned int points_to_ulta);

private:
    unsigned int _rage;  // Rage meter
    unsigned int _points_to_ulta;  // Ultimate ability charge counter
};


#endif //SHOOTER_H
