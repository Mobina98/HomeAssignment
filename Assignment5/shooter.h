#ifndef SHOOTER_H
#define SHOOTER_H
#include "transformer.h"


class Shooter : public Transformer {
public:
    Shooter(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
            const int &damage, const int &ammo, const int &move_speed);

    ~Shooter() override = default;

    bool defend();

    bool ultimate() override;

    bool attack() const override;

    unsigned int get_rage();

    void set_rage(unsigned int rage);

    unsigned int get_points_to_ulta();

    void set_points_to_ulta(unsigned int points_to_ulta);

    std::string get_class_name() const override {
        std::string name = "Class: Shooter\n";
        return name;
    }

private:
    unsigned int _rage;
    unsigned int _points_to_ulta;
};


#endif //SHOOTER_H