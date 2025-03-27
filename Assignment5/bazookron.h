#ifndef BAZOOKRON_H
#define BAZOOKRON_H
#include "transformer.h"


class Bazookron : public Transformer {
public:
    Bazookron(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
              const int &damage, const int &ammo, const int &move_speed);

    ~Bazookron() = default;


    bool guide_gun();

    bool attack() const override;

    bool ultimate() override;

    unsigned int get_stabilization() const;

    void set_stablization(unsigned int stabilization);

    unsigned int get_points_to_ulta() const;

    void set_points_to_ulta(unsigned int points_to_ulta);

private:
    unsigned int _stabilization;
    unsigned int _points_to_ulta;
};


#endif //BAZOOKRON_H