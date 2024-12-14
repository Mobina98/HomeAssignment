/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment5: Transformers classes
 */

#include "transformer.hpp"
#include "autobot.hpp"
#include "decepticon.hpp"
#include "minicon.hpp"
#include <vector>
#include <variant>
#include <memory>

int main() {
    /*
    Transformer hero;
    hero.fire();
    hero.jump();
    hero.setFuel(70);
    std::cout << hero << '\n';

    std::cout << '\n';

    Autobot hero2("Optimus");
    hero2.setPowerOfBlaster(100);
    hero2.setColor("purple");
    hero2.fire();
    std::cout << hero2 << '\n';

    std::cout << '\n';

    Decepticon enemy;
    enemy.setName("Enemy");
    enemy.fire();
    enemy.jump();
    enemy.setLengthOfBlade(20);
    enemy.setSharpnessOfBlade(300);
    std::cout << enemy << '\n';

    std::cout << '\n';

    Instrument pickaxe(100, 50);

    Minicon builder("Barak", &pickaxe);
    builder.setSize(100);
    builder.setEnergy(1000);
    builder.work();
    builder.work();
    std::cout << builder << '\n';

    std::cout << '\n';
    */
    /*
    Transformer trans1("cplusplus");
    trans1.setStrength(1000);
    Transformer trans2("python");
    trans2.setStrength(5000);

    std::cout << (trans1 < trans2) << '\n';

    Autobot atbot1;
    atbot1.setPowerOfBlaster(100);
    Autobot atbot2;
    atbot2.setPowerOfBlaster(200);

    std::cout << (atbot1 > atbot2) << '\n';

    Decepticon dec1;
    dec1.setSharpnessOfBlade(2);
    dec1.setLengthOfBlade(5);
    Decepticon dec2;
    dec2.setSharpnessOfBlade(3);
    dec2.setLengthOfBlade(3);

    std::cout << (dec1 > dec2) << '\n';

    Instrument pickaxe2(100, 50);
    Minicon minc1("Barak1", &pickaxe2);
    minc1.setEnergy(50);
    minc1.setSize(2);
    Minicon minc2("Barak2", &pickaxe2);
    minc2.setEnergy(33);
    minc2.setSize(3);

    std::cout << (minc2 > minc1) << '\n';
    */

    Autobot a;
    a.transform();

    Decepticon enemy;
    Decepticon* b = &enemy;
    b->openFire();
    
    using VarType = std::variant<std::shared_ptr<Transformer>, std::shared_ptr<Autobot>, std::shared_ptr<Decepticon>>;
    
    std::vector<VarType> arr;
    
    for (int i = 0; i < 3; ++i) {
        Transformer t;
        arr.emplace_back(std::make_shared<Transformer>(t));
    }
    for (int i = 0; i < 3; ++i) {
        Autobot a;
        arr.emplace_back(std::make_shared<Autobot>(a));
    }
    for (int i = 0; i < 3; ++i) {
        Decepticon d;
        arr.emplace_back(std::make_shared<Decepticon>(d));
    }

    std::cout << "\nTesting vector of pointers...\n";

    for (auto& item : arr) {
        std::visit([](const auto& ptr) {
            ptr->transform();
            ptr->openFire();
            ptr->ulta();

            std::cout << '\n';
        }, item);
    }


    return 0;
}