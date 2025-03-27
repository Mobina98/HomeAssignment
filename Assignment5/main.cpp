#include <iostream>
#include "gun_type.h"
#include "transformer.h"
#include "shooter.h"

int main()
{
    AKM akm = AKM("AKM", 30, 90);
    Transformer transformer = Transformer("Transformer", "Divine", 200,
                                          akm.get_gun_type(), akm.get_damage(), akm.get_ammo(), 100);

    transformer.attack();

    std::cout << transformer << std::endl;

    Shooter shooter = Shooter("Shooter", "Autobot", 100,
                              akm.get_gun_type(), akm.get_damage(), akm.get_ammo(), 100);

    std::cout << shooter << std::endl;
}