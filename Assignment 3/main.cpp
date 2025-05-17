#include <iostream>
#include "gun_type.h"
#include "transformer.h"
#include "shooter.h"

int main()
{
    // Creates an "AKM" gun object with name "AKM", damage 30, and ammo 90
    AKM akm = AKM("AKM", 30, 90);
    
    // Creates a "Transformer" character with:
    // - Name: "Transformer"
    // - Type: "Divine"
    // - Health: 200
    // - Gun details taken from 'akm' (type, damage, ammo)
    // - Additional parameter: 100 (could be armor, energy, etc.)
    Transformer transformer = Transformer("Transformer", "Divine", 200,
                                          akm.get_gun_type(), akm.get_damage(), akm.get_ammo(), 100);

    // Creates a "Shooter" character with:
    // - Name: "Shooter"
    // - Type: "Autobot"
    // - Health: 100
    // - Gun details taken from 'akm' (type, damage, ammo)
    // - Additional parameter: 100 (could be speed, shield, etc.)
    Shooter shooter = Shooter("Shooter", "Autobot", 100,
                              akm.get_gun_type(), akm.get_damage(), akm.get_ammo(), 100);


}
