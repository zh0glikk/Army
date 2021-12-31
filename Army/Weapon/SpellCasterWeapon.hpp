#ifndef SpellCasterWeapon_hpp
#define SpellCasterWeapon_hpp

#include "Weapon.hpp"

class SpellCasterWeapon : public Weapon {
public:
    SpellCasterWeapon(Unit* owner);
    ~SpellCasterWeapon();
    
    void attack(Unit* enemy);
    void counterAttack(Unit* enemy);
};

#endif /* SpellCasterWeapon_hpp */
