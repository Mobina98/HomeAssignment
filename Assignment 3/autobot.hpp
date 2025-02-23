/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment3: Transformers classes
 */

#ifndef AUTOBOT
#define AUTOBOT

#include "transformer.hpp"
#include "weapon.h"

class Autobot: public Transformer {
public:
	Autobot(const std::string &name, const uint &level, Weapon &blaster, const uint &strength,
const uint &fuel, const uint &ammo);

	Autobot();

	std::string getColor();
	void setColor(const std::string &color);

	bool phrase(const std::string &phrase);
	bool check();

	unsigned int get_power_of_blaster() const;
	void set_power_of_blaster(unsigned int power_of_blaster);

private:
	unsigned int _powerOfBlaster;
	std::string _color;
};

#endif