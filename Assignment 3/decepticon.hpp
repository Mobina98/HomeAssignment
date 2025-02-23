/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment3: Transformers classes
 */

#ifndef DECEPTICON
#define DECEPTICON

#include "transformer.hpp"
#include "weapon.h"

class Decepticon: public Transformer {

public:
	Decepticon(const std::string &name, const uint &level, Weapon &blaster, const uint &strength,
const uint &fuel, const uint &ammo);
	Decepticon();

	void setSharpnessOfBlade(const uint &sharpnessOfBlade);
	void setLengthOfBlade(const uint &lengthOfBlade);

	bool agress();

	uint getSharpnessOfBlade();
	uint getLengthOfBlade();
private:
	uint _sharpnessOfBlade;
	uint _lengthOfBlade;
};

#endif