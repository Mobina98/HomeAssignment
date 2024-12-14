/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment3: Transformers classes
 */

#include "transformer.hpp"
#include "autobot.hpp"
#include "decepticon.hpp"
#include "minicon.hpp"

int main() {
	Transformer hero;
	hero.fire();
	hero.jump();
	hero.setFuel(70);	
	std::cout << hero.getAmmo() << '\n';
	std::cout << hero.getFuel() << '\n';
	std::cout << hero.getName() << '\n';

	std::cout << '\n';

	Autobot hero2("Optimus");
	hero2.setPowerOfBlaster(100);
	hero2.setColor("purple");
	hero2.fire(); 
	std::cout << hero2.getPowerOfBlaster() << '\n';
	std::cout << hero2.getColor() << '\n';
	std::cout << hero2.getName() << '\n';
	

	std::cout << '\n';

	Decepticon enemy;
	enemy.setName("Enemy");
	enemy.fire();
	enemy.jump();
	enemy.setLengthOfBlade(20);
	enemy.setSharpnessOfBlade(300);
	std::cout << enemy.getName() << '\n';
	std::cout << enemy.getSharpnessOfBlade() << '\n';
	std::cout << enemy.getLengthOfBlade() << '\n';

	std::cout << '\n';

	Instrument pickaxe(100, 50);

	Minicon builder("Barak", &pickaxe);
	builder.setSize(100);
	builder.setEnergy(1000);
	builder.work();
	builder.work();
	std::cout << builder.getName() << '\n';
	std::cout << builder.getEnergy() << '\n';


	std::cout << '\n';

	return 0;
}