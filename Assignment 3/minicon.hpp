/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment3: Transformers classes
 */

#ifndef MINICON
#define MINICON
#include "weapon.h"
#include "transformer.hpp"


class Minicon: public Transformer {

public:
	Minicon(const std::string &name, const uint &level, Weapon &blaster, const uint &strength,
const uint &fuel, const uint &ammo);

	bool work();

	void setEnergy(const uint &energy);
	void setSize(const uint &size);

	uint getEnergy();
	uint getSize();
private:
	uint _energy;
	uint _size;
};

#endif