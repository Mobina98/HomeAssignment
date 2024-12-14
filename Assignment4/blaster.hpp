/* Author: Mobina Ahmadimasoud
 * e-mail: st067173@student.spbu.ru
 * Assignment4: Transformers classes
 */

#ifndef BLASTER
#define BLASTER

#include <iostream>

class Blaster {
private:
    uint _power;
    uint _capacity;
public:
    Blaster(const uint &power, const uint &capacity);
    Blaster();

    void setPower(const uint &power);
    void setCapacity(const uint &capacity);

    uint getPower() const;
    uint getCapacity() const;
};



#endif