#ifndef BerserkerWeapon_hpp
#define BerserkerWeapon_hpp

#include "Weapon.hpp"

class BerserkerWeapon: public Weapon {
public:
    BerserkerWeapon(Unit* owner);
    ~BerserkerWeapon();
    
    void attack(Unit* enemy);
    void counterAttack(Unit* enemy);
};

#endif /* BerserkerWeapon_hpp */
