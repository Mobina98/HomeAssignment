/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment5: Transformers classes
 */

#include "minicon.hpp"

Minicon::Minicon(const std::string &name, Instrument* pickaxe, const uint &energy, const uint &size) :
    Transformer(name),
    _pickaxe(pickaxe),
    _energy(energy),
    _size(size)
{
    std::cout << "Minicon " << name << " has been created!\n";
}

Minicon::Minicon(const std::string &name, Instrument* pickaxe) :
    Minicon(name, pickaxe, 0, 0)
{}


bool Minicon::operator<(const Minicon& other) const {
    return (_energy * _size) < (other.getEnergy() * other.getSize());
}

bool Minicon::operator>(const Minicon& other) const {
    return (_energy * _size) > (other.getEnergy() * other.getSize());
}


bool Minicon::work() {
    return _pickaxe->use();
}


void Minicon::setEnergy(const uint &energy) {
    _energy = energy;
}

void Minicon::setSize(const uint &size) {
    _size = size;
}


uint Minicon::getEnergy() const {
    return _energy;
}

uint Minicon::getSize() const {
    return _size;
}


std::ostream& operator<<(std::ostream& os, const Minicon& minc) {
    os << minc.getName() << ' ';
    os << minc.getEnergy() << ' ';
    os << minc.getSize();

    return os;
}