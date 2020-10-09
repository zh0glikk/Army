#ifndef WerewolfWeapon_hpp
#define WerewolfWeapon_hpp

#include "Weapon.hpp"

class WerewolfWeapon : public Weapon {
public:
    WerewolfWeapon(Unit* owner);
    ~WerewolfWeapon();
    
    void attack(Unit* enemy);
    void counterAttack(Unit* enemy);
};

#endif /* WerewolfWeapon_hpp */
