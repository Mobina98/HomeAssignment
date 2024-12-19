/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment3: Transformers classes
 */

#ifndef TRANSFORMER
#define TRANSFORMER

#include <iostream>
#include <string>

class Transformer {
private:
	std::string _name;
	uint _level;
	uint _strength;
	uint _fuel;
	uint _ammo;
public:
	//Transformer(std::string name = "Untitled", uint level = 0, uint strength = 0, uint fuel = 0, uint ammo = 0);
	Transformer(const std::string &name, const uint &level, const uint &strength, const uint &fuel, const uint &ammo);
	Transformer(const std::string &name);
	
	~Transformer();

	void setName(const std::string &name);
	void setLevel(const uint &level);
	void setStrength(const uint &strength);
	void setFuel(const uint &fuel);
	void setAmmo(const uint &ammo);

	std::string getName();
	uint getLevel();
	uint getStrength();
	uint getFuel();
	uint getAmmo();

	bool fire();
	bool move();
	bool jump();
};

#endif