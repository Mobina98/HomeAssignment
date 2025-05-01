#ifndef MEDIC_H
#define MEDIC_H
#include "transformer.h"

class Medic : public Transformer
{
public:
    Medic(const std::string &name, const std::string &fraction, const int &health, const std::string &gun_type,
          const int &damage, const int &ammo, const int &move_speed);

    ~Medic() = default;

    bool heal() const;

    bool ultimate() override;

    unsigned int get_medicines() const;

    void set_medicines(unsigned int medicines);

    unsigned int get_points_to_ulta() const;

    void set_points_to_ulta(unsigned int points_to_ulta);

private:
    unsigned int _medicines;
    unsigned int _points_to_ulta;
};

#endif //MEDIC_H
