#ifndef RogueWeapon_hpp
#define RogueWeapon_hpp

#include "Weapon.hpp"
#include "../Unit/Rogue.hpp"

class RogueWeapon : public Weapon {
public:
    RogueWeapon(Unit* owner);
    ~RogueWeapon();
    
    void attack(Unit* enemy);
    void counterAttack(Unit* enemy);
};

#endif /* RogueWeapon_hpp */
