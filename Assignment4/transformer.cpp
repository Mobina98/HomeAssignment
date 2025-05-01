#include <iostream>
#include "transformer.h"
#include "voice.h"

Transformer::Transformer(const std::string &name, const std::string &fraction, const int &health,
                         const std::string &gun_type, const int &damage, const int &ammo, const int &move_speed, const Voice &voice)
{
    set_name(name);
    set_health(health);
    set_gun_type(gun_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    _voice = new Voice(voice);
    std::cout << name << " was created" << std::endl;
}

Transformer::Transformer(const std::string &name, const std::string &fraction, const int &health,
                         const std::string &gun_type, const int &damage, const int &ammo, const int &move_speed)
{
    set_name(name);
    set_health(health);
    set_gun_type(gun_type);
    set_damage(damage);
    set_ammo(ammo);
    set_move_speed(move_speed);
    set_fraction(fraction);
    _voice = nullptr;
    std::cout << name << " was created" << std::endl;
}

Transformer::~Transformer()
{
    delete _voice;
    _voice = nullptr;
    std::cout << get_name() << " was destroyed" << std::endl;
}

std::string Transformer::get_name() const
{
    return _name;
}

void Transformer::set_name(std::string name)
{
    _name = std::move(name);
}

unsigned int Transformer::get_health() const
{
    return _health;
}

void Transformer::set_health(unsigned int health)
{
    _health = health;
}

std::string Transformer::get_gun_type() const
{
    return _gun_type;
}

void Transformer::set_gun_type(std::string gun_type)
{
    _gun_type = std::move(gun_type);
}

unsigned int Transformer::get_damage() const
{
    return _damage;
}

void Transformer::set_damage(unsigned int damage)
{
    _damage = damage;
}

unsigned int Transformer::move_speed() const
{
    return _move_speed;
}

void Transformer::set_move_speed(unsigned int move_speed)
{
    _move_speed = move_speed;
}

unsigned int Transformer::get_ammo() const
{
    return _ammo;
}

void Transformer::set_ammo(unsigned int ammo)
{
    _ammo = ammo;
}

std::string Transformer::get_fraction() const
{
    return _fraction;
}

void Transformer::set_fraction(std::string fraction)
{
    _fraction = std::move(fraction);
}

Voice *Transformer::get_voice() const
{
    return _voice;
}

void Transformer::set_voice(const Voice &voice)
{
    if (_voice != nullptr)
    {
        *_voice = voice;
        return;
    }
    _voice = new Voice(voice);
}

bool Transformer::transform() const
{
    std::cout << get_name() << " transforms" << std::endl;
    return true;
}

bool Transformer::attack() const
{
    std::cout << get_name() << " attacks with " << get_gun_type() << std::endl;
    return true;
}

bool Transformer::move() const
{
    std::cout << get_name() << " moves" << std::endl;
    return true;
}

bool Transformer::jump() const
{
    std::cout << get_name() << " jumps" << std::endl;
    return true;
}

bool Transformer::ultimate()
{
    std::cout << "Transformer ultimates" << std::endl;
    return true;
}

bool Transformer::phrase()
{
    std::cout << "Today you will die!" << std::endl;
    return true;
}

bool Transformer::operator==(const Transformer &comparable) const
{
    if (this->_health == comparable._health)
    {
        std::cout << "Health matches" << std::endl;
        return true;
    }
    else
    {
        std::cout << "Health mismatch!" << std::endl;
        return false;
    }
}

bool Transformer::operator!=(const Transformer &comparable) const
{
    if (this->_health != comparable._health)
    {
        std::cout << "Health mismatch" << std::endl;
        return true;
    }
    else
    {
        std::cout << "Health matches" << std::endl;
        return false;
    }
}
bool Transformer::operator<=(const Transformer &comparable) const
{
    if (this->_health < comparable._health)
    {
        std::cout << "Health " << this->get_name() << " less than " << comparable.get_name() << std::endl;
        return true;
    }
    else if (this->_health > comparable._health)
    {
        std::cout << "Health " << this->_name << " more than " << comparable.get_name() << std::endl;
        return false;
    }
    std::cout << "Health matches" << std::endl;
    return true;
}

bool Transformer::operator>=(const Transformer &comparable) const
{
    if (this->_health > comparable._health)
    {
        std::cout << "Health " << this->get_name() << " more than " << comparable.get_name() << std::endl;
        return true;
    }
    else if (this->_health < comparable._health)
    {
        std::cout << "Health " << this->_name << " less than " << comparable.get_name() << std::endl;
        return false;
    }
    std::cout << "Health matches" << std::endl;
    return true;
}

bool Transformer::operator>(const Transformer &comparable) const
{
    if (this->_health > comparable._health)
    {
        std::cout << "Health " << this->get_name() << " more than " << comparable.get_name() << std::endl;
        return true;
    }

    std::cout << "Health " << this->_name << " less than " << comparable.get_name() << std::endl;
    return false;
}

bool Transformer::operator<(const Transformer &comparable) const
{
    if (this->_health < comparable._health)
    {
        std::cout << "Health " << this->get_name() << " less than " << comparable.get_name() << std::endl;
        return true;
    }

    std::cout << "Health " << this->_name << " more than " << comparable.get_name() << std::endl;
    return false;
}

std::ostream &operator<<(std::ostream &os, const Transformer &transformer)
{
    os << "Fraction: " << transformer.get_fraction() << "\nName: " << transformer.get_name()
       << "\nGun: " << transformer.get_gun_type() << "\nDamage: " << transformer.get_damage()
       << "\nAmmmo: " << transformer.get_ammo() << "\nMove speed: " << transformer.move_speed()
       << "\nHealth: " << transformer.get_health() << std::endl;
    return os;
}

std::istream &operator>>(std::istream &is, Transformer &transformer)
{
    std::string name, fraction, gun_type;
    unsigned int health, damage, ammo, move_speed;
    
    std::cout << "Enter name: ";
    is >> name;
    transformer.set_name(name);

    std::cout << "Enter fraction: ";
    is >> fraction;
    transformer.set_fraction(fraction);

    std::cout << "Enter health: ";
    is >> health;
    transformer.set_health(health);

    std::cout << "Enter gun type: ";
    is >> gun_type;
    transformer.set_gun_type(gun_type);

    std::cout << "Enter damage: ";
    is >> damage;
    transformer.set_damage(damage);

    std::cout << "Enter ammo: ";
    is >> ammo;
    transformer.set_ammo(ammo);

    std::cout << "Enter move speed: ";
    is >> move_speed;
    transformer.set_move_speed(move_speed);

    return is;
}
