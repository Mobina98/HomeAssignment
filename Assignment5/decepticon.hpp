/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment5: Transformers classes
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

    bool operator<(const Decepticon& other) const;
    bool operator>(const Decepticon& other) const;

    void transform() override;
    void openFire() override;
    void ulta() override;

    void setSharpnessOfBlade(const uint &sharpnessOfBlade);
    void setLengthOfBlade(const uint &lengthOfBlade);

    uint getSharpnessOfBlade() const;
    uint getLengthOfBlade() const;
};

std::ostream& operator<<(std::ostream& os, const Decepticon& dec);

#endif