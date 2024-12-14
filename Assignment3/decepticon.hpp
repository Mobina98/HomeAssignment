/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment3: Transformers classes
 */

#ifndef DECEPTICON
#define DECEPTICON

#include "transformer.hpp"
#include "blade.hpp"

class Decepticon: public Transformer {
private:
	Blade _sword;
public:
	Decepticon(const std::string &name, const uint &sharpnessOfBlade, const uint &lengthOfBlade);
	Decepticon(const std::string &name);
	Decepticon();

	void setSharpnessOfBlade(const uint &sharpnessOfBlade);
	void setLengthOfBlade(const uint &lengthOfBlade);

	uint getSharpnessOfBlade();
	uint getLengthOfBlade();
};

#endif