#ifndef SoldierWeapon_hpp
#define SoldierWeapon_hpp

#include "Weapon.hpp"

class SoldierWeapon : public Weapon {
public:
    SoldierWeapon(Unit* owner);
    ~SoldierWeapon();
    
    void attack(Unit* enemy);
    void counterAttack(Unit* enemy);
};


#endif /* SoldierWeapon_hpp */
