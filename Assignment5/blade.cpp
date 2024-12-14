/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment5: Transformers classes
 */

#include "blade.hpp"

Blade::Blade(const uint &sharpness, const uint &length) :
    _sharpness(sharpness),
    _length(length)
{}

Blade::Blade() :
    Blade(0, 0)
{}



void Blade::setSharpness(const uint &sharpness) {
    _sharpness = sharpness;
}

void Blade::setLength(const uint &length) {
    _length = length;
}


uint Blade::getSharpness() const {
    return _sharpness;
}

uint Blade::getLength() const {
    return _length;
}