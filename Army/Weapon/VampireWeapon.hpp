#ifndef VampireWeapon_hpp
#define VampireWeapon_hpp

#include "Weapon.hpp"
#include "../Unit/Vampire.hpp"

class VampireWeapon : public Weapon {
public:
    VampireWeapon(Unit* owner);
    ~VampireWeapon();
    
    void attack(Unit* enemy);
    void counterAttack(Unit* enemy);
};

#endif /* VampireWeapon_hpp */
