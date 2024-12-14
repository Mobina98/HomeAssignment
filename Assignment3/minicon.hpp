/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment3: Transformers classes
 */

#ifndef MINICON
#define MINICON

#include "transformer.hpp"
#include "instrument.hpp"

class Minicon: public Transformer {
private:
	Instrument* _pickaxe;
	uint _energy;
	uint _size;
public:
	Minicon(const std::string &name, Instrument* pickaxe, const uint &energy, const uint &size);
	Minicon(const std::string &name, Instrument* pickaxe);

	bool work();

	void setEnergy(const uint &energy);
	void setSize(const uint &size);

	uint getEnergy();
	uint getSize();
};

#endif