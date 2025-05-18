#ifndef GUN_TYPE_H
#define GUN_TYPE_H


// Constructor
class Gun {
public:
    Gun(const std::string &gun_type, const unsigned int &damage, const unsigned int &ammo);

    // Default destructor
    ~Gun() = default;

    // Returns the gun's model
    std::string get_gun_type() const;

    // Sets the gun type
    void set_gun_type(std::string gun_type);

    // Returns current ammo count
    unsigned int get_ammo() const;

    // Updates ammo count
    void set_ammo(const unsigned int ammo);

    // Returns damage per shot
    unsigned int get_damage() const;

    // Updates damage value
    void set_damage(const unsigned int damage);

protected:  // Accessible by derived classes
    std::string _gun_type;
    unsigned int _ammo;
    unsigned int _damage;
};

// AKM - A type of assault rifle (inherits from Gun)
class AKM : public Gun {
public:
    AKM(const std::string &name, const unsigned int &damage, const unsigned int &ammo);

    ~AKM() = default;
};

// AWP - A high-power sniper rifle
class AWP : public Gun {
public:
    AWP(const std::string &name, const unsigned int &damage, const unsigned int &ammo);

    ~AWP() = default;
};

// Bazooka - Explosive projectile weapon
class Bazooka : public Gun {
public:
    Bazooka(const std::string &name, const unsigned int &damage, const unsigned int &ammo);

    ~Bazooka() = default;
};

class Arm : public Gun {
public:
    Arm(const std::string &name, const unsigned int &damage, const unsigned int &ammo);

    ~Arm() = default;
};

// Prevents multiple inclusions of this file
#endif //GUN_TYPE_H
