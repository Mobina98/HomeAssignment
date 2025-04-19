#include <iostream>
#include "gun_type.h"
#include "transformer.h"
#include "shooter.h"
#include "sniper.h"
#include "medic.h"
#include "bazookron.h"

int main()
{
    AKM akm = AKM("AKM", 30, 90);
    AWP awp = AWP("AWP", 120, 10);
    Bazooka bazooka = Bazooka("Bazooka", 200, 5);
    Arm arm = Arm("Arm", 10, 1);
    
    Transformer transformer = Transformer("Transformer", "Divine", 200,
                                          akm.get_gun_type(), akm.get_damage(), akm.get_ammo(), 100);

    Shooter shooter = Shooter("Shooter", "Autobot", 100,
                              akm.get_gun_type(), akm.get_damage(), akm.get_ammo(), 100);
                              
    Sniper sniper = Sniper("Sniper", "Decepticon", 80,
                           awp.get_gun_type(), awp.get_damage(), awp.get_ammo(), 70);
                           
    Medic medic = Medic("Medic", "Autobot", 120,
                         arm.get_gun_type(), arm.get_damage(), arm.get_ammo(), 90);
                         
    Bazookron bazookron = Bazookron("Bazookron", "Decepticon", 150,
                                   bazooka.get_gun_type(), bazooka.get_damage(), bazooka.get_ammo(), 60);

    std::cout << "=== Transformer Demo ===" << std::endl;
    transformer.transform();
    transformer.attack();
    transformer.move();
    transformer.jump();
    transformer.ultimate();
    
    // Call the static phrase method
    Transformer::phrase();
    
    std::cout << "\n=== Shooter Demo ===" << std::endl;
    shooter.transform();
    shooter.attack();
    shooter.defend();
    shooter.ultimate();
    
    std::cout << "\n=== Sniper Demo ===" << std::endl;
    sniper.transform();
    sniper.attack();
    sniper.scope();
    sniper.hide();
    sniper.ultimate();
    
    std::cout << "\n=== Medic Demo ===" << std::endl;
    medic.transform();
    medic.attack();
    medic.heal();
    medic.ultimate();
    
    std::cout << "\n=== Bazookron Demo ===" << std::endl;
    bazookron.transform();
    bazookron.attack();
    bazookron.guide_gun();
    bazookron.ultimate();
    
    return 0;
}