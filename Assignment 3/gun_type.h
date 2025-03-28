#ifndef GUN_TYPE_H
#define GUN_TYPE_H


class Gun {
public:
    Gun(const std::string &gun_type, const unsigned int &damage, const unsigned int &ammo);

    ~Gun() = default;

    std::string get_gun_type() const;

    void set_gun_type(std::string gun_type);

    unsigned int get_ammo() const;

    void set_ammo(const unsigned int ammo);

    unsigned int get_damage() const;

    void set_damage(const unsigned int damage);

protected:
    std::string _gun_type;
    unsigned int _ammo;
    unsigned int _damage;
};

class AKM : public Gun {
public:
    AKM(const std::string &name, const unsigned int &damage, const unsigned int &ammo);

    ~AKM() = default;
};

class AWP : public Gun {
public:
    AWP(const std::string &name, const unsigned int &damage, const unsigned int &ammo);

    ~AWP() = default;
};

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

#endif //GUN_TYPE_H